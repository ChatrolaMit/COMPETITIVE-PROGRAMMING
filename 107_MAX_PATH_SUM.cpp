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

void path_max_sum(node * root, int *ans){
    if(root==NULL){
        return ;
    }
    path_max_sum(root->left , ans);
    path_max_sum(root->right , ans);
    if(root->left!=NULL and root->right !=NULL){
        root->data += max(root->left->data , root->right->data);
        *ans = root->data;
    }
    else if(root->left!=NULL ){
        root->data+=root->left->data;
        *ans = root->data;
    }
    else if(root->right!=NULL){
        root->data+=root->right->data;
        *ans = root->data;
    }
    return;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    class node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(9);
    root->right->left->left = new node(8);
    int ans = 0;
    path_max_sum( root,&ans);
    cout<<ans;



    return 0;
}