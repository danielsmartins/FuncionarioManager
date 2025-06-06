#pragma once
#include "Funcionario.hpp"

class Desenvolvedor : public Funcionario { 
private:
    int quantidadeDeProjetos; [cite: 5]

public:
    void setQuantidadeDeProjetos(int q) { quantidadeDeProjetos = q; }
    int getQuantidadeDeProjetos() { return quantidadeDeProjetos; }

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};
