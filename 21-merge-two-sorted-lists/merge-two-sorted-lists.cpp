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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        if(list1 == NULL and list2 == NULL){
            return NULL;
        }
        if(list1 == NULL and list2 != NULL){
            return list2;
        }
        if(list1 != NULL and list2 == NULL){
            return list1;
        }
        ListNode *temp = list1;
        while(temp != NULL){
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        temp = list2;
        while(temp != NULL){
            v.push_back(temp -> val);
            temp = temp -> next;
        }

        sort(v.begin(), v.end());
        ListNode *head = NULL;
        for(auto i:v){
            ListNode *newNode = new ListNode(i);
            if(head == NULL){
                head = newNode;
                temp = head;
            }
            else{
                temp -> next = newNode;
                temp = newNode;
            }
        }
        return head;
    }
};