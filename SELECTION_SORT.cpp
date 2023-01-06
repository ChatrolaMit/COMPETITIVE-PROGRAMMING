#include<iostream>
using namespace std;

void selection_sort(int lis[] , int n ){
    for (int i = 0 ; i<n-1 ; i++){
        int m = i;
        for(int j = i+1 ; j<n ; j++){
            if (lis[j]<lis[m]) m=j;
            }
        if (m!=i ){
            int temp = lis[i];
            lis[i] = lis[m];
            lis[m] = temp;
        }
    }

}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif 

    int n ;
    cin>> n ; 
    int lis[n];

    for(int i = 0 ; i<n ; i++) cin>>lis[i] ;
    selection_sort(lis , n );

    for(int i = 0 ; i<n ; i++) cout<<lis[i]<<" ";
    return 0;

}