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
        // Brute Force  --> TC O(2N) --> SC O(N) - extra space 
        // if(head == NULL or head -> next == NULL){
        //     return head;
        // }
        // vector<int> ans;
        // ListNode *temp = head;
        // while(temp != NULL and temp -> next != NULL){
        //     ans.push_back(temp -> val);
        //     temp = temp -> next -> next;
        // }
        // if(temp){
        //     ans.push_back(temp -> val);
        // }
        // temp = head -> next;;
        // while(temp != NULL and temp -> next != NULL){
        //     ans.push_back(temp -> val);
        //     temp = temp -> next -> next;
        // }
        // if(temp){
        //     ans.push_back(temp -> val);
        // }
        // temp = head;
        // int i = 0;
        // while(temp != NULL){
        //     temp -> val = ans[i++];
        //     temp = temp -> next;
        // }
        // return head;





        if(head == NULL or head -> next == NULL){
            return head;
        }
        ListNode *odd = head;
        ListNode *even = head -> next;
        ListNode *evenNode = head -> next;
        while(even != NULL and even -> next != NULL){
            odd -> next = odd -> next -> next;
            even -> next = even -> next -> next;
            odd = odd -> next;
            even = even -> next;
        }
        odd -> next = evenNode;
        return head;
    }
};