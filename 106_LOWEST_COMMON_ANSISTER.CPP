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

bool lowest_common_ansister(node*root ,int p , int q){
    if(root==NULL){
        return false;
    }
    bool lcal =lowest_common_ansister(root->left , p , q);
    bool lcar =lowest_common_ansister(root->right , p , q);
    bool curr = false;
    if((root->data ==p) or (root->data ==q)) {
        curr = true;
    }
    if(lcal and lcar){
        cout<<root->data<<endl;
        return false;
    }
    else if(lcal or lcar or curr){
        return true;
    }
    return false;
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
    lowest_common_ansister(root , 5 , 9);



    return 0;
}