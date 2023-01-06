#include <iostream>
#include <algorithm>
using namespace std;

void prime_Sieve(int n){
    int prime[n+3] = {0};
    for(int i = 2 ; i<=n ; i++){
        if(prime[i]==0){
            for(int j = i*i ;j<n ; j++ ){
                prime[i]=1;
            }
        }
    }
    for(int i = 2 ; i<=n ; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

void primefactor(int n ){
    int spf[100] = {0};
    for(int i = 2 ; i<=n ; i++){
        spf[i]=i;
    }
    for(int i = 2 ; i<=n ; i++){
        if(spf[i]==i){
            for(int j = i*i ; j<=n ; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }

}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // prime_Sieve(100);
    cout<<endl;
    int n ;
    cin>>n;
    primefactor(n);
    return 0;
}
