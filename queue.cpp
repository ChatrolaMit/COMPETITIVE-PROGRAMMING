#include <iostream>
#include<string>
#include<vector>
#include<stack>
#include <algorithm>
using namespace std;

class Queue{

    int *arr ;
    int size ; 
    int max_size;

public :

    Queue(int default_size = 10){
        arr = new int[default_size];
        size = 0;
        max_size = default_size;
    }
    bool empty(){
        return size == 0;

    }
    bool full(){
        return size == max_size;
    }

    void enqueue(){
        if(full()){
            cout<<"ovf\n";
            return;
        }
        
    }
    void dequeue(){

    }

};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    return 0;
}