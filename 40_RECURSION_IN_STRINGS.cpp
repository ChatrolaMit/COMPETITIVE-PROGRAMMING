#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

void reverse_string(string s){
    if(s.length()==0){
        return ;
    }
    reverse_string(s.substr(1));
    cout<<s[0];
}

void replace(string s ){
    if(s.length()==1){
        cout<<s[0]<<endl;
        return ;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<3.14;
        replace(s.substr(2));
    }
    else{
        cout<<s[0];
        replace(s.substr(1));
    }

}
void tower_of_hanoi(int n , char s ,char  d ,char h){
    if (n==0){
        return;
    }
    tower_of_hanoi(n-1 , s ,h,d  );
    cout<<s<<"-->"<<d<<endl;
    tower_of_hanoi(n-1 ,h,d ,s   );
}

string remove_duplicates(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = remove_duplicates(s.substr(1));
    if (ch==ans[0]){
        return ans;
    }
    else{
        return ch+ans;
    }

}
string arrange_x(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans =  arrange_x(s.substr(1));
    // cout<<ans<<endl;
    if (ch=='x'){
        return (ans+ch);
    }
    else{
        return (ch+ans);
    }
}

void substrings(string s ,string ans ){
    if(s.length()== 0){
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string ros =s.substr(1);
    // cout<<ans<<endl;
    // cout<<ch+ans<<endl; 
    substrings(ros , ans);
    substrings(ros , ans+ch);

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    reverse_string("hello");
    cout<<endl;
    replace("pppipiipiiip");
    tower_of_hanoi(3 , 'a' , 'b' , 'c');
    cout<<remove_duplicates("aaabbcccddd")<<endl;
    cout<<arrange_x("axdexxsxffx");
    substrings("ABC" ,"" );
    return 0;
}