#include <iostream>
#include <algorithm>
using namespace std;
int check_sorted(int arr[] , int a , int n){
    if(a==n) {
        return true ;
    }
    if (arr[a]<=arr[a+1]){
        return check_sorted(arr , a+1 , n);
    }
    else{
        return false;
    }

}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[] = {1,2,6,6};
    cout<<check_sorted( arr, 0,4);
    return 0;
}