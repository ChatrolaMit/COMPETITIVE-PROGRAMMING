#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll m,n;
    cin>>m>>n;
    ll p,q;
    cin>>p>>q;
    vector<ll>arr;
    ll n;
    cin>>n;
    arr.push_back(n);
    for(ll i = 1 ;arr[-1]!=99 ;i++ ){
        ll qq;
        cin>>qq;
        arr.push_back(qq);
    }

    int grid[m][n]={0};
    // vector<char>dire = {'e' , 'v' , 'n' ,'s' };
    char dire ;
    if(p==0 ){
        dire = 's';
    }
    else if(q==0){
        dire = 'e';
    }
    else if(p==m-1){
        dire='n';
    }
    else{
        dire='w';
    }

    int tag =0;
    for(ll i = 0 ; i<(ll)arr.size() ;i++){
        if(p>m-1 or q>n-1 or p<0 or q<0){
            tag=3;
            break;
        }
        if(arr[i]==0){
            if(dire=='e'){
                if(q+1<n  and grid[p][q+1]==0){
                    grid[p][q+1] = 1;
                    q++;
                }
                else if(q+1<n){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
                
            }
            else if(dire=='w'){
                if(q-1>=0  and grid[p][q-1]==0){
                    grid[p][q-1]=1;
                    q--;
                }
                else if(q-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
                
            }else if(dire=='n'){
                if(p-1>=0  and grid[p-1][q]==0){
                    grid[p-1][q]=1;
                    p--;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }else{
                if(p+1<n  and grid[p+1][q]==0){
                    grid[p][q+1]=1;
                    p++;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
                
            }

        }
        else if(arr[i]==1){
            if(dire=='e'){
                if(p+1<n  and grid[p+1][q]==0){
                    grid[p][q+1]=1;
                    p++;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }
            else if(dire=='w'){
                if(p-1>=0  and grid[p-1][q]==0){
                    grid[p-1][q]=1;
                    p--;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }else if(dire=='n'){
                if(q+1<n  and grid[p][q+1]==0){
                    grid[p][q+1] = 1;
                    q++;
                }
                else if(q+1<n){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }else{
                if(q-1>=0  and grid[p][q-1]==0){
                    grid[p][q-1]=1;
                    q--;
                }
                else if(q-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }

        }
        else{
            if(dire=='e'){
                if(p-1>=0  and grid[p-1][q]==0){
                    grid[p-1][q]=1;
                    p--;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }
            else if(dire=='w'){
                if(p+1<n  and grid[p+1][q]==0){
                    grid[p][q+1]=1;
                    p++;
                }
                else if(p-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }else if(dire=='n'){
                if(q-1>=0  and grid[p][q-1]==0){
                    grid[p][q-1]=1;
                    q--;
                }
                else if(q-1>=0){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }else{
                if(q+1<n  and grid[p][q+1]==0){
                    grid[p][q+1] = 1;
                    q++;
                }
                else if(q+1<n){
                    tag=3;
                    break;
                }
                else{
                    tag=1;
                    break;
                }
            }
        }
    }


    return 0;
}
