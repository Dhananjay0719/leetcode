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
    ListNode* removeElements(ListNode* head, int val) {
    ListNode*p,*q;
    if(head==NULL)
    { return head; }
    if(head->next==NULL){if(head->val==val){return NULL;}}
    q=head;
    p=head->next;
    while(p!=NULL)
    {
    if(head->val==val)
    { 
     head=p;
     p=p->next;
     q->next=NULL;
     delete q;
     q=head;
    }
    else
    {
    if(p->val==val)
    { q->next=p->next;
      p->next=NULL;
      delete p;
      p=q->next;
    }
    else{p=p->next;
        q=q->next;}
    }
    }
    if(head->val==val){head=NULL;}
    return head;
    }
};