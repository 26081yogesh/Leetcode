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
    ListNode *rev(ListNode *head){
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *forward = current;
        while(current != NULL){
            forward = current -> next;
            current -> next = prev;
            prev = current;
            current = forward;
        }
        return prev;
    }

    ListNode *getkthNode(ListNode *head, int k){
        int i = 1;
        ListNode *temp = head;
        while(temp != NULL and i < k){
            temp = temp -> next;
            i++;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        ListNode *prevNode = NULL;
        while(temp != NULL){
            ListNode *kthNode = getkthNode(temp, k);
            if(kthNode == NULL){
                break;
            }
            ListNode *nextNode = kthNode -> next;
            kthNode -> next = NULL;
            rev(temp);
            if(head == temp){
                head = kthNode;
            }
            else{
                prevNode -> next = kthNode;
            }
            prevNode = temp;
            temp = nextNode;

        }
        prevNode -> next = temp;
        return head;
    }
};