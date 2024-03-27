#include <iostream>
using namespace std;

int num1;
int num2;
int num3;

 void maiorNumero(){
     if(num1 > num2 && num1 > num3){
         cout<<"o maior número é: "<< num1;
     }else if(num2 > num1 && num2 > num3){
         cout<<"o maior número é: "<< num2;
     }else{
         cout<<"o maior número é: "<< num3;
     }
 }
 
 void menorNumero(){
     if(num1 < num2 && num1 < num3){
         cout<<"o menor número é: "<<num1;
     }else if(num2 < num1 && num2 < num3){
         cout<<"o menor número é: "<<num2;
     }else{
         cout<<"o menor número é: "<<num3;
     }
 }

int main()
{
    cout<<"digite três números: ";
    cin>> num1 >>num2 >> num3;
    
    maiorNumero();
    menorNumero();
    
}

