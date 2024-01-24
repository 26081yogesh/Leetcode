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
    ListNode *rev(ListNode *h){
        ListNode *current = h;
        ListNode *forward = NULL;
        ListNode *previous = NULL;
        while(current != NULL){
            forward = current -> next;
            current -> next = previous;
            previous = current;
            current = forward;
        }
        return previous;
    }
    int len(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        int mid = len(head)/2;
        int i = 0;
        ListNode *firstHalf = head;
        ListNode *temp = head;
        while(i < mid){
            temp = temp -> next;
            i++;
        }
        ListNode *secondHalf = rev(temp);

        while(secondHalf != NULL){
            if(firstHalf -> val != secondHalf -> val){
                return false;
            }
            firstHalf = firstHalf -> next;
            secondHalf = secondHalf -> next;
        }
        return true;
    }
};