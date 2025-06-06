#pragma once

#include "Funcionario.hpp"

class Estagiario : public Funcionario {
  private:
  int horasTrabalhadas;

  public:
  void setHorasTrabalhadas(int horasTrabalhadas);
  int getHorasTrabalhadas();

  float calcularSalarioFinal() const override;
  void exibirInformacoes() const override;
};
