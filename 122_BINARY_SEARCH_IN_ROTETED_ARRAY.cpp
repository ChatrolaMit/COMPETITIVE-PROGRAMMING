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

int binary_search_in_roteted(int arr[] , int s , int e ,int key){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[s]<=arr[mid]){
        if(key>=arr[s] and key<=arr[mid]){
            return binary_search_in_roteted(arr , s , mid-1 , key);
        }
        return binary_search_in_roteted(arr , mid+1 , e , key);
    }
    else{
        if(key>=arr[mid] && key<=arr[e]){
            return binary_search_in_roteted(arr , mid+1 , e , key );
        }
        return binary_search_in_roteted(arr , s , mid-1 , key);
    }


}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int arr[] = {10 , 20 , 40 , 30};
    cout<<binary_search_in_roteted( arr, 0 , 3 , 30 );
    

    

    return 0;
}

