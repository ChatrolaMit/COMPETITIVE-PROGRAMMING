#include<iostream>
#include<algorithm>
using namespace std;

int getBit(int n, int pos){
    return (n&(1<<pos))!=0;
}

int setBit(int n , int pos){
    return n|(1<<pos);
}

int clearBit(int n , int pos){
    return n&(~(1<<pos));
}

int updateBit(int n , int pos , int value){
    int mask = ~(1<<pos);
    n = n & mask ;
    return n|(value<<pos);
}
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    // for(int i = 7 ; i>=0;i--)
    cout<<getBit(5,4);

    // cout<<"\n"<<setBit(5 , 1)<<endl;

    // cout<<clearBit(7 , 1)<<endl;

    // cout<<updateBit(5, 1 , 1)<<endl;



    
    return 0 ; 
}