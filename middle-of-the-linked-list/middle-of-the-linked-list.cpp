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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n%2==0)
            n=n/2;
        else
            n=n/2;
        temp=head;
        int c=0;
        while(c!=n){
            c++;
            temp=temp->next;
        }
        return temp;
    }
};