#include<bits\stdc++.h>
#define null NULL
using namespace std;
class node{
    public:
    int data;
    node *next;
};

void display(node *temp){
   
    while(temp !=null){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int LengthFinder(node* temp){
    if(temp==null){
        return 0;
    }
    int count = 1;
    while(temp->next!=null){
        temp=temp->next;
        count++;
    }
    return count;
}

void FindMiddle(node *temp){
    int len = LengthFinder(temp);
    if(len==0){
        cout << "No middle element is present..\n";
        return;
    }
    int count = 1;
    while(count!=(len/2)+1){
        temp=temp->next;
        count++;
    }
    cout << temp->data << endl;

}

int main(int argc, char const *argv[])
{
    node* a = new node();
    node* b = new node();
    node* c = new node();
    node* d = new node();
    node* e = new node();
    a->data=5;a->next =b;
    b->data=10;b->next=c;
    c->data=15;c->next=d;
    d->data=20;d->next=e;
    e->data=25;e->next=null;
    display(a);
    FindMiddle(a);
    return 0;
}
