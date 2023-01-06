#include<iostream>
using namespace std;
int main(){
    int a = 0;// stack storing
    int *p = new int();//heap storing 
    *p = 10 ;
    delete (p);
    p = new int[4];
    delete[]p;
    p= NULL;
    return 0;
}