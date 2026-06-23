/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA, *tempB = headB;

        int sizeA=0;
        while(tempA){
            sizeA++;
            tempA = tempA -> next;
        }

        int sizeB=0;
        while(tempB){
            sizeB++;
            tempB = tempB -> next;
        }

        int diff = abs(sizeA - sizeB);
        int size = (sizeA>sizeB)? sizeB:sizeA;

        if(sizeA>sizeB){
            for(int i=0; i<diff; i++){
                headA = headA->next;
            }
        }
        else{
            for(int i=0; i<diff; i++){
                headB = headB->next;
            }
        }

        for(int i=0; i<size; i++){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }
};