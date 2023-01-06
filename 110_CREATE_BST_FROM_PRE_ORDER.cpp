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
static int curr= 0;
node* bst_from_pre_order(int arr[] , int n ,int maxx , int minn   ){
    node * root = NULL;
    if(curr>n){
        return root;
    }
    if(arr[curr]>minn and arr[curr]<maxx){
        root = new node(arr[curr]);
        curr++;
        root->left = bst_from_pre_order( arr, n , root->data ,minn  );
        root->right = bst_from_pre_order( arr, n , maxx ,root->data );

    }
    return root;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[]={7,5,4,6,8,9};
    node * root = bst_from_pre_order(arr , 6 , 10 ,0);
    pre_tra(root);
    cout<<"\n";
    in_tra(root);

    
    
  
    


    return 0;
}