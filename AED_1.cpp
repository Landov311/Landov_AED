//
// Created by lvera on 19/03/2024.
//
#include <iostream>
using namespace std;
void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    int *f= &a;
//    cout<<p<<endl;
//    cout<<*q<<endl;
    *q = &b;
//    cout<<*q<<endl;
//    cout<<*p<<endl;
    (*p)++;
    (*f)++;//lo entendí c:
    cout << a << " " << b << endl;

}