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
};

int lengt(node*ptr){
    int len = 0;
    while(ptr!=NULL){
        ptr = ptr->next;
        len++;
    }
    return len;
}
void intersection_point(node * ptr , node * p ){
    int len_1 = lengt(ptr);
    int len_2 = lengt(p);
    int len_diff = len_1 - len_2;
    for(int i = 0 ; i<len_diff ; i++){
        ptr = ptr->next;
    }
    for(int i = 0 ; i<len_2 ; i++){
        if(ptr==p){
            cout<<p->data;
            return;
        }
        ptr = ptr->next;
        p = p->next;
    }
    cout<<"-1";
}


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
    ptr->display(ptr);

    node*p = new node(3);
    p->append_node(p , 4);
    p->next->next = ptr->next->next->next->next;
    p->display(p);
    p->append_node(p ,7);
    ptr->display(ptr);
    intersection_point(ptr , p);




    




    
    return 0;
}