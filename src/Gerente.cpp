#include "Gerente.hpp"
#include <iostream>

void setBonusMensal(float bonusMensal) { 
  this->bonusMensal = bonusMensal; 
}

float getBonusMensal() { 
  return this->bonusMensal; 
}

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
}
