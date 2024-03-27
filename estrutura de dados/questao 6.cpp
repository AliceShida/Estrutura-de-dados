#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    string descricao;
    Data data;
};

int main()
{
    Compromisso agenda[5];
    
    for(int i=0; i < 5; i++){
        cout<<"descrição do compromisso: ";
        cin>>agenda[i].descricao;
        cout<<"data do compromisso (dia/mes/ano): ";
        cin>>agenda[i].data.dia >> agenda[i].data.mes >> agenda[i].data.ano;
    }
    
    int M;
    cout<<"digite o mes: ";
    cin>>M;
    
    while(M != 0){
        int A;
        cout<<"digite o ano: ";
        cin>>A;
        
        cout<<"compromissos do mes: "<<M<<" do ano: "<< A <<endl;
        for(int i=0; i < 5; i ++){
            if(agenda[i].data.mes == M && agenda[i].data.ano == A){
                cout<<agenda[i].descricao;
                }
        }
        
        cout<<"digite o mes ou 0 para encerrar o programa: ";
        cin>>M;
    }
    
        cout<<"programa encerrado com sucesso!";
    
    return 0;
}