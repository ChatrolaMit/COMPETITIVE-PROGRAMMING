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

    node * odd_even(node * p1 ){
        if(p1!=NULL){
            node * ptr = new node(p1->data) ;
            if(p1->next!=NULL){
            ptr->next = odd_even(p1->next->next) ;
            }
            
        return ptr;
        }
        return NULL;

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
    ptr->append_node(ptr , 3);
    ptr->append_node(ptr , 4);
    ptr->append_node(ptr , 5);
    ptr->append_node(ptr , 6);
    node * odd = ptr->odd_even(ptr);
    node * even = ptr->odd_even(ptr->next);
    node*p1 = odd;
    p1->display(odd);
    p1->display(even);
    while(p1->next!=NULL){
        p1 = p1->next;
    }
    p1->next = even;
    ptr->display(odd);





    
    return 0;
}