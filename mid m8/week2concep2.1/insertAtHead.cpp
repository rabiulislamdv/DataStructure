#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val; 
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insertAtTail( Node * &head, int val){
    Node * newNode = new Node(val);
    if( head == NULL)
    {
        head = newNode;
        return ;
    }
    Node * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList(Node * head)
{
    Node * temp = head;
    while(temp !=NULL)
    {
        cout<< temp->val<< " ";
        temp= temp->next;
    }
}

int main()
{

    Node * head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    printList(head);
    return 0;
}