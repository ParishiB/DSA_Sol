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
    ListNode* solve(ListNode* curr , ListNode* prev){
        if(curr == nullptr)return prev;

        ListNode* nextnode = curr->next;
        curr->next = prev;
        return solve(nextnode,curr);
    }


    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode* curr = head;
        return solve(curr,nullptr);
    }
};
