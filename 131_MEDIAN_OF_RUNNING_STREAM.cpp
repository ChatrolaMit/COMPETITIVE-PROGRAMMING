#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <algorithm>
#include <climits>
#define ll long long
using namespace std;

priority_queue<int ,vector<int> , greater<int>>pqmin;
priority_queue<int ,vector<int> >pqmax;

void insert(int x){
    
    if(pqmax.size()==pqmin.size()){
        if(pqmax.size()==0 ){
            pqmax.push(x);
            return;
        }
        if(x>pqmax.size()){
            pqmin.push(x);
        }
        else{
            pqmin.push(x);
        }
    }
    else{
        if(pqmax.size()>pqmin.size()){
            if(x>pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x<pqmin.top()){
                pqmax.push(x);
            }
            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }

}
double find_median(){
    if(pqmin.size()==pqmax.size()){
        return (pqmin.top()+pqmax.top()+0.0)/2.0;
    }
    else if(pqmax.size()>pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    insert(10);
    cout<<find_median()<<endl;
    insert(15);
    cout<<find_median()<<endl;
    insert(21);
    cout<<find_median()<<endl;
    insert(30);
    cout<<find_median()<<endl;
    insert(18);
    cout<<find_median()<<endl;
    insert(19);
    cout<<find_median()<<endl;

    return 0;
}