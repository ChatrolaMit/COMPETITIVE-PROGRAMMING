#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

bool myCompare(pair<int , int>p1 , pair<int , int>p2){
    return p1.first<p2.first;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // vectors && STL : pairs

    // vector<int> vec ;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // for(int i = 0 ; i<vec.size() ; i++){
    //     cout<<vec[i]<<endl;
    // }

    // vector<int> :: iterator it;
    // for(it = vec.begin() ; it!=vec.end() ; it++){
    //     cout<<*it<<endl;
    // }

    

    // vec.pop_back();
    // // cout<<vec[0]<<vec[1]<<vec[2];

    // for(auto ele:vec){
    //     cout<<ele<<endl;
    // }

    // vector<int> arr(5,11);
    // for(auto ele:arr){
    //     cout<<ele<<endl;
    // }
    // swap(vec , arr);
    // sort(arr.begin() ,arr.end() ,greater<int>() );

    // for(auto ele:arr){
    //     cout<<ele<<endl;
    // }

    // // stl :pair()

    // pair<int , char> pain;
    // pain.first = 4;
    // pain.second = '2';
    
    int arr[] = {10 ,16 , 7 , 14 , 5,3,2,9};
    vector<pair<int , int>>v;

    for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++){
        // pair<int , int >p;
        // p.first = arr[i];
        // p.second = i;
        // v.push_back(p);
        v.push_back(make_pair(arr[i] , i));
    }
    sort(v.begin() , v.end() , myCompare  );
    for(int i = 0 ; i<v.size() ; i++){
        arr[v[i].second] = i;
    }
    
    for(int i = 0 ; i<v.size() ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}