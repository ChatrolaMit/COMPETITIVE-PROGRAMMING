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

void compute_number(vector<int>arr , int k){
    int sum = 0;
    for(int i = 0 ; i<k-1 ; i++){
        sum+=arr[i];
    }
    int start = 0;
    for(int i = k-1 ; i<arr.size() ; i++){
        // cout<<sum<<" ";
        if((sum+arr[i])%3==0){
            for(   ; start<i+1 ; start++){
                cout<<arr[start]<<" ";
            }
            return;
        }
        else{
            sum-=arr[start];
            start++;
            sum+=arr[i];
        }
    }
    cout<<-1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    vector<int>arr = {84 , 23 , 45 , 12 , 56 , 82};
    int k = 3;
    compute_number(arr , k);
    



    return 0;
}