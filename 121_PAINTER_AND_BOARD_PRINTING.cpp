#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;

bool is_fizible(vector<int>arr , int n , int m , int min){
    int std = 1 ; 
    int sum = 0 ;

    for(int i = 0 ; i<n ; i++){
        if(arr[i]>min){
            return false;
        }
        if(arr[i]+sum>min){
            std++;
            sum=arr[i];
            if(std>m){
                return false;
            }
        }
        else{
            sum+=arr[i];  
        }
    }
    return true;
}

int printing_board(vector<int> arr , int n  , int m ){
    int start = 0 ; 
    int end = 0 ;
    int ans = INT16_MAX  ;

    for(auto a: arr){
        end+=a;
    }
    while(start<end){
        int mid = (start+end) /2;
        if(is_fizible(arr , n , m , mid)){
            ans = min(ans , mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;

}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    vector<int >arr = {10 , 20 , 30 , 40};

    int n = 4 , m =2;
    cout<<printing_board(arr , n , m );

    

    return 0;
}

