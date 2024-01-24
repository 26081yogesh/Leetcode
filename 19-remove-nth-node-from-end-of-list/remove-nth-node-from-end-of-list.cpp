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
    int len(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = len(head);
        int pos = l-n;
        int  i = 0;
        ListNode *prev = head, *temp = head;
        if(n == l){
            head = head -> next;
            delete temp;
            return head;
        }
        while(i < pos){
            i++;
            prev = temp;
            temp = temp -> next;
        }
        if(n == 1){
            prev -> next = NULL;
        }
        else{
            prev -> next = temp -> next;
        }
        delete temp;
        return head;
    }
};