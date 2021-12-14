#include <iostream>
using namespace std;
void sub(int &a, int &b)
{
    a=a-b;
    b=a-b;
}
main ()
{
    int n1, n2;
    cout<<"Digite n1: ";
    cin>>n1;
    cout<<"Digite n2: ";
    cin>>n2;
    sub(n1,n2);
    if (n1>n2)
        cout<<"A diferença é="<<n1;
    else
        if (n2>n1)
        cout<<"A diferença é="<<n2;

}
