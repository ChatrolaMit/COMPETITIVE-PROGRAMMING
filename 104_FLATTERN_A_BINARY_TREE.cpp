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
node* flattern_tree(node* root){
    node *le = NULL , *re = NULL;
    if(root->left!=NULL){
        le = flattern_tree(root->left);
    }
    if(root->right!=NULL){
        re = flattern_tree(root->right);
    }
    if(root->left==NULL and root->right==NULL){
        return root;
    }
    if(le!=NULL){
        node *temp = root->right;
        root->right = root->left;
        root->left=NULL;
        le->right = temp;
    }
    return re;


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
    flattern_tree(root);
    pre_tra(root);
    


    return 0;
}