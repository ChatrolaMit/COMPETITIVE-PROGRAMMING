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

    void lavel_order_traversal(deque<node*>&dq , int k , int curr , int*sum ){
        if(dq.empty()){
            return;
        }
        if(dq.front()==NULL){
            curr++;
            cout<<endl;
            dq.pop_front();
            if(!dq.empty()){
                dq.push_back(NULL);
                
                lavel_order_traversal(dq , k , curr, sum);
            }
            else{
                return ;
            }
        }
        else {
            if(dq.front()->left!=NULL){
                dq.push_back(dq.front()->left);
            }
            if(dq.front()->right!=NULL){
                dq.push_back(dq.front()->right);
            }
            cout<<dq.front()->data<<" ";
            if(curr==k){
                (*sum)+=dq.front()->data;
            }
            dq.pop_front();
            lavel_order_traversal(dq , k , curr , sum);

        }
        
    }
    int count_no_of_node(node * ptr){
        int sum = 1;
        if(ptr==NULL){
            return sum;
        }
        if(ptr->left!=NULL)
        sum+=count_no_of_node(ptr->left);
        if(ptr->right!=NULL)
        sum+=count_no_of_node(ptr->right);
        return sum;
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
    // in_tra(root);
    deque<node*>dq;
    dq.push_back(root);
    dq.push_back(NULL);
    int sum = 0 , k=2;
    lavel_order_traversal(dq , k , 0 ,&sum );
    cout<<sum<<endl;
    cout<<count_no_of_node(root);








    
    
    
    return 0;
}