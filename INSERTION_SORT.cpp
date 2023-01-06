#include<iostream>
using namespace std;

void insertion_sort(int lis[] , int n ){
    for(int i = 0 ; i<n ; i++ ){
        for (int j = i ; j>0 && lis[j]<lis[j-1] ; j--){
            int temp = lis[j];
            lis[j] = lis[j-1] ;
            lis[j-1] = temp ;
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
    insertion_sort(lis , n );

    for(int i = 0 ; i<n ; i++) cout<<lis[i]<<" ";
    return 0;

}