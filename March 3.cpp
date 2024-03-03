19. Remove Nth Node From End of List

class Solution {
public:
   int len (ListNode* head){
       if(head == nullptr)return 0;
       int c= 0;
       while(head != nullptr){
           c++;
           head = head->next;
       }
       return c;
   }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = len(head);
        int k = sz - n;

        if(k == 0){
            ListNode* newhead = head->next;
            return newhead;
        }
        ListNode* prev= head;

        for(int i = 0 ; i < k - 1 ; i++){
            prev = prev->next;
        }

        ListNode* remove = prev->next;
        prev->next = remove->next;
        return head;
    }
};
