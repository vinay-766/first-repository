#include<bits/stdc++.h>
#define null NULL
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* pre;
        node(int val){
            data = val;
            next = null;
            pre = null;
        }
};
void display(node *temp){
    while(temp!=null){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << "\n";
}

node *InsertAtFront(node *head,int val){
    node *num = new node(val);
    if(head==null){
        head =num;
        return head;
    }
    head->pre=num;
    num->next=head;
    head = num;
    return head;
}

node* InsertAfterNthNode(node*head,int val,int n){
    node *num = new node(val);
    if(head ==null){
        head = InsertAtFront(head,val);
        return head; 
    }
    node* temp = head;
    int count=1;
    while(count!=n && temp!=null){
        temp = temp->next;
        count++;
    }
    num->pre = temp;
    num->next = temp->next;
    temp ->next = num;

    return head;
}


int main(int argc, char const *argv[])
{
    node* head = new node(5);
    head = InsertAfterNthNode(head,10,1);
    head = InsertAfterNthNode(head,6,1);
    head = InsertAfterNthNode(head,7,2);
   // head = InsertBeforeNthNode(head,7,3);
    display(head);
    return 0;
}
