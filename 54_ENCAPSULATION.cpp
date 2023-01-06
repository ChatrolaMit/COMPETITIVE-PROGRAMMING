#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

class encapsulation{
    public :
    int a;
    void a_fun(){
        cout<<"in function a";
    }
    private:
    int b;
    void b_func(){
        cout<<"in function b";
    }
    protected:
    int c ;
    void c_func(){
        cout<<"in function c";
    }


};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    encapsulation obj;
    obj.a_fun();
    // obj.b_fun();
    // obj.c_fun();
    
    return 0;
}