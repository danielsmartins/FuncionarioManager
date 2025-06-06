#include "Desenvolvedor.hpp"
#include <iostream>

void Desenvolvedor::setQuantidadeDeProjetos(int quantidadeDeProjetos) {
  this->quantidadeDeProjetos = quantidadeDeProjetos;
}

int Desenvolvedor::getQuantidadeDeProjetos() {
  return quantidadeDeProjetos;
}

float Desenvolvedor::calcularSalarioFinal() const {
  return salarioBase + (500.0f * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() const {
    std::cout << "ID: " << getId() << "\n";
    std::cout << "Nome: " << getNome() << "\n";
    std::cout << "Tipo: Desenvolvedor\n";
    std::cout << "Projetos: " << quantidadeDeProjetos << "\n";
    std::cout << "Salário base: " << getSalarioBase() << "\n";
    std::cout << "Salário final: " << calcularSalarioFinal() << "\n";
}
