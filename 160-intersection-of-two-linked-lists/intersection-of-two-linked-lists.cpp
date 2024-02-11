/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include<bits/stdc++.h>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // TC -> O(n)
        // ListNode *first = headA;
        // ListNode *second = headB;
        // while(first != second){
        //     if(first == NULL){
        //         first = headB;
        //     }
        //     else{
        //         first = first -> next;
        //     }
        //     if(second == NULL){
        //         second = headA;
        //     }
        //     else{
        //         second = second -> next;
        //     }
        // }
        // return first;


        ListNode *first = headA;
        ListNode *second = headB;
        map<ListNode*, int> mp;
        while(first != NULL){
            mp[first]++;
            first = first -> next;
        }
        while(second != NULL){
            mp[second]++;
            second = second -> next;
        }
        for(auto i:mp){
            if(i.second > 1){
                return i.first;
            }
        }
        return NULL;
    }
};