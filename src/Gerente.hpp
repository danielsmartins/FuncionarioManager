#pragma once

#include "Funcionario.hpp"

class Gerente : public Funcionario {
private:
  float bonusMensal;
public:
  void setBonusMensal(float bonusMensal);
  float getBonusMensal();

  float calcularSalarioFinal() const override;
  void exibirInformacoes() const override;
};
