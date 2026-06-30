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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        ListNode* next = curr -> next;

        while(next){
            int a = curr->val;
            int b = next->val;
            
            int value;
            if(a>b) value = gcd(a,b);
            else value = gcd(b,a);

            ListNode* newNode = new ListNode(value);
            curr->next = newNode;
            newNode->next = next;
            curr = next;
            next = curr->next;
        }

        return head;
    }
};