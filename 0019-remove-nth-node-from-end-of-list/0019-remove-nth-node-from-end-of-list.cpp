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
        ListNode* temp = head;

        int size= 0;
        while(temp != NULL){
            size++;
            temp = temp -> next;
        }

        int pos = size - n;
        if(pos == 0) head = head -> next;

        temp = head;
        for(int i=0; i<pos; i++){
            if(i==pos-1){
                temp -> next = temp -> next -> next;
            }
            temp = temp -> next;
        }
        return head;
    }
};