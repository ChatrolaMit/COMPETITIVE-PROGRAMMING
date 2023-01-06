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

bool is_valid_bst(node * root ,node *min , node*max ){
    if(root==NULL){
        return true;
    }
    if(min!=NULL and min->data>=root->data){
        return false;
    }
    if(max!=NULL and max->data<=root->data){
        return false;
    }
    bool lt = is_valid_bst(root->left , min , root);
    bool rt = is_valid_bst(root->right, root , max);
    return (lt and rt);

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
    cout<<is_valid_bst(root , NULL , NULL);
    
   
  
    


    return 0;
}