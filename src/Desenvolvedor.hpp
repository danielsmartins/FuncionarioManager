#pragma once

#include "Funcionario.hpp"

class Desenvolvedor : public Funcionario { 
    private:
    int quantidadeDeProjetos;

    public:
    void setQuantidadeDeProjetos(int quantidadeDeProjetos);
    int getQuantidadeDeProjetos();

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};
