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
int main()
{
   Node * a = new Node(5);
   Node * b = new Node(10);
   Node *c = new Node(15);

   a->next =b;
   b->next =c;
   c->next =NULL; // optional
   
Node * temp= a;
while( temp !=NULL)
{
    cout<< temp->val<< " ";
    temp= temp->next;
}
     
    return 0;
}