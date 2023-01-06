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
    int height( node*root){
        if(root==NULL){
            return 0;
        }
        int lh= height(root->left);
        int rh = height(root->right);
        return max(lh+1,rh+1); 
        

    }
    bool height_balance_b_t(node *root){
        if(root==NULL){
            return true;
        }
        if(height_balance_b_t(root->left)==false){
            return false;
        }
        if(height_balance_b_t(root->right)==false){
            return false;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh)>1){
            return false;
        }
        return true;


    }

    bool is_balanced_b_t(node*root , int *height){
        if(root==NULL){
            return true;
        }
        int lh = 0 , rh = 0;
        if(is_balanced_b_t(root->left , &lh )==false or is_balanced_b_t(root->right , &rh)==false ){
            return false;
        }
        *height = 1+max(lh , rh);
        if(abs(lh-rh)>1){
            return false;
        }
        return true;

    }

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    class node *root  = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->right = new node(8);
    root->right->right->right = new node(9);
    int heig = 0;
    cout<<is_balanced_b_t(root,&heig)<<endl;
    

    


    return 0;
}