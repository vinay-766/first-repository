#include<bits/stdc++.h>
#define ll long long int
#define null NULL
#define endl "\n"
using namespace std;
struct node
{
    int data;
    node* next;
   
};
void DeleteAtHead(node *&head){
    node *free = head;
    head= head->next;
    delete free;
}

void ToDeletes(node *temp,int val){
    if(temp==null) return;
    if(temp->next==null) return;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node *free = temp->next;
    temp->next=temp->next->next;
    delete free;
}

void displaylinked_list(node *temp){
    while(temp!=null){
            cout<<temp->data<<"->";
            //i=i+1;
            temp = temp->next;
    }
    cout << "NULL" << endl; 
}

int main(int argc, char const *argv[])
{
    node *head = new node();
    node *sec = new node();
    node *third = new node();
    node *forth = new node();
    node *fifth = new node();
    head->data = 5;
    head->next = sec;

    sec->data = 10;
    sec->next = third;

    third->data = 15;
    third->next=forth;

    forth->data=20; 
    forth->next = fifth;

    fifth->data=25;
    fifth->next = null;
    displaylinked_list(head);
    ToDeletes(head,10);
    displaylinked_list(head);
    DeleteAtHead(head);
    displaylinked_list(head);
    
    return 0;
}
