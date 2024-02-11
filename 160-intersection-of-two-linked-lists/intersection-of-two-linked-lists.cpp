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

        // Brute Force Approach
        // ListNode *first = headA;
        // ListNode *second = headB;
        // map<ListNode*, int> mp;
        // while(first != NULL){
        //     mp[first]++;
        //     first = first -> next;
        // }
        // while(second != NULL){
        //     mp[second]++;
        //     second = second -> next;
        // }
        // for(auto i:mp){
        //     if(i.second > 1){
        //         return i.first;
        //     }
        // }
        // return NULL;

        // Better Approach
        int len1 = 1;
        int len2 = 1;
        ListNode *temp = headA;
        while(temp -> next != NULL){
            len1++;
            temp = temp -> next;
        }
        temp = headB;
        while(temp -> next != NULL){
            len2++;
            temp = temp -> next;
        }
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        bool isT1 = false;
        if(len1 < len2){
            isT1 = true;
        }

        int diff = abs(len2 - len1);
        int i = 0;
        if(isT1){    
            while(i < diff){
                temp2 = temp2 -> next;
                i++;
            }
        }
        else{
            while(i < diff){
                temp1 = temp1 -> next;
                i++;
            }
        }

        while(temp1 != NULL and temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return NULL;
    }
};