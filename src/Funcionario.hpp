#pragma once

#include <string>
#include <iostream>

class Funcionario {
    protected: 
    std::string nome;
    float salarioBase;

    private: 
    int id;

    public:
    virtual ~Funcionario() {} // destrutor virtual para deletar uma instância derivada usando um ponteiro da base

    void setNome(const std::string& nome);
    std::string getNome() const; 

    void setSalarioBase(float salarioBase);
    float getSalarioBase() const;

    void setId(int id);
    int getId() const;

    virtual void exibirInformacoes() const;
    virtual float calcularSalarioFinal() const = 0;
    
};