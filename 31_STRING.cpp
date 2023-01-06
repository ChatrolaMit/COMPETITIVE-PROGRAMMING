#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    // string str;
    // cin>>str;
    // cout<<str;

    // string stri(5 , 's');
    // cout<<stri<<endl; 

    // string meet ;
    // getline(cin , meet );
    // cout<<meet;

    // string functions 

    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    cout<<s1<<" "<<s2<<endl;
    s2.clear();
    cout<<s2<<endl;

    s1 = "abc";
    s2 = "ataaaa";
    cout<<s2.compare(s1)<<endl;

    string ss = "nincompoop";
    ss.erase(3,3);
    cout<<ss<<endl;

    cout<<ss.find("po")<<"\n";

    ss.insert(3, "com");
    cout<<ss<<endl;

    cout<<ss.length()<<endl;
    cout<<ss.size()<<endl;

    cout<<ss.substr(3,3)<<endl;

    string s = "818768";
    int x = stoi(s);
    cout<<x+2<<endl;

    string sss = to_string(x+2);
    cout<<sss<<endl;

    string sr = "helloguysiammit";
    sort(sr.begin() , sr.end());
    cout<<sr<<endl;


    return 0;
}