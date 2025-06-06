#include "Desenvolvedor.hpp"
#include <iostream>

void Desenvolvedor::setQuantidadeDeProjetos(int quantidadeDeProjetos) {
  this->quantidadeDeProjetos = quantidadeDeProjetos;
}

int Desenvolvedor::getQuantidadeDeProjetos() {
  return quantidadeDeProjetos;
}

float Desenvolvedor::calcularSalarioFinal() {
  return salarioBase + (500.0f * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() {
}
