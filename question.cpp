// #include <iostream>
// #include<algorithm>
// #include<string>
// using namespace std;

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     // int i = 0 ;
//     // int p = 10;
//     // int *ptr = new int();
//     // ptr = &p;
//     // cout<<*ptr <<endl;
//     // int arr[4]={10 ,11 ,12 , 13};
//     // ptr = new int[4];
//     // ptr = arr ;
//     // for(int i = 0 ; i<4 ; i++){
//     //     cout<<ptr[i] << endl;
//     // }
//     // delete[]ptr ;
//     // for(int i = 0 ; i<4 ; i++){
//     //     cout<<ptr[i] << endl;
//     // }

//     // strings 

//         // string s ;
//         // cin>>s ; 
//         // cout<<s ; 

//         // getline(cin , s);
//         // cout<<s ;

//         // string ss(6 , 'h');
//         // cout<<"\n"+ss;

//         // string s = "snfufneffef";
//         // transform (s.begin() , s.end() , s.begin() ,::toupper );
//         // cout<<s<<endl ;
    
//         // transform (s.begin() , s.end() , s.begin() ,::tolower );
//         // cout<<s<<endl ;

//         // string ss = "12345";
//         // sort(ss.begin() , ss.end() , greater<int>() ) ;
//         // cout<<ss<<endl;

//         // int a=6,b= 6;
//         // cout<<__gcd(a,b);

        
        


        



    
// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	for(int xx =0 ; xx<t ; xx++){
// 	    int n ,count=0;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s ;
	   
// 	    for(int i = 0 ; i<n ; i++){
// 	        for(int j = i+1 ; j<n ; j++ ){
// 	            if(abs(s[i]-s[j])==j-i){
// 	                count++ ;
// 	            }
// 	        }
// 	    }
// 	    cout<<count<<endl;
	    
	    
	    
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define rad


int main() {
	// your code goes here
	ll t;
	cin>>t;
	for(int xx =0 ; xx<t ; xx++){
	    ll n ,count=0;
	    cin>>n;
	    string s;
	    cin>>s ;
	    
	    map<ll , ll>a;
	    map<ll , ll>b;
	    for(int i = 0 ; i<n ; i++){
	        a[i-s[i] + 48]++;
	        b[i+s[i]-48]++;
	    }
	    ll ans=0;
	    
	    for(auto itr = a.begin();itr!=a.end();itr++ ){
	        ans+=(itr->ss)*(itr->ss)/2 ;
	    }
	    for(auto itr = b.begin();itr!=b.end();itr++ ){
	        ans+=(itr->ss)*(itr->ss)/2 ;
	    }
	    
	    cout<<ans<<endl;
	    
	//    for(ll i = 0 ; i<n ; i++){
	//        for(ll j = i+1 ; j<n ; j++ ){
	//            if(abs(s[i]-s[j])==j-i){
	//                count++ ;
	//            }
	//        }
	//    }
	//    cout<<count<<endl;
	    
	    
	    
	}
	return 0;
}