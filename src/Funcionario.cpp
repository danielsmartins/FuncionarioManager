#include "src/Funcionario.hpp"
#include <iostream>

Funcionario::~Funcionario() {}

void Funcionario::setNome(const std::string& nome) {
    this->nome = nome;
}

std::string Funcionario::getNome() const {
    return nome;
}

void Funcionario::setSalarioBase(float salarioBase) {
    this->salarioBase = salarioBase;
}

float Funcionario::getSalarioBase() const {
    return salarioBase;
}

void Funcionario::setId(int id) {
    this->id = id;
}

int Funcionario::getId() const {
    return id;
}

void Funcionario::exibirInformacoes() const {
    std::cout << "ID: " << id << "\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Salário base: " << salarioBase << "\n"; 
}


