#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

class node{
    public :
    int data ;
    node *left ;
    node *right ;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};
void pre_tra(node * root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        pre_tra(root->left);
        pre_tra(root->right);
    }
    void in_tra(node * root){
        if(root==NULL){
            return;
        }
        in_tra(root->left);
        cout<<root->data<<" ";
        in_tra(root->right);
    }
    void post_tra(node * root){
        if(root==NULL){
            return;
        }
        post_tra(root->left);
        post_tra(root->right);
        cout<<root->data<<" ";
    }
    void tree_sum(node*root){
        if(root==NULL){
            return;
        }
        tree_sum(root->left);
        tree_sum(root->right);
        if(root->left!=NULL){
            root->data += root->left->data;
        }
        if(root->right!=NULL){
            root->data += root->right->data;
        }

    }

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    class node *root  = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->right = new node(8);
    root->right->right->right = new node(9);
    pre_tra(root);
    cout<<endl;
    tree_sum(root);
    pre_tra(root);

    


    return 0;
}