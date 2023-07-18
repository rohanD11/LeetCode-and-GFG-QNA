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
    ListNode* oddEvenList(ListNode* head) {
       ListNode *evenstart=NULL;
        ListNode *evenend=NULL;
        ListNode *oddstart=NULL;
        ListNode *oddend=NULL;
        if(head==NULL||head->next==NULL){
            return head;
        }
        int i=1;

        while(head){
            if(i%2==0){
                if(evenstart==NULL){
                    evenstart=head;
                    evenend=evenstart;
                }
                else{
                    evenend->next=head;
                    evenend=evenend->next;
                }
            }
            else{
                if(oddstart==NULL){
                    oddstart=head;
                    oddend=oddstart;
                }
                else{
                    oddend->next=head;
                    oddend=oddend->next;
                }
            }
            head=head->next;
            i++;
        }
        if(oddstart!=NULL)
        oddend->next=evenstart;
        if(evenstart!=NULL)
        evenend->next=NULL;
         if(oddstart!=NULL)
        return oddstart;
        else
        return evenstart;
        
    }
};