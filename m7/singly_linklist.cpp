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
int main()
{

        // Node a,b;
        // a.val=10;
        // b.val=20;
        // a.next=&b;
        // Node* a = new Node(10);
        // Node* b = new Node(20);

        Node* head = new Node(10);
        Node* a = new Node(20);
        Node* b = new Node(30);
        Node*c = new Node(40);
        Node*d = new Node(50);

    // cout<<(*a).val<<endl;
    // cout<<a->val<<endl;

    // a->next =b;
    // cout << a->next->val <<endl;

    head->next =a;
    a->next =b;
    b->next =c;
    c->next =d;
    print_linkd_list(head);
    return 0;
}