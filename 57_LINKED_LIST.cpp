#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

class node{
    public:

    int data;
    node *next ;
    node(int val=0){
        data = val;
        next = NULL;
    }
};

void insert_at_tail(node *head , int val){

    if (head==NULL){
        head = new node(val);
        return;
    }
    node * ptr = head;
    // cout<<val<<" ";
    while(ptr->next !=NULL){
        ptr = ptr->next ;
    }
    ptr->next = new node(val);
}
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL\n";
}

node* reverse_linked_list(node *head ){
    if(head == NULL || head->next==NULL){
        return head;
    }
    node *new_head = reverse_linked_list(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
    

}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    node *h = new node(1);
    insert_at_tail( h , 2);
    insert_at_tail( h , 3);
    insert_at_tail( h , 4);
    display(h);
    node *new_head = reverse_linked_list(h );
    display(new_head);


    


    
    return 0;
}