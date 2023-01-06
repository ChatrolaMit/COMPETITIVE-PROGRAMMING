#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
 
class student{
    public:
    string name;
    int age;
    bool gender;
    student(){

    }
    
    student(string s , int a , int gen){
        name = s;
        age = a;
        gender = gen;

    }

    void print_details(){
        cout<<"My Name Is "<<name<<endl;
        cout<<"My Name age "<<age<<endl;
        cout<<"My Name Is "<<gender<<endl;
    }
    ~student(){
        cout<<"destroctor has been activated";
    }


};


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // student s;
    // s.name = "mit";
    // cout<<s.name<<endl;
    student arr[3];
    for(int i = 0 ;i<3 ; i++){
        cin>>arr[i].name ;
        cin>>arr[i].age;
        cin>>arr[i].gender;
        arr[i].print_details();
    }

    student s("sill" , 17 , 1);
    s.print_details();
    student new_s = s;
    new_s.print_details();
    return 0;
}