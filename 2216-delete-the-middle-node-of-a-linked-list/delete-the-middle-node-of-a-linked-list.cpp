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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = head;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            prev = slow;
            slow = slow -> next;
        }
        if(head == slow){
            return NULL;
        }
        else if(head == prev and slow -> next == NULL){
            head -> next = NULL;
        }
        else if(slow -> next == NULL){
            prev -> next == NULL;
            cout<<"Hello";
        }
        else{
            cout<<"Hii";
            prev -> next = slow -> next;
        }
        return head;

    }
};