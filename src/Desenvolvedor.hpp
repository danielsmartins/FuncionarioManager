#pragma once

#include "Funcionario.hpp"

class Desenvolvedor : public Funcionario { 
    private:
    int quantidadeDeProjetos;

    public:
    void setQuantidadeDeProjetos(int quantidadeDeProjetos);
    int getQuantidadeDeProjetos();

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};
