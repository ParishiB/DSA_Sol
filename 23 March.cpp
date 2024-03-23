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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=curr->next;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=slow->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=reverse(slow->next);
        ListNode* first=head;
        slow->next=NULL;
        while(second)//Because second Linked List will always be smaller or equals to the first list.
        {
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }

    }
};
