#include "Gerente.hpp"
#include <iostream>

void Gerente::setBonusMensal(float bonusMensal) { 
  this->bonusMensal = bonusMensal; 
}

float Gerente::getBonusMensal() { 
  return bonusMensal; 
}

float Gerente::calcularSalarioFinal() {
  return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
}
