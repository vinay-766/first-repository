#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define null NULL
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int val){
            data = val;
            next = null;
        }
};

void displaylinked_list(node *temp){
    while(temp!=null){
            cout<<temp->data<<" ";
            //i=i+1;
            temp = temp->next;
    }
}

void insert_AT_Tail(node *&head,int val){
    node *n = new node(val);
    if(head ==null) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=null) temp = temp->next;
    temp ->next = n;
}

void InsertAtFront(node* head,int val){
    node *n = new node(val);
}

int main(int argc, char const *argv[])
{
    node *head=new node(5);
    insert_AT_Tail(head,1);
    insert_AT_Tail(head,3);
    insert_AT_Tail(head,5);
    displaylinked_list(head);
    return 0;
}
