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
void print_zigzag(stack<node*>curr , stack<node*>next , bool flag){
    if(curr.empty() and next.empty()){
        return;
    }
    if(curr.empty()){
        print_zigzag(next , curr , !flag);
        return;
    }
    cout<<curr.top()->data <<" ";
    if(flag==true){
    if(curr.top()->left!=NULL ){
        next.push(curr.top()->left);
    }
    if(curr.top()->right!=NULL ){
        next.push(curr.top()->right);
    }
    }
    else{
    if(curr.top()->right!=NULL ){
        next.push(curr.top()->right);
    }
        if(curr.top()->left!=NULL ){
        next.push(curr.top()->left);
    }

    }
    curr.pop();
    print_zigzag(curr, next , flag);

}
void zigzag_traversal(node*root ){
    stack<node*>curr;
    stack<node*>next;
    bool flag = true;
    curr.push(root);
    print_zigzag(curr , next , flag);




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

    // pre_tra(root);
    zigzag_traversal(root);

    


    return 0;
}