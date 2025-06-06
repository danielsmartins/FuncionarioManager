#include "Estagiario.hpp"
#include <iostream>

void Estagiario::setHorasTrabalhadas(int horasTrabalhadas) {
  this->horasTrabalhadas = horasTrabalhadas;
}

int Estagiario::getHorasTrabalhadas(){
  return horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal(){
  return salarioBase * (horasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes(){
}
