#include <iostream>
using namespace std;


void MMM(int &a, int &b, int &c)
{
    int a1, a2, a3;
    a1=a;
    a2=b;
    a3=c;

    if ((a>b)&&(b>c))
    {
        a=a3;
        b=a2;
        c=a1;
    }else
       if ((b>c)&&(c>a))
       {
           a=a1;
           b=a3;
           c=a2;
       }else
          if((c>a)&&(a>b))
          { a=a2;
            b=a1;
            c=a3;
          }else
            if ((b>a)&&(a>c))
            {
               a=a3;
               b=a1;
               c=a2;
            }else
               if ((c>b)&&(b>a))
               {
                   a=a1;
                   b=a2;
                   c=a3;
               }else
                 if((a>c)&&(c>b))
                 {
                     a=a2;
                     b=a3;
                     c=a1;
                 }

}

main()
{
    int n1, n2, n3;
    cout<<"Digite numero primeiro: ";
    cin>>n1;
    cout<<"Digite numero segundo: ";
    cin>>n2;
    cout<<"Digite numero terceiro: ";
    cin>>n3;
    MMM(n1, n2, n3);
    cout<<"Numero maior = "<<n3<<endl;
    cout<<"Numero medio= "<<n2<<endl;
    cout<<"Numero menor= "<<n1<<endl;
}
