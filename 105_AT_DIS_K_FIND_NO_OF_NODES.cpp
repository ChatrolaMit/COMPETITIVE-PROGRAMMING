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
void find_node(node*ptr  , int k  , int curr){
    if(ptr==NULL){
        return ;
    }
    if(curr==k){
        cout<<ptr->data<<" ";
        return;
    }
    if(curr<k){
        find_node(ptr->left , k , curr+1);
        find_node(ptr->right , k  , curr+1);
    }
}

int k_dis_point(node *root , node*ptr , int k ){
    
    if(root==NULL){
        return -1;
    }
    if(root ==ptr){
        find_node(root , k , 0);
        return 0;
    }
    int dl = k_dis_point(root->left ,ptr , k );
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" " ;
        }
        else{
            find_node(root->right , k-dl-2 , 0);
        }
        return dl+1;
    }

    int dr = k_dis_point(root->right ,ptr , k );
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" " ;
        }
        else{
            find_node(root->left , k-dr-2 , 0);
        }
        return dr+1;
    }




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
    // vector<int>ans;
    k_dis_point(root , root->left , 3);
    // for(auto a:ans){
    //     cout<<a<<" ";
    // }
    // find_node(root->right , 1 ,0);

    return 0;
}