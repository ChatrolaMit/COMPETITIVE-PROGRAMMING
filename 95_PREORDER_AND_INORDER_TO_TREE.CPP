#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

class node{
    public :
    int data ;
    node *left ;
    node *right ;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};
int search_ele(int pre[] , int in[] , int start , int end , int curr){
    for(int i = start ; i<=end ; i++){
        if(in[i]==curr){
            return i;
        }
    }
    return -1;
}
node * built_a_tree(int pre[] , int in[] , int start , int end){
    
    if(start>end){
        return NULL;
    }

    static int ind = 0;
    int curr = pre[ind];
    ind++;
    node *ptr = new node(curr);
    int pos = search_ele(pre , in , start , end , curr );
    if(start==end){
        return ptr; 
    }

    ptr->left = built_a_tree(pre , in , start ,pos-1 );
    ptr->right = built_a_tree(pre , in , pos+1 , end);
    return ptr;
}
void pre_tra(node * root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        pre_tra(root->left);
        pre_tra(root->right);
    }
    void in_tra(node * root){
        if(root==NULL){
            return;
        }
        in_tra(root->left);
        cout<<root->data<<" ";
        in_tra(root->right);
    }
    void post_tra(node * root){
        if(root==NULL){
            return;
        }
        post_tra(root->left);
        post_tra(root->right);
        cout<<root->data<<" ";
    }

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int pre[]={1,2,4,3,5};
    int in[] ={4,2,1,5,3};
    node * root = built_a_tree(pre , in , 0 , 4);
    in_tra(root);





    
    
    
    return 0;
}