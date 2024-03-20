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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *currNode = list1;
        int index = 0;
        while(index < a-1){
            currNode = currNode->next;
            index++;
        }
        ListNode *front = currNode;
        while(index < b+1){
           currNode = currNode->next;
           index++;
        }
        ListNode *rear = currNode;
        ListNode *secondListTail = list2, *secondListHead = list2;
        while(secondListTail->next != NULL)secondListTail = secondListTail->next;
        front->next = secondListHead;
        secondListTail->next = rear;
        return list1;
    }
};
