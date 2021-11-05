/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        
        ListNode* p1;
        p1 = l1;
        ListNode* p2;
        p2 = l2;        
        ListNode* head = new ListNode();
        ListNode* pos = head;

        while(p1!=nullptr || p2!=nullptr){
            if(p1==nullptr){
                pos->val = p2->val;
                p2 = p2->next;
            }
            else if(p2==nullptr){
                pos->val = p1->val;
                p1 = p1->next;
            }
            else if(p1->val < p2->val){
                pos->val = p1->val;   
                p1 = p1->next;
            }
            else{
                pos->val = p2->val;
                p2 = p2->next;
            }

            if(p1!=nullptr || p2!=nullptr){
                pos->next = new ListNode();
                pos = pos->next;
            }
        }
    return head;
    }
};
// @lc code=end

