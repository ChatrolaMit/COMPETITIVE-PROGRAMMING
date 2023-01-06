#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

// function overloading
// operator overloding

class complax{
    // private:
    int real , img;
    public:

    complax(){

    }
    complax(int rea,int im){
        real = rea;
        img = im;
    }
    complax operator + (complax &obj){
        complax ans ;
        // cout<<ans.real<<","<<ans.img<<endl;
        ans.real = real+obj.real;
        ans.img = img+obj.img;
        return ans;
    }
    void display(){
        cout<<real<<" , "<<img<<endl;
    }
};

// runtime virtual operator  

class base{
    public:
    virtual void print(){
        cout<<"base -> print()"<<endl;
    }
    void display(){
        cout<<"base -> display()"<<endl;
    }
};
class derived : public base{
    public:
    void print(){
        cout<<"derived -> print()"<<endl;
    }
    void display(){
        cout<<"derived -> display()"<<endl;
    }


};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // complax a(2,3);
    // complax b(3,2);
    // complax c = a+b;
    // c.display();

    base *b;
    derived d;
    b = &d;
    b->print();
    b->display();
    d.print();
    d.display();


    
    


    
    return 0;
}