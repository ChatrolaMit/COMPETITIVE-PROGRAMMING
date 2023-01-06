#include <iostream>
#include <algorithm>
using namespace std;

int divisible(int n , int a , int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

int ecluid_highest_commen_factor(int a , int b){
    while(b!=0){
        int rem = a%b;
        a = b ; 
        b = rem;
    }
    return a;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    cout<<divisible(40 , 5 , 7)<<endl;

    cout<<ecluid_highest_commen_factor(45,9);

    return 0;
}