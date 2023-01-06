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
    int tree_height(node*root ){
        if(root==NULL){
            return 0;
        }
        int a = 0 , b = 0; 
        if(root->left!=NULL){
            a +=tree_height(root->left); 
        }
        if(root->right!=NULL){
            b+=tree_height(root->right);
        }
        return (1+max(a,b));

    }
    int diameter_of_tree(node * root){
        if(root==NULL){
            return 0;
        }
        int l_h = tree_height(root->left);
        int r_h = tree_height(root->right); 
        int new_d = l_h+r_h +1;

        int l_d = diameter_of_tree(root->left);
        int r_d = diameter_of_tree(root->right);

        return max(new_d , max(l_d , r_d));

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
    
    int height = tree_height(root);
    cout<<height<<endl;
    cout<<diameter_of_tree(root);
    




    
    
    
    return 0;
}