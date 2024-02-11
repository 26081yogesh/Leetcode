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
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head -> next == NULL){
            return head;
        }
        vector<int> v;
        ListNode *temp = head;
        while(temp != NULL){
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        sort(v.begin(), v.end());
        temp = head;
        for(auto i:v){
            temp -> val = i;
            temp = temp -> next;
        }
        return head;
    }
};