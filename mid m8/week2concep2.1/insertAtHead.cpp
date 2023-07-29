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

// seze count korte
int getSize( Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count ;
}
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


// head a insert korte
void insertAtHead( Node * &head, int val)
{
    Node* newNode = new Node(val);
    if( head == NULL)
    {
         head = newNode;
         return;
    }
    Node * temp = head;
    head = newNode;
    newNode->next = temp;
}
    void insertAtAnyPosition(Node * & head, int index,int val){
    Node * newNode = new Node(val);
    if(index == 1)
    {
        insertAtHead(head,val);
        return ;
    } 
    else if(index==getSize(head)){
        insertAtTail(head,val);
        return ;
    }
    Node * temp = head;
    int pos = 1;

    while(pos !=index-1){
        temp=temp->next;
        pos++;
        
    }
    Node* temp2 = temp->next;
    temp->next = newNode;
    newNode->next = temp2;
}
void printList(Node * head)
{
    Node * temp = head;
    while(temp !=NULL)
    {
        cout<< temp->val<< " ";
        temp= temp->next;
    }
    cout<< endl;
}
int main()
{

    Node * head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
 
    insertAtHead(head,60);
    insertAtHead(head,70);

    printList(head);

    // size pete
    cout<<getSize(head) <<endl;
    insertAtAnyPosition(head, 1,80);
    insertAtAnyPosition(head, 7,80);
    insertAtAnyPosition(head, 3,8520);

    printList(head);
    return 0;
}