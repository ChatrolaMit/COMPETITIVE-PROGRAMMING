#include<iostream>
#include<algorithm>
using namespace std;

int powOfTwo(int n){
    return ((n&n-1) == 0 );
}

int noOfOnes(int n){
    int count = 0 ; 
    while(n!=0){
        n = n&(n-1);
        count+=1;
    }
    return count;
}

int subSets(char arr[] , int n){
    for(int i = 0 ; i<(1<<n) ; i++ ){
        cout<<"{ ";
        for(int j = 0 ; j<n ; j++){
            if (i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<"}"<<endl;
    }

}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // check the given num is power of 2 or not

    int n = 8 ;
    cout<<powOfTwo(n)<<endl;

    cout<<noOfOnes(n)<<endl;

    char arr[]= {'a' , 'b' , 'c' , 'd'} ;
    cout<<subSets(arr, 4);
    return 0;
}