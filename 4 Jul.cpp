class Solution {
    void addList(ListNode* &head, ListNode* &tail, int val) {
        if(head == NULL) {
            head = new ListNode(val);
            tail= head;
        }
        else {
            ListNode* newNode = new ListNode(val);
            tail->next = newNode;
            tail = newNode;
        }

        return;
    }
public:
    ListNode* mergeNodes(ListNode* head) {

        int sum = 0;
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* temp = head->next;
        while(temp != nullptr) {
            if(temp->val == 0) {
                addList(newHead, newTail, sum);
                sum = 0;
            }
            sum += temp->val;
            temp = temp->next;
        }

        return newHead;
    }
};
