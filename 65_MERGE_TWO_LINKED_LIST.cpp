#include <iostream>
#include<string>
#include<vector>
#include<stack>
#include <algorithm>
using namespace std;

class node{
    public:
    int data ;
    node * next ;
    node(int val){
        data = val;
        next = NULL;
    } 
    void append_node(node *head , int val){
        if(head == NULL){
            head = new node(val);
            return;
        }
        while(head->next!=NULL){
            head = head->next;
        }
        head->next = new node(val);
        return ;
    }
    void display(node *head){
        while(head!=NULL){
            cout<<head->data <<"-->";
            head = head->next;
        }
        cout<<"NULL\n";
    }
    node* merge(node* ptr , node*p ){
        if(ptr==NULL){
            return p;
        }
        else if(p==NULL){
            return ptr;
        }
        
        if(p->data >ptr->data){
            node *result = new node(ptr->data);
            result->next = merge(ptr->next , p );
            return result;
                
        }
        else{
            
            node *result = new node(p->data);
            result->next = merge(p->next , ptr );

            return result;
        }

    }
};
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    node *ptr = new node(1);
    ptr->append_node(ptr , 2);
    // ptr->append_node(ptr , 3);
    ptr->append_node(ptr , 4);
    // ptr->append_node(ptr , 5);
    ptr->append_node(ptr , 6);
    ptr->append_node(ptr , 9);

    node *p = new node(3);
    p->append_node(p ,5);
    p->append_node(p ,7);
    p->append_node(p ,8);
    
    node * res = p->merge(p , ptr);
    res->display(res);
    return 0;
}