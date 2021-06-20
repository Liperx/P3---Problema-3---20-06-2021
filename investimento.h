#ifndef tInvesitmentos_H
#define tInvesitmentos_H
#include <math.h>

using namespace std;

struct tInvestimentos{
  float cinValorInicial(){
    float vInicial;
    cout << "Digite o capital inicial: R$"; 
    cin >> vInicial;
    return (vInicial);
  }
  float cinTaxa(){
    float taxa;
    cout << "Digite a taxa anual: "; 
    cin >> taxa;
    return (taxa);
  }
  float cinTempo(){
    float tempo;
    cout << "Digite o tempo de aplicacao em anos: "; 
    cin >> tempo;
    return (tempo);
  }
};

void Simples(float principal, float taxa, float anos)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas
  float juros = principal * taxa * anos;
  float montante = principal * (1 + (taxa * anos));
   
  cout << "O total de juros a ser pago é: " << juros << "\n";
  cout << "O montante a ser pago é: " << montante << "\n\n";
}
void Composto(float principal, float taxa, float anos)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas

    float montante = principal * pow((1 + taxa), anos);
    float juros = montante - principal;
      
    cout << "O total de juros a ser pago é: " << juros << "\n";
    cout << "O montante a ser pago é: " << montante << "\n\n";
}
#endif