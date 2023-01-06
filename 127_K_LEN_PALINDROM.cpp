#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <algorithm>
#include <climits>
#include <cmath>
#define ll long long
using namespace std;

bool is_palindrom(int n){
    int temp = n;
    int number = 0;
    while(temp>0){
        number = number*10 + temp%10;
        temp = temp/10;
    }
    if(n==number){
        return true;
    }
    return false;

}

int create_palindrom(vector<int>arr , int k){
    int n = arr.size();
    int num = 0;
    for(int i = 0 ; i<k ; i++){ 
        num = num*10 +arr[i];
    }
    if(is_palindrom(num)){
        return 0;
    }
    for(int i = k ; i<k ; i++){
        num = num%(int)pow(10 , k-1)*10+arr[i];
        if(is_palindrom(num)){
            return i-k+1;
        }
    }
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    vector<int>arr = {2,3,5,1,1,5};
    int k = 4;
    int ans = create_palindrom(arr , k);
    if(ans==-1){
        cout<<"there is no pelindrom";
    }
    else{

        for(int i = ans ; i<ans+k   ; i++){
            cout<<arr[i] <<" ";
        }
    
    }



    




    return 0;
}