#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a; //pointer variable
    cout<<*p<<endl; //dereferencing operator
    cout<<p<<endl; //address of a
    cout<<&a<<endl; //address of a
    cout<<&p<<endl; //address of pointer variable p
    return 0;
}