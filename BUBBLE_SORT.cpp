#include<iostream>
using namespace std;

void bubble_sort(int lis[] , int n ){
    for(int i = 0 ; i<n-1 ; i++ ){
        for(int j = 0 ; j<n-i-1 ; j++){
            if (lis[j]>lis[j+1]){
                int temp = lis[j];
                lis[j] = lis[j+1] ; 
                lis[j+1] = temp ;
            }
        }
    }
}
int main(){

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt" , "r" , stdin);
    //     freopen("output.txt" , "w" , stdout);
    // #endif 

    int n ;
    // cin>> n ; 
    int lis[] = {1,4,3,5,7,3,8};

    // for(int i = 0 ; i<n ; i++) cin>>lis[i] ;
    bubble_sort(lis , 7 );

    for(int i = 0 ; i<7 ; i++) cout<<lis[i]<<" ";
    return 0;

}