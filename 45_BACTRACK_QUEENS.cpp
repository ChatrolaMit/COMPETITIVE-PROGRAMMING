#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

bool queen_is_safe(int **arr ,int x , int y , int n ){
    for(int i = 0 ; i<x ; i++){
        if(arr[i][y]==1){
            return false;
        }
    }
    int row = x , col = y;
    while(row!=0 && col!=0){
        if(arr[row][col]==1){
            return false;
        }
        row-- ; 
        col-- ;
    }
    row = x , col = y;
    while(row!=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;

}

bool queen_in_chess(int **arr , int x , int n){
    if(x>=n){
        return true;
    }
    for(int i = 0 ; i<n ; i++){
        if(queen_is_safe(arr , x , i , n)){
            arr[x][i] = 1 ; 
            if(queen_in_chess(arr , x+1, n)){
                return true;
            }
            arr[x][i] = 0 ;
        }
        
    }
    return false;
}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n;
    int **arr = new int*[n];
    for(int i = 0 ; i<n ; i++){
        arr[i] = new int [n];
    }
    for(int i = 0  ;i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            arr[i][j] = 0;
        }
    }

    if(queen_in_chess(arr , 0 , n)){
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<" ";
            }
            
            cout<<endl;
        }
    }
    
    
    return 0;
}





// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool queen_is_Safe(int **arr, int x, int y, int n)
// {
//     for (int i = 0; i < x; i++)
//     {
//         if (arr[i][y] == 1)
//         {
//             return false;
//         }
//     }
//     int row = x, col = y;
//     while (row >= 0 && col < n)
//     {
//         if (arr[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col++;
//     }
//     row = x ;
//     col = y ;
//     while (row >= 0 && col >=0)
//     {
//         if (arr[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col--;
//     }

//     return true;
// }

// bool queen_in_chase(int **arr, int x, int n)
// {

//     if (x >= n)
//     {
//         return true;
//     }

//     for(int i = 0 ; i<n ; i++){
//         if(queen_is_Safe(arr, x , i , n)){
//             arr[x][i]=1;
//             if(queen_in_chase(arr , x+1 , n)){
//                 return true;
//             }
//             arr[x][i]=0;
            
//         }
//     }
//     return false;
// }

// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int n;
//     cin >> n;

//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j]=0;
//         }
        
//     }

//     if (queen_in_chase(arr, 0, n))
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }