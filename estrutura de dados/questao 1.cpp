#include <iostream>
using namespace std;

int calculoCateto(int catetoA, int catetoB){
    int hipotenusa = (catetoA*catetoA) + (catetoB* catetoB);
    return hipotenusa;
}

int main()
{
    int catetoA;
    int catetoB;
    
    cout<<"Digite o valor do 1° cateto: ";
    cin>>catetoA;
    cout<<"Digite o valor do 2° cateto: ";
    cin>>catetoB;
    
    cout<< calculoCateto(catetoA, catetoB);
    return 0;
}

