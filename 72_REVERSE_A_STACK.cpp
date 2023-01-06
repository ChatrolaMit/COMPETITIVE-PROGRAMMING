#include <iostream>
#include<string>
#include<vector>
#include<stack>
#include <algorithm>

#define ll long long
using namespace std;

void insert_at_bottom(stack<int>&st , int ele ){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topper = st.top();
    st.pop();
    insert_at_bottom(st , ele);
    st.push(topper);
}

void reverse_stack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int removed =  st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st , removed) ;

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    stack <int> st ;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse_stack(st);
    while(st.size()!=0){
        cout<<st.top()<<"  ";
        st.pop();
    }


    
    
    
    return 0;
}