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
    fflush(stdin);
    cout<<"--------------------------------------\n\n";
    cout<<"*CALCULADORA DE JUROS V1.0*\n\n";
    cout<<"--------------------------------------\n";
    cout<<" 1 - CALCULAR JUROS SIMPLES\n";
    cout<<" 2 - CALCULAR JUROS COMPOSTO\n";
    cout<<" 0 - SAIR\n";
    cout<<"\n \n";
    cout<<"DIGITE UMA OPÇÃO DESEJADA: ";
    cin >> menu;

    float vInicial=0, taxa=0, tempo=0;

    tInvestimentos valores;
    vInicial = valores.cinValorInicial();
    taxa = valores.cinTaxa();
    tempo = valores.cinTempo();

    
    switch (menu) {
      case '1': {
      
        Simples(vInicial, taxa, tempo);
        
        break;
      }
      case '2': {
      
        Composto(vInicial, taxa, tempo);
        
        break;
      }
      case '3': {
        cout<<"Encerrando...\n\n";
        tela=1;
        break;
      }

      default: {
        tela=0;
        cout<<"OPCAO INVALIDA \n";
        break;  
      }
    }
    char pause=0;
    cout<<"Digite qualquer coisa para continuar."; cin >> pause;
  }while (tela==0);
}