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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *newNode = new ListNode(-100);
        ListNode *head = newNode;
        ListNode *temp = head;

        int carry = 0;
        while(temp1 != nullptr or temp2 != nullptr or carry != 0){
            int d1 = (temp1 != nullptr) ? temp1 -> val : 0;
            int d2 = (temp2 != nullptr) ? temp2 -> val : 0;
            int sum = d1 + d2 + carry;
            ListNode *newNode = new ListNode(sum % 10);
            temp -> next = newNode;
            carry = sum / 10;
            temp = temp -> next;
            temp1 = temp1 != nullptr ? temp1 -> next : nullptr;
            temp2 = temp2 != nullptr ? temp2 -> next : nullptr;
        }

        // while(temp1 != NULL){
        //     int sum = temp1 -> val + carry;
        //     ListNode *newNode = new ListNode(sum % 10);
        //     carry = sum / 10;
        //     temp -> next = newNode;
        //     temp = temp -> next;
        //     temp1 = temp1 -> next;
        // }
        // while(temp2 != NULL){
        //     int sum = temp2 -> val + carry;
        //     ListNode *newNode = new ListNode(sum % 10);
        //     carry = sum / 10;
        //     temp -> next = newNode;
        //     temp = temp -> next;
        //     temp2 = temp2 -> next;
        // }
        // if(carry != 0){
        //     ListNode *newNode = new ListNode(carry);
        //     temp -> next = newNode;
        // }
        return head -> next;
    }
};