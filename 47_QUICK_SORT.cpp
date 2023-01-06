#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int partition(int arr[] , int s , int e){
    int pivot = arr[e];
    int i = s-1 ;
    for(int j = s ; j<e ; j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[e];
    arr[e] = temp;
    return i+1;

}

void quick_sort(int arr[] , int s , int e ){
    if(s<e){
        int part = partition(arr , s , e);
        quick_sort(arr , s , part-1);
        quick_sort(arr , part+1 , e);
    }
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n ;
    cin>>n;
    int arr[n] ;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    quick_sort(arr , 0 , n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}

// #include <iostream>
// #include<string>
// #include <algorithm>
// using namespace std;

// int partition(int *arr , int s , int e){
//     int pivot = arr[e];
//     cout<<pivot<<" "<<e<<endl;
//     int i = s-1;
//     for(int j = s; j<e ;j++){
//         if(arr[j]<pivot){
//             i++;
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     int temp = arr[i+1];
//     arr[i+1] = arr[e];
//     arr[e] = temp;
//     return i+1;

// }

// void quick_sort(int *arr , int s , int e){
//     if(s<e){
//         int pi = partition(arr, s , e);
//         quick_sort(arr , s , pi-1);
//         quick_sort(arr , pi+1 , e );
//     }
// }

// int main()
// {

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n ; 
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     quick_sort(arr , 0, n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\n";
//     }

    
//     return 0;
// }