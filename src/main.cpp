#include <iostream>
#include <string>
#include <limits> // Necessário para numeric_limits


#include "Funcionario.hpp"
#include "Desenvolvedor.hpp"
#include "Estagiario.hpp"
#include "Gerente.hpp"


using namespace std;

int main() {
    
    Funcionario* funcionarios[10];
    int quantidade = 0;
    const int MIN_FUNCIONARIOS = 6;
    const int MAX_FUNCIONARIOS = 10;

    cout << "=== SISTEMA DE CADASTRO DE FUNCIONÁRIOS ===\n";
    cout << "Você deve cadastrar no mínimo " << MIN_FUNCIONARIOS << " e no máximo " << MAX_FUNCIONARIOS << " funcionários.\n";

    // Loop para cadastrar até o máximo de funcionários
    while (quantidade < MAX_FUNCIONARIOS) {
        int tipo;
        cout << "\n--- Cadastro do funcionário #" << (quantidade + 1) << " ---" << endl;
        cout << "Selecione o tipo de funcionário:" << endl;
        cout << "1 - Desenvolvedor" << endl;
        cout << "2 - Estagiário" << endl;
        cout << "3 - Gerente" << endl;
        cout << "Escolha: ";
        cin >> tipo;

        // Validação da entrada do tipo
        while (cin.fail() || tipo < 1 || tipo > 3) {
            cout << "Entrada inválida. Por favor, digite 1, 2 ou 3: ";
            cin.clear(); // Limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada ruim
            cin >> tipo;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer do teclado

        int id;
        string nome;
        float salarioBase;

        cout << "ID: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Salário base: ";
        cin >> salarioBase;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        // Estrutura if-else para criar o tipo de funcionário correto
        if (tipo == 1) { // Desenvolvedor
            int projetos;
            cout << "Quantidade de projetos: ";
            cin >> projetos;

            Desenvolvedor* dev = new Desenvolvedor();
            dev->setId(id);
            dev->setNome(nome);
            dev->setSalarioBase(salarioBase);
            dev->setQuantidadeDeProjetos(projetos); // Assumindo que o método set se chama setTecnologias

            funcionarios[quantidade++] = dev;
        }
        else if (tipo == 2) { // Estagiário
            int horas;
            cout << "Horas trabalhadas: ";
            cin >> horas;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            Estagiario* est = new Estagiario();
            est->setId(id);
            est->setNome(nome);
            est->setSalarioBase(salarioBase);
            est->setHorasTrabalhadas(horas);

            funcionarios[quantidade++] = est;
        }
        else if (tipo == 3) { // Gerente
            float bonus;
            cout << "Bônus mensal: ";
            cin >> bonus;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            Gerente* ger = new Gerente();
            ger->setId(id);
            ger->setNome(nome);
            ger->setSalarioBase(salarioBase);
            ger->setBonusMensal(bonus);

            funcionarios[quantidade++] = ger;
        }
       

        // Após cadastrar o mínimo, pergunta se o usuário quer continuar
        if (quantidade >= MIN_FUNCIONARIOS) {
            char continuar;
            cout << "\nDeseja cadastrar outro funcionário? (s/n): ";
            cin >> continuar;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (continuar != 's' && continuar != 'S') {
                break; // Sai do loop se a resposta não for 's' ou 'S'
            }
        }
    }

    // Exibição final das informações
    cout << "\n\n=== INFORMAÇÕES DOS FUNCIONÁRIOS CADASTRADOS ===\n";
    for (int i = 0; i < quantidade; i++) {
        cout << "\n--- Funcionário " << (i + 1) << " ---\n";
        funcionarios[i]->exibirInformacoes(); // Chama o método polimórfico
        // Adicionado para cumprir o requisito da tarefa
        cout << "Salário final: " << funcionarios[i]->calcularSalarioFinal() << endl;
    }

    // Liberação de memória (essencial para evitar memory leak)
    cout << "\nLimpando memória..." << endl;
    for (int i = 0; i < quantidade; i++) {
        delete funcionarios[i];
        funcionarios[i] = nullptr; // Boa prática para evitar dangling pointers
    }
    cout << "Programa finalizado." << endl;

    return 0;
}
