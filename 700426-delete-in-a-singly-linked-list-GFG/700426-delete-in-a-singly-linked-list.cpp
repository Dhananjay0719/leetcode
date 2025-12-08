/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        
        if(x==1){
            Node * temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        Node * prev=head;
        Node * curr=head->next;
        int count=2;
        while(curr!=NULL){
        if(count==x){
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
            return head;
        }
        prev=prev->next;
        curr=curr->next;
        count++;
        }
    }
};