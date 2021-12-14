#include <iostream>
using namespace std;


int resultado (int &a, int &b,int &c){
int aux1,  aux2;
aux1=a;
aux2=b;
c=0;
a=aux1+aux2;
b=aux1*aux2;
c=aux1-aux2;

}

main(){
int n1,n2,soma;

cout<<"Digite n1:";
cin>>n1;
cout<<"Digite n2:";
cin>>n2;
resultado (n1,n2,soma);

cout<<"A soma dos dois = "<<n1<<endl;
cout<<"A multiplicacao dos dois = "<<n2<<endl;
cout<<"A diferenca dos dois = "<<soma<<endl;



}
