#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define null NULL
using namespace std;
class node{
    public:
        int data;
        node *next;
       
};

void displaylinked_list(node *temp){
    while(temp!=null){
            cout<<temp->data<<"->";
            //i=i+1;
            temp = temp->next;
    }
    cout << "NULL" << endl; 
}

node* DeleteNthNode(node *head,int n){
    
    node *temp = head;
    if(temp==null){
        cout << "list is empty...\n";
        return head;
    }
    int count = 1;
    if(n==1){
        head=head->next;
        delete temp;
        return head;
    }
    while(count!=n-1){
        temp=temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
    return head;
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
    head = DeleteNthNode(head,5);
    displaylinked_list(head);
    return 0;
}
