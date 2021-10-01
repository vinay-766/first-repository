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
void DeleteFirstNode(node* &head){
    node *temp = head;
    head = head->next;
    delete temp;
}
void DeleteNthNode(int n,node*head){
    if(head==null) return;
    if(n==1){
        cout << "first node cannot be deleted in this scope try another.."<< endl;
        return;
    }
    int count =1;
    while(count!=n-1){
        head = head->next;
        count++;
    }
    node *temp = head->next;
    head->next=head->next->next;
    delete temp;
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
    DeleteNthNode(1,head);
    displaylinked_list(head);
    DeleteFirstNode(head);
    displaylinked_list(head);
    return 0;
}
