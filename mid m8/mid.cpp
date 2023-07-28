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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node * newNode =new Node(val);
    if( head ==NULL)
    {
        head= newNode;
        tail = newNode;
        return;
    }
    tail->next =newNode;
    tail = newNode;
}
void print_linkd_list(Node *head)
{
    Node* tmp =head;
    while (tmp != NULL) 
    {
        cout<<tmp->val<< " ";
        tmp = tmp->next;

    }
     cout<<endl;
}
int countLength( Node *& head)
{
    int cnt = 0;
    Node *temp = head;
    while ( temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void findMid( Node *head){
    int size = countLength(head);
    // cout<< head << endl;
    int mid = (size + 1)/ 2;
    Node * temp = head;
    for( int i= 0; i< mid-1; i++) // loop koto bar colbe seta
    {
        temp = temp->next;
    }
    if( size % 2 == 0)
    {
        cout<< temp->val << " " << temp->next->val << endl;
    }
    else {
        cout << temp->val << endl;
    }
} 
int main()
{

     Node* head=NULL;
     Node *tail =NULL;
     int val;
     while( true)
     {
        cin >> val;
        if( val == -1)
            break;
        insert_tail(head,tail,val);
     }
     print_linkd_list(head);
    int size = countLength(head); //--> function e *& head
    findMid(head);
// countLength( &head); //--> function e *head
// sob gular smae value ase

    //  int a= 10;
    //  int *ptr = &a;
    //  cout << &a << endl;
    //  cout << ptr << endl;
    //  cout << &*ptr << endl;
    //  cout << *&ptr << endl;

//    sob gular smae value ase   ///
    return 0;
}