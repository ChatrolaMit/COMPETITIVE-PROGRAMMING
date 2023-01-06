#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

#define ll long long
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void pre_tra(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre_tra(root->left);
    pre_tra(root->right);
}
void in_tra(node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_tra(root->left);
    cout << root->data << " ";
    in_tra(root->right);
}
void post_tra(node *root)
{
    if (root == NULL)
    {
        return;
    }
    post_tra(root->left);
    post_tra(root->right);
    cout << root->data << " ";
}

void create_bst(node *root , int val){
    if(root==NULL){
        root = new node(val);
        return;
    }
    if(root->data>val){
        if(root->left!=NULL){
            create_bst(root->left , val);
        }
        else{
            root->left = new node(val);
            return;
        }
    }
    else if(root->data<val){
        if(root->right!=NULL){
            create_bst(root->right , val);
        }
        else{
            root->right = new node (val);
            return;
        }
    }
    
}
int find_successor(node * root , int val){
    if(root->left!=NULL){
        return find_successor(root->left , val);
    }
    else{
        // int temp = root->data;
        // root->data = val;
        return root->data;
    }

}

node * delete_a_node(node *root , int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data >val){
        root->left = delete_a_node(root->left , val);
    }
    else if(root->data < val){
        root->right = delete_a_node(root->right , val);
    }
    else{
        if(root->left==NULL and root->right==NULL){
            return NULL;
        }
        else if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        else{
            int val = find_successor(root->right , root->data);
            root->data = val;
            delete_a_node(root->right ,val );

        }

        
    }
    

}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[]={4,3,6,8,7,2,1,9};
    class node *root = new node(arr[0]) ;
    for(int i = 1 ; i<(sizeof(arr)/sizeof(int)) ; i++){
        create_bst( root,arr[i]);

    }
    in_tra(root);
    cout<<endl;
    delete_a_node(root ,6);
    delete_a_node(root ,3);
    delete_a_node(root ,4);
    in_tra(root);
  
    


    return 0;
}