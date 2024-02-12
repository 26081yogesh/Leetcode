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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL or head -> next == NULL){
            return head;
        }
        
        ListNode *temp = head;
        ListNode *tail = head;
        int l = 1;
        while(temp -> next != NULL){
            temp = temp -> next;
            l++;
        }

        int diff = l - (k % l);
        
        tail = temp;
        temp = head;
        int i = 1;
        while(i < diff){
            i++;
            temp = temp -> next;
        }
        tail -> next = head;
        head = temp -> next;
        temp -> next = NULL;
        return head;
    }
};