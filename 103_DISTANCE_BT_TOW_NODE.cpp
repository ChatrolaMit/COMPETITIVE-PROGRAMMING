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
bool find_dis(node *root , int n1 , int n2 , int *height){
    if(root==NULL){
        return false;
    }
    int lh= 0;
    int rh = 0;
    bool ch_1 = find_dis(root->left , n1 , n2 ,&lh);
    bool ch_2 = find_dis(root->right , n1 , n2 ,&rh);

    bool curr=false ;
    if((root->data == n1) or (root->data == n2)){
        curr = true;

    }
    if((ch_1 and ch_2) or (ch_1 and curr) or (ch_2 and curr) ){
        (*height) = lh+rh;
        return false;
    }
    if (ch_1==true or ch_2==true or curr){
        (*height) = 1+max(lh, rh);
        return true;
    }
    (*height) = max(lh , rh);
    return false;


}

int dis_bt_two_node(node*root , int n1 , int n2){
    int height = 0;
    find_dis(root , n1 , n2 , &height);
    return height;



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
    cout<<dis_bt_two_node(root , 9 , 2  );
    


    return 0;
}