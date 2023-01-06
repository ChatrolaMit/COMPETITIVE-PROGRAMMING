#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
void bubbleSort(){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                }
        }
    }

    for(int i=0;i<n;i++){ cout<<arr[i]<<" ";}

}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif


 bubbleSort();
    
    return 0;
}