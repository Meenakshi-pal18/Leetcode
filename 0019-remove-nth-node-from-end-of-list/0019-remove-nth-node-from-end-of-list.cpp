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
       ListNode* temp=head;
      int  cnt=0;
       while(temp!=NULL){
        temp=temp->next;
        cnt++;
       } 
       cnt -=n;
       if (cnt == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
       ListNode* curr=head;
       ListNode* prev=NULL;
       while(cnt--){
        prev=curr;
        curr=curr->next;
       }
        
       prev->next=curr->next;
       delete curr;
       return head;
    }
};