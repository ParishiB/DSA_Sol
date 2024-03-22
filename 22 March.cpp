class Solution {
public:
    
    ListNode* reverse(ListNode* ptr){
        ListNode* pre = NULL;
        ListNode* next = NULL;
        
        while(ptr){
            next = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = next;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        slow->next = reverse(slow->next);
        slow = slow->next;
        
        ListNode* dummy = head;
        
        while(slow){
            if(dummy->val != slow->val) return false;
            dummy = dummy->next;
            slow = slow->next;
        }
        
        return true;
    }
};
