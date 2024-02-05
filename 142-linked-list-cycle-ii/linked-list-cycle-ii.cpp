/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool isCycle = false;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        if(isCycle){
            fast = head;
            while(slow != fast){
                fast = fast -> next;
                slow = slow -> next;
            }
            return slow;
        }
        return NULL;
    }
};