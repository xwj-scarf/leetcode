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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* fir = head;
        ListNode* sec = head->next;
        fir->next = NULL;
        while(sec!=NULL)
        {
            ListNode* thd = sec->next;
            sec->next = fir;
            fir = sec;
            sec = thd;
        }
        return fir;
    }
};
