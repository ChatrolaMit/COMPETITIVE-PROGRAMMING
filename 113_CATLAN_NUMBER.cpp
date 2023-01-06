#include<iostream>
using namespace std;

int nth_catalan_num(int n){
    if(n<=0){
        return 1;
    }
    int res = 0;
    for(int i = 0 ; i<n ; i++){
        res+= (nth_catalan_num(i))*(nth_catalan_num(n-i-1));
    }
    return res;
}
int main(){
    for(int i = 0 ; i<10; i++){
        cout<<nth_catalan_num(i)<<" "; 
    } 



    return 0;
}