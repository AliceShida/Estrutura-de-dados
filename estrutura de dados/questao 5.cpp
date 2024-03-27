
#include <iostream>
using namespace std;
//elementos do array
struct Carro {
    string marca;
    string ano;
    double preco;
};

int main()
{
    double p;
    //vetor de struct
    Carro carros[5];
    //for para armazenar os valores do usuario no array
     for (int i = 0; i < 5; ++i) {
        cout<< "Digite a marca do carro: ";
        cin>> carros[i].marca;
        cout<< "Digite o ano do carro: ";
        cin>> carros[i].ano;
        cout<< "Digite o preço do carro: ";
        cin>> carros[i].preco;
        
        cout<<"Digite um valor (preço): ";
        cin>>p;
        
        if(carros[i].preco < p){
            cout<<"carros com menor valor que " << p << ":" << carros[i].marca <<" "<< carros[i].ano << endl;
        }else{
            cout<<"operação encerrada!";
        }
    }
     
    
    
    
    return 0;
}