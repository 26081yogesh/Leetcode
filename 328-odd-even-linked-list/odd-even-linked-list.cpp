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
    ListNode* oddEvenList(ListNode* head) {
        // Brute Force
        vector<int> odd;
        vector<int> even;
        ListNode *temp = head;
        int index = 0;
        while(temp != NULL){
            if(index % 2 == 0){
                even.push_back(temp -> val);
            }
            else{
                odd.push_back(temp -> val);
            }
            index++;
            temp = temp -> next;
        }
        ListNode *h = new ListNode(-100);
        temp = h;
        for(auto i:even){
            ListNode *newNode = new ListNode(i);
            temp -> next = newNode;
            temp = temp -> next;
        }
        for(auto i:odd){
            ListNode *newNode = new ListNode(i);
            temp -> next = newNode;
            temp = temp -> next;
        }
        return h -> next;
    }
};