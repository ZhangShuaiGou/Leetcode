/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = false;

        int num = l1->val + l2->val;
        if(num>9){
            num -= 10;
            carry = true;
        }

        ListNode* l3 = new ListNode(num);
        ListNode* p = l3;

        l1 = l1->next;
        l2 = l2->next;

        while(l1 || l2){
            ListNode* tmp;
            if(l1==nullptr){
                l1 = new ListNode(0);
            }

            if(l2==nullptr){
                l2 = new ListNode(0);             
            }


            int t_num = l1->val + l2->val;
            
            if(carry==true){
                t_num++;
                carry = false;
            }

            if(t_num>9){
                t_num -= 10;
                carry = true;
            }

            tmp = new ListNode(t_num);         

            l1 = l1->next;
            l2 = l2->next;

            p->next = tmp;
            p = p->next;
        }

        if(carry==true){
            ListNode* tmp = new ListNode(1); 
            p->next = tmp;
        }

        return l3;
    }
};
// @lc code=end

