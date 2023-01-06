#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

void count_sort(int arr[]  , int n){
    int k = arr[0];
    for(int i = 1 ; i<n ; i++){
        k = max(k , arr[i]);
    }
    int count[k+1] = {0};
    for(int i = 0 ; i<n ; i++){
        count[arr[i]]++;
    }
    for(int i = 1 ; i<k+1 ; i++){
        count[i] += count[i-1];
    }
    int new_arr[n];
    for(int i = n-1 ; i>=0 ; i--){
        new_arr[--count[arr[i]]] = arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<new_arr[i]<<endl;
    }

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[] = {3,2,5,5,4,4,1};
    count_sort(arr,7);
    
    return 0;
}