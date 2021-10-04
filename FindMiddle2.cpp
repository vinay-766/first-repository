#include<bits\stdc++.h>
#define null NULL
using namespace std;
class node{
    public:
        int data;
        node *next;
};
void FindMiddle(node *temp){
    node*fast=temp;
    node*slow=temp;
    while(fast->next!=null && fast->next->next!=null){
        fast=fast->next->next;
        slow= slow->next;
    }
    cout << slow->data;
}

int main(int argc, char const *argv[])
{
    node* a = new node();
    node* b = new node();
    node* c = new node();
    node* d = new node();
    node* e = new node();
    node *f = new node();
    a->data=5;a->next =b;
    b->data=10;b->next=c;
    c->data=15;c->next=d;
    d->data=20;d->next=e;
    e->data=25;e->next=f;
    f->data=30;f->next=null;
    FindMiddle(a);
    return 0;
}

