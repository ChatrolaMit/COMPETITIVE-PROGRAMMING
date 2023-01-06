#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
void solve_sudoku(vector<vector<char>> &a){

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    vector<vector<char>>sudoku = {
        {'5' , '3' , '.' , '.' , '7' , '.' , '.' , '.' , '.'},
        {'6' , '.' , '.' , '1' , '9' , '5' , '.' , '.' , '1'},
        {'.' , '9' , '8' , '.' , '.' , '.' , '.' , '6' , '.'},
        {'8' , '.' , '.' , '.' , '6' , '.' , '.' , '.' , '3'},
        {'4' , '.' , '.' , '8' , '.' , '3' , '.' , '.' , '1'},
        {'7' , '.' , '.' , '.' , '2' , '.' , '.' , '.' , '6'},
        {'.' , '6' , '.' , '.' , '.' , '.' , '2' , '8' , '.'},
        {'.' , '.' , '.' , '4' , '1' , '9' , '.' , '.' , '5'},
        {'.' , '.' , '.' , '.' , '8' , '.' , '.' , '7' , '9'} 
    };
    solve_sudoku(sudoku);
    return 0;
}