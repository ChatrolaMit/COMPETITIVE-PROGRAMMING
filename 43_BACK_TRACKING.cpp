#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool issafe(int **arr , int x , int y , int n){
    if(x<n && y< n && arr[x][y]==1){
        return true;
    }
    return false;

}

bool rate_in_maze(int **arr , int x , int y , int n , int **solarr){

    if(x==n-1 && y == n-1){
        solarr[x][y]=1;
        return true; 
    }

    if(issafe(arr , x , y , n )){
        solarr[x][y] = 1 ;
        if(rate_in_maze(arr , x , y+1 , n, solarr)){
            return true;
        }
        if(rate_in_maze(arr , x+1 , y , n , solarr)){
            return true;
        }
        solarr[x][y]=0;
        return false;

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
    int **arr = new int *[n];
    int **solarr = new int *[n] ;
    for(int i = 0 ; i<n ; i++){
        arr[i] = new int [n];
        solarr[i] = new int [n];
    }

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>arr[i][j];
            solarr[i][j] = 0;
        }
    }


    if(rate_in_maze(arr , 0 , 0 , n ,solarr )){
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

// bool isSafe(int **arr , int x , int y , int n){
//     if(x<n && y<n && arr[x][y]==1){
//         return true;
//     }
//     return false;
// }

// bool rateinmaze(int ** arr , int x , int y , int n , int** solarr){
//     if((x==n-1) && (y==n-1)){
//         solarr[x][y]=1;
//         return true;
//     }
//     if(isSafe(arr , x , y , n)){
//         solarr[x][y]=1;
//         if(rateinmaze(arr, x+1 , y , n , solarr)){
//             return true;
//         }
//         if(rateinmaze(arr , x , y+1 , n , solarr)){
//             return true;
//         }
//         solarr[x][y]=0;
//         return false;
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
//     int **solarr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             solarr[i][j] = 0;
//         }
//     }
//     if (rateinmaze(arr, 0, 0, n, solarr))
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << solarr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     else{
//         cout<<"not_possible";
//     }

//     return 0;
// }