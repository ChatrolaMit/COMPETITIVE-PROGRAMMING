#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // uppercase to lowercase

    string s = "HELLO I AM CHATROLA MEET";
    for(int i = 0 ; i< s.size() ; i++)
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32 ;
    cout<<s<<endl;

    for(int i = 0 ; i< s.size() ; i++)
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32 ;
    cout<<s<<endl;

    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout<<s<<endl;
    
    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout<<s<<endl;

    string ss = "422145634";
    sort(ss.begin() , ss.end() , greater<int>());
    cout<<ss<<endl;

    string str = "abcdgaaacddrcdd";
    int array[26]={0};
    for(int i = 0 ; i<str.length() ; i++){
        array[int(str[i])-97]++;
    }

    int max = 0;
    int ind = 0;
    for(int i = 0 ;i<26 ; i++){
        if(array[i]>max){
            max = array[i];
            // cout<<max<<" ";
            ind = i;
        }
    }
    // for(int i = 0 ; i<26 ; i++){
    //     cout<<array[i]<<" ";
    
    cout<<char(ind+97)<<endl;

    return 0;
}