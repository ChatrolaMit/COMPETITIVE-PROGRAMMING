#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
    void append_node(node *head , int val){
        if(head ==NULL){
            head = new node(val);
            return;
        }
        while(head->next !=NULL){
            head = head->next;
        }
        head->next = new node(val);
    }
    void display(node * head){
        while(head!=NULL){
            cout<<head->data<<"-->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
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
    node* reverse_K_Node(node *head , int k){
        if(head==NULL){
            return NULL;
        }
        node *ptr = head;
        node *curr = head , *prev = NULL;
        for(int i = 0 ; i<k && curr!=NULL ; i++){
            
            node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        head->next=reverse_K_Node(curr , k); 
        head = prev;
        return head;


    }
};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    node *head = new node(1);
    head->append_node(head ,2);
    head->append_node(head ,3);
    head->append_node(head ,4);

    head->display(head);
    head = head->reverse_linked_list(head);
    head->display(head);
    head = head->reverse_K_Node(head , 2);
    head->display(head);
    cout<<"hello";

    return 0;
}