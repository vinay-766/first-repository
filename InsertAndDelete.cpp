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

void display(node *head){
    if(!head) return;
    while(head!=null){
        //head= head->next;
        cout << head->data << "->";
        head= head->next;

    }
    cout << "NULL" <<endl;
}

node* InsertAfterNthNode(int n,node*head,int val){
    node* num = new node(val);
    node* temp=head;
    if(head==null){
        cout << "list is Empty... \n now your new node is your head" << endl;
        head = num;
        return head;
    }
    int count =1;
    while(count !=n){
        head = head->next;
        count++;
    }
    num->next=temp->next;
    temp->next=num;
    return head;
}
node* InsertBeforeNthNode(int n,node* head,int val){
    node* num = new node(val);
    node* temp=head;
    if(head==null){
    cout << "list is empty...\n your new node is now head"<< endl;
    head =num;
    return head;
    }
    int count = 1;
    if(n==1){
       
        num->next=head;
        head=num;
        return head;
    }
    while(count!=n-1){
        temp= temp->next;
        count++;
    }

    num->next=temp->next;
    temp ->next=num;
    return head;
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
    node* head =null;
    int choice;
    while(true){
        
    cout <<"choose option from below.." <<endl;
    cout << "1. Insertion after nth node \n2. Insertion before nth node\n";
    cout << "3. Deletion of nth node \n4. Display the given list\n";
    cout << "5. Exit\n";
    cin >>choice;
    int n,val;
    switch (choice)
    {
    case 1:
        cout << "Enter the Data and the Nth node resp.\n";
        cin >> val >> n;
        head = InsertAfterNthNode(n,head,val);
        break;
    case 2:
        cout << "Enter the Data and the Nth node resp.\n";
        cin >> val >> n;
        head = InsertBeforeNthNode(n,head,val);
        break;
    case 3:
        cout << "enter the number of node you want to delete..\n";
        cin >> n;
        head = DeleteNthNode(head,n);
    case 4:
        display(head);
        break;
    case 5:
       cout<<"dimag kharab ho gya tha bnane mein !!";
        break;
    default:
        cout << "you choose wrong input..";
        break;
    }
    if(choice==5){
        break;
    }
    cout << "Choose Again...\n";

    }
    return 0;
}


