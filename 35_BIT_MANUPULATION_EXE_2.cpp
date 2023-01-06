#include <iostream>
#include <algorithm>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int setBit(int n , int pos){
    return (n&(1<<pos)!=0);
}
void twoUnique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int ans1 = xorsum , ans2 = xorsum;
    int set_bit_no = xorsum & ~(xorsum-1);
    for(int i = 0 ; i<n ; i++){
        if(arr[i]&set_bit_no){
            ans1 = ans1^arr[i];
        }
        else{
            ans2^=arr[i];
        }
    }  
    cout<<ans1<<"  "<<ans2;

    
}
int getbit(int n , int pos){
    return (n&(1<<pos))!=0;
}
void from_Triplet_Unique(int arr[] , int n ){
    int ans[32]={0};
    for(int i = 0 ; i<32 ; i++){
        for(int j = 0 ; j<n ; j++){
            if(getbit(arr[j] , i)){
                ans[i]++;
            }
        }
    }
    string s = "";
    for(int i = 31 ; i>=0 ; i--){
        if(ans[i]%3==0) s+='0';
        else s+='1';


    }
    cout<<stoi(s)<<endl;

}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int arr[]={2,3,5,4,3,5,2} ;
    // cout<<unique(arr , 7)<<endl;

    // int arr[] = {2,3, 3,2,4,5,5,8};
    // twoUnique(arr, 8);

    int lis[] = {2,2,2,3,3,3,4,4,4,15};
    from_Triplet_Unique(lis , 7);

    return 0;
}
