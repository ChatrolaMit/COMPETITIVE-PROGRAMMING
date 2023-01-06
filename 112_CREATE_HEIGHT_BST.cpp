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

node* create_height_bst(int arr[] , int start , int end){

    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;
    node * curr = new node(arr[mid]);
    curr->left = create_height_bst(arr, start , mid-1 );
    curr->right = create_height_bst(arr, mid+1 , end );
    return curr;

} 

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[]={1,2,3,4,5,6,7,8,9};
    node *root = create_height_bst(arr , 0 , 8);
    in_tra(root);
    return 0;
}