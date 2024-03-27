
#include <iostream>
using namespace std;

struct Funcionario{
    string nome;
    int idade;
    string sexo;
    long cpf;
    string dataNascimento;
    int codSetorTrabalho;
    string cargo;
    double salario;
};

int main()
{
    Funcionario newfuncionario;
    
    cout<<"digite seu nome: ";
    cin>> newfuncionario.nome;
    cout<<"digite sua idade: ";
    cin>>newfuncionario.idade;
    cout<<"digite seu sexo (M/F): ";
    cin>>newfuncionario.sexo;
    cout<<"digite seu cpf: ";
    cin>>newfuncionario.cpf;
    cout<<"digite sua data de nascimento (dia/mes/ano): ";
    cin>>newfuncionario.dataNascimento;
    cout<<"digite o código do setor onde trabalha: ";
    cin>>newfuncionario.codSetorTrabalho;
    cout<<"digite seu cargo: ";
    cin>>newfuncionario.cargo;
    cout<<"digite seu salário: ";
    cin>>newfuncionario.salario;
    
    cout<<"Dados do funcionario: " << endl;
    cout<< newfuncionario.nome << endl;
    cout<< "idade: " << newfuncionario.idade << endl;
    cout<< "sexo: " << newfuncionario.sexo << endl;
    cout << "cpf: " << newfuncionario.cpf << endl;
    cout << "data Nascimento: " << newfuncionario.dataNascimento << endl;
    cout << "codigo setor trabalho: " << newfuncionario.codSetorTrabalho << endl;
    cout << "cargo: " << newfuncionario.cargo << endl;
    cout << "salario: " << newfuncionario.salario << endl;
      

    return 0;
}