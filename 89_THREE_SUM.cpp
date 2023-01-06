#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    
    int n , target ;
    cin>>n>>target;
    vector<int>arr(n);
    for(auto &a:arr){
        cin>>a;
    }

    sort(arr.begin() , arr.end());
    for ( auto a:arr)
    {
        cout<<a<<" ";
    }
    

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 , k = n-1;j<k ;  ){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum==target){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                return 0;
            }
            else if(sum>target){
                k--;
            }
            else{
                j++;
            }

        }

    }

    return 0;
}