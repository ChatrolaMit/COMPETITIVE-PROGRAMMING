#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include<climits>
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
struct info
{
    int size;
    int max ;
    int min ; 
    int ans;
    bool isbst;
};
info largest_bst(node *root){
    if(root==NULL){
        return { 0 , INT_MIN , INT_MAX , 0, true};
    }
    if(root->left==NULL and root->right==NULL){
        return {1 , root->data , root->data , 1 , true};
    }

    info leftinfo = largest_bst(root->left);
    info rightinfo = largest_bst(root->right);

    info curr ;
    curr.size = 1+leftinfo.size+rightinfo.size ;

    if(leftinfo.isbst and rightinfo.isbst and leftinfo.max<root->data and rightinfo.min>root->data ){
        curr.min =min(leftinfo.min , min(rightinfo.min , root->data));
        curr.max = max(leftinfo.min , max(rightinfo.min , root->data));

        curr.ans = curr.size;
        curr.isbst=true;
        return curr;
    }
    curr.ans = max(leftinfo.ans , rightinfo.ans);
    curr.isbst = false;
    return curr;




}
int main(){
    node*root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(8);
    root->right->right = new node(9);
    cout<<largest_bst(root).ans;
    return 0;
}
