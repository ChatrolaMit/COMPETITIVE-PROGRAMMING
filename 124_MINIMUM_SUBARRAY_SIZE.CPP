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

int minimum_subarray_size(vector<int>arr ,int k , int n){

    int start = 0;
    int curr = 0;
    int sum = 0;
    int ans = INT_MAX;
    cout<<"*";
    for(int i = 0 ; curr<n ; i++){
        if(sum>k){
            sum -=arr[start];
            start++; 
            ans = min(ans , curr-start+1);

        }
        else{
            sum+=arr[curr];
            curr++;
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
    
    vector<int>arr = {1,4,45,6,10,19};
    int x = 30;

    cout<<minimum_subarray_size(arr , x , 6);





    return 0;
}