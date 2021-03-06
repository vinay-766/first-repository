/*Process to create a linked-list by using constructor and function
    with pointer referencing*/

#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define null NULL           //using null instead of NULL everywhere for convinience.
using namespace std;

class node{                 //structure of nodes in linked-list
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = null;
        }
};



void display(node* temp){               //function to display the list.
    while(temp!=null){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void InsertAtFront(node *&head,int val){
    node* n = new node(val);
    if(head==null){
        head = n;
        return;
    }
    n->next=head;
    head = n;
}

void InsertAtBack(node *&head,int val){
    node*n = new node(val);
    if(head == null){
        head =n;
        return;
    }
    node *temp = head;
    while(temp->next!=null){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAfterNthNode(int n,node*head,int val){
    node* num = new node(val);
    if(head==null){
        cout << "list is Empty..." << endl;
        return;
    }
    int count =1;
    while(count !=n){
        head = head->next;
        count++;
    }
    num->next=head->next;
    head->next=num;
}

void InsertBeforeNthNode(int n,node* head,int val){
    node* num = new node(val);
    if(head==null){
    cout << "list is empty..."<< endl;
    return;
    }
    int count = 1;
    while(count!=n-1){
        head = head->next;
        count++;
    }

    num->next=head->next;
    head ->next=num;

}

int main(int argc, char const *argv[])
{
    node *head =null;           //intial linked-list is empty.
    InsertAtFront(head,5);
    InsertAtFront(head,9);
    InsertAtBack(head,55);
    InsertAfterNthNode(2,head,1000);
    InsertBeforeNthNode(3,head,15);
    display(head);              //calling display function.
    return 0;
}
