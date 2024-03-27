
#include <iostream>
using namespace std;

int main()
{
    int base;
    int expoente;
    int resultado = 1;
    
    cout<<"digite o valor da base: ";
    cin>> base;
    cout<<"digite o expoente: ";
    cin>>expoente;
    
    for(int i=0; i<expoente; i++){
        resultado *= base;
    }
    
    cout<<"O resultado é: " << resultado;
    

    return 0;
}