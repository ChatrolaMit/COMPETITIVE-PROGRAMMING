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

    int n , k ;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &a : arr){
        cin>>a;
    }
    int zero = 0 , j = 0 ,maxx = 0;
    for(int i = 0 ; i< n ; i++){
        if(arr[i]==0)
            zero++;
        while (zero>k)
        {
            if(arr[j]==0){
                zero--;
                // j++;
            }
            j++;
        }
        
        if(maxx<i-j+1){
            maxx= i-j+1;
        }
    }
    
    cout<<maxx;
    return 0;
}

