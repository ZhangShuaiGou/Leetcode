/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr){
            return nullptr;
        }
        head = reverseList(head);
        ListNode* temp = head;
        ListNode* prev = new ListNode();
        prev->next = head;

        if(n==1){
            temp = temp->next;
        }
        else{
            for(int i=0;i<n;i++){
                prev = prev->next;
            }

            if(prev->next!=nullptr){
                prev->val = prev->next->val;
                prev->next = prev->next->next;
            }
            else{
                head = reverseList(temp);
                head = head->next;
                return head;
            }
        }

        head = reverseList(temp);
        return head;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* pre = nullptr;
        while(head!=nullptr){
            ListNode* temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
        return pre;
    }
};
// @lc code=end

