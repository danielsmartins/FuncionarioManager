#include "Estagiario.hpp"
#include <iostream>

void Estagiario::setHorasTrabalhadas(int horasTrabalhadas) {
  this->horasTrabalhadas = horasTrabalhadas;
}

int Estagiario::getHorasTrabalhadas(){
  return horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() const {
  return salarioBase * (horasTrabalhadas / 160.0f);
}

void Estagiario::exibirInformacoes() const {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << getNome() << "\n";
    std::cout << "Tipo: Estagiário\n";
    std::cout << "Horas trabalhadas: " << horasTrabalhadas << "\n";
    std::cout << "Salário base: " << getSalarioBase() << "\n";
    std::cout << "Salário final: " << calcularSalarioFinal() << "\n";
}
