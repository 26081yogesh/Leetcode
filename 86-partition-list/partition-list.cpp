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
        // vector<int> v1;
        // vector<int> v2;
        // ListNode *temp = head;
        // while(temp != NULL){
        //     if(temp -> val < x){
        //         v1.push_back(temp -> val);
        //     }
        //     else{
        //         v2.push_back(temp -> val);
        //     }
        //     temp = temp -> next;
        // }

        // ListNode *res = new ListNode(-100);
        // head = res;
        // temp = head;
        // for(auto i:v2){
        //     v1.push_back(i);
        // }
        // for(auto i:v1){
        //     ListNode *newNode = new ListNode(i);
        //     temp -> next = newNode;
        //     temp = temp -> next;
        // }
        // return head->next;


        // Better approach
        ListNode *l1 = head;
        ListNode *s1 = new ListNode(-100);
        ListNode *s2 = new ListNode(-100);
        ListNode *temp1 = s1;
        ListNode *temp2 = s2;
        while(l1 != NULL){
            if(l1 -> val < x){
                temp1 -> next = l1;
                temp1 = temp1 -> next;
            }
            else{
                temp2 -> next = l1;
                temp2 = temp2 -> next;
            }
            l1 = l1 -> next;
        }
        temp2 -> next = NULL;
        temp1 -> next = s2 -> next;
        return s1 -> next;
    }
};