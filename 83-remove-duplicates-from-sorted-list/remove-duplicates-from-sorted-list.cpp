/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> st;
        ListNode *temp = head;
        while(temp != NULL){
            st.insert(temp->val);
            temp = temp -> next;
        }
        ListNode *dummy = new ListNode(-1);
        temp = dummy;
        for(auto i:st){
            ListNode *newNode = new ListNode(i);
            temp -> next = newNode;
            temp = temp -> next;
        }
        return dummy -> next;
    }
};