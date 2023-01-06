#include <iostream>
#include<string>
#include<vector>
#include<stack>
#include <algorithm>
using namespace std;
void reverse_string(string s){
    string str = "";
    stack<string> st ;
    for(int i = 0  ; i<s.length() ; i++){
        if(s[i]!=' '){
            str+=s[i];

        }
        else{
            st.push(str);
            str="";
        }
        
    }
        // cout<<st.size();
        // cout<<st.empty();
    while( st.size()!=0 ){
        cout<<st.top()<<" ";
        st.pop();
    }


}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s = "hello, it is rocker boat!";
    cout<<s;
    reverse_string(s);
    return 0;
}