#include<iostream>
using namespace std;




int main()

{
    setlocale(LC_ALL,"Portuguese");
    int Idade=0;

    cout<<"Digite idade para saber se � necessario ir votar:\n";
    cin>>Idade;

    if(Idade<16)
        cout<<("N�o eleitor, ainda n�o pode votar");
    else{
    if(Idade < 18)
        cout<<("Eleitor, voc� n�o precisa votar");

    else
    if(Idade<=64)
        cout<<("Eleitor, voc� precisa votar");


    else
    if(Idade>=65)
    cout<<("Eleitor facultativo\n");


    }








}
