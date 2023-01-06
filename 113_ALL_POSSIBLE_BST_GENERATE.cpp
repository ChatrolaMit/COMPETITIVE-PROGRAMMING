#include<iostream>
#include<vector>
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

vector<node*> construct_trees(int start , int end){
    vector<node *>ans;
    if(start>end){
        ans.push_back(NULL);
        return ans;
    }
    for(int i=start ; i<=end ; i++ ){
        vector<node*>left_tree = construct_trees(start ,i-1 ) ;
        vector<node*>right_tree = construct_trees(i+1,end ) ;
        for(int j = 0 ; j<left_tree.size() ; j++){
            node*left_ptr  = left_tree[j];
            for(int k = 0 ; k<right_tree.size() ; k++){
                node*right_ptr = right_tree[k];
                node*ptr = new node(i);
                ptr->left = left_ptr;
                ptr->right = right_ptr;
                ans.push_back(ptr);

            }

        }
    }
    return ans;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif

    vector<node*>ans = construct_trees(1,4);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<i+1<<" : " ;
        pre_tra(ans[i]);
        cout<<endl;
    }
     

     

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// void pre_tra(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     pre_tra(root->left);
//     pre_tra(root->right);
// }
// vector<node *> constract_trees(int start , int end){
//     vector<node*>trees;
//     if(start>end){
//         trees.push_back(NULL);
//         return trees;
//     }
//     for(int i = start ; i<=end ; i++){
//         vector<node*>leftsubtree = constract_trees(start , i-1);
//         vector<node*>rightsubtree = constract_trees(i+1 , end);

//         for(int j = 0 ; j<leftsubtree.size() ;j++ ){
//             node*left = leftsubtree[j];
//             for(int k = 0 ; k<rightsubtree.size() ; k++){
//                 node*right = rightsubtree[k];
//                 node* n = new node(i);
//                 n->left = left;
//                 n->right = right;
//                 trees.push_back(n);

//             }
//         }
//     }
//     return trees;
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt" , "r" , stdin);
//         freopen("output.txt" , "w" , stdout);
//     #endif
//      vector<node*> totaltrees = constract_trees(1,3);
//      for(int i = 0 ; i<totaltrees.size() ; i++){
//          cout<<(i+1) <<" : ";
//          pre_tra(totaltrees[i]);
//          cout<<endl;


//      }


//     return 0;
// }