#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

    set<int , greater<int>> s ;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(6);
    s.insert(10);
    
    cout<<endl;
    // cout<<*s.upper_bound(8)<<endl;
    // cout<<*s.lower_bound(8)<<endl;
    // for(auto i = s.begin() ; i!=s.end() ; i++){

    //     cout<<*i;
    // }
    for(auto a :s){
        cout<<a;
    }
    // for(auto i = s.rbegin() ; i!=s.rend() ; i++){

    //     cout<<*i<<" ";
    // }
    multiset<int , greater<int>>ms;
    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    ms.insert(1);

    ms.erase(ms.find(3));

    for(auto a:ms){
        cout<<a<<" ";
    }
    cout<<*ms.upper_bound(3);
    cout<<*ms.lower_bound(3);

    unordered_set<int>us;
    us.insert(2);
    us.insert(1);
    us.insert(3);
    us.insert(7);
    us.insert(4);
    cout<<endl;
    for(auto a:us){
        cout<<a<<" ";
    }




    return 0;
}