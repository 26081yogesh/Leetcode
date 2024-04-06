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
    ListNode* partition(ListNode* head, int x) {
        // Brute Force Approach
        vector<int> v1;
        vector<int> v2;
        ListNode *temp = head;
        while(temp != NULL){
            if(temp -> val < x){
                v1.push_back(temp -> val);
            }
            else{
                v2.push_back(temp -> val);
            }
            temp = temp -> next;
        }

        ListNode *res = new ListNode(-100);
        head = res;
        temp = head;
        for(auto i:v2){
            v1.push_back(i);
        }
        for(auto i:v1){
            ListNode *newNode = new ListNode(i);
            temp -> next = newNode;
            temp = temp -> next;
        }
        return head->next;
    }
};