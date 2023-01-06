#include<iostream>
using namespace std;
int get_bit(int n , int ind){
    return (n & (1<<ind))!=0 ; 
}
int set_bit(int n , int ind){
    return (n |(1<<ind));
}
int clear_bit(int n , int ind){
    int mask = ~(1<<ind );
    return (n&mask);
}
int update_bit(int n , int ind , int s_bit){
    int mask = ~(1<<ind);
    n = mask&n ;
    return ( n | s_bit<<ind ) ;
}

int no_of_1s(int n ){
    int count = 0;
    while(n!=0 ){
        n = n&(n-1);
        count +=1 ;
    }
    return count;
}

int is_power_of_2(int n ){
    return n && !(n&(n-1));
}

void all_subsets(char arr[] , int n){
    for(int i = 0 ; i < (1<<n) ; i++){
        for(int j = 0 ; j<n ; j++){
            if(i & (1<<j) ){
                cout<<arr[j] <<" ";
            }
        }
        cout<<endl;
    }
}

int find_one_diff_no(int arr[] , int n){
    int xor_sum =0;
    for(int i = 0 ; i<n ; i++){
        xor_sum = xor_sum^ arr[i] ;
    }
    return xor_sum;

}

int primesteve(int n){
    int prime[100]={0};
    for(int i = 2 ; i<=n ; i++){
        if (prime[i]==0){
            for(int j = i*i ; j<=n ; j+=i){
                prime[j]=1 ;
            }
        }
    }
    for (int i = 2 ; i<=n ; i++){
        if (prime[i]==0 ){
            cout<<i<<" ";
        }
    } 

}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif 

    for(int i = 0 ; i<7; i++){
        cout<< get_bit (5 , i);
    }
    cout<<endl<<set_bit(5,0)<<endl;
    cout<<clear_bit(5 ,1)<<endl;
    cout<<update_bit(5,1,9)<<endl;
    cout<<is_power_of_2(8)<<endl;
    cout<<no_of_1s(4)<<endl;
    char arr[] = {'a' , 'b' , 'c'};
    all_subsets(arr , 3);
    int lis[7] = {1,3,3,2,1,4,4};
    cout<<find_one_diff_no(lis , 7);
    primesteve(50);
    return 0 ;
}
