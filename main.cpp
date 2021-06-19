#include <iostream>
#include "investimento.h"
#include <math.h>
using namespace std;

int main() {
char menu, opmenu;
int tela;

do{
tela=0;
system("clear");
cout<<"--------------------------------------\n\n";
cout<<"***CALCULADORA DE JUROS V1.0***\n\n";
cout<<"--------------------------------------\n";
cout<<" 1 - CALCULAR JUROS SIMPLES\n";
cout<<" 2 - CALCULAR JUROS COMPOSTO\n";
cout<<" 0 - SAIR\n";
cout<<"\n \n";
cout<<"DIGITE UMA OPÇÃO DESEJADA\n";
menu=getchar();
switch (menu) {
  case '1': {
    Simples();
    opmenu=getchar();

    float vInicial=0, taxa=0, tempo=0;
  
  cout << "Digite o capital inicial: R$"; cin >> vInicial;
  cout << "Digite a taxa anual: "; cin >> taxa;
  cout << "Digite o tempo de aplicacao em anos: "; cin >> tempo;

 cout << Simples(vInicial, taxa, tempo);
    break;
  }
  case '2': {
    Composto();
    opmenu=getchar();
    float vInicial=0, taxa=0, tempo=0;
  
  cout << "Digite o capital inicial: R$"; cin >> vInicial;
  cout << "Digite a taxa anual: "; cin >> taxa;
  cout << "Digite o tempo de aplicacao em anos: "; cin >> tempo;

 cout << Simples(vInicial, taxa, tempo);
    break;
  }
  case '3': {
    cout<<"Encerrando...\n\n";
    tela=1;
 }

    break;
   default: {
     tela=0;
     cout<<"OPCAO INVALIDA \n";
    break;
   }
  }
 } while (tela==0);
}
