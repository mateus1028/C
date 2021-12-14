#include <iostream>
using namespace std;
void mm(int &a, int &b)
{
    int aux;
    if(a>b){
    aux=b;
    b=a;
    a=aux;}
}
main()
{
    int a, b;
    cout<<"Digite valor 1: ";
    cin>>a;
    cout<<"Digite valor 2: ";
    cin>>b;
    mm(a,b);
    cout<<"Menor: "<<a<<endl;
    cout<<"Maior: "<<b<<endl;
}
