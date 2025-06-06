#include "Gerente.hpp"
#include <iostream>

void Gerente::setBonusMensal(float bonusMensal) { 
  this->bonusMensal = bonusMensal; 
}

float Gerente::getBonusMensal() { 
  return bonusMensal; 
}

float Gerente::calcularSalarioFinal() const {
  return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() const {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << getNome() << "\n";
    std::cout << "Tipo: Gerente\n";
    std::cout << "Bônus: " << bonusMensal << "\n";
    std::cout << "Salário base: " << getSalarioBase() << "\n";
    std::cout << "Salário final: " << calcularSalarioFinal() << "\n";
}
