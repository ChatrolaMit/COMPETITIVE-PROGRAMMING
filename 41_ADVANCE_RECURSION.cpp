#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

void permutations(string s , string ans){
    if (s.length() == 0){
        cout<<ans <<endl;
        return ;
    }
    for(int i =  0 ; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0 , i)+s.substr(i+1);
        permutations(ros , ans+ch);

    }
}

int count_paths(int s , int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count= 0;
    for(int i = s ; i<=6 ; i++){
        count += count_paths(s+i , e); 
    }
    return count;
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    permutations("ABC" , "");
    cout<<endl<<count_paths(0,4)<<endl;




    return 0;
}