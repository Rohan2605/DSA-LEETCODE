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
        int length = 0;
        while(temp){
            length++;
            temp = temp->next;
        }

        int pos = length - n;

        if(pos == 0){
            head = head->next;
            return head;
        }

        temp = head;
        ListNode* prev = temp;

        for(int i=0; i<pos; i++){
            prev = temp;
            temp = temp->next;
        }

        if(temp->next == NULL) prev->next = NULL;
        else{
            prev->next = temp->next;
            temp->next = NULL;
        }
        return head;
    }
};