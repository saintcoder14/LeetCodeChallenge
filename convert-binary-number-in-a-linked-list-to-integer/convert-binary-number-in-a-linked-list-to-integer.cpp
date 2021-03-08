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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int n=-1;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int sum=0;
        temp=head;
        while(temp!=NULL){
            if(temp->val==1)
                sum=sum+pow(2,n);
            n--;
            temp=temp->next;
        }
        return sum;
    }
};