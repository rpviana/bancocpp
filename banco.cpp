#include <iostream>

using namespace std;

//aproveitando a materia e o facto de nao ter nada para fazer agora criei esse projeto
   struct Conta {;
    string nomedapessoa;
    int numeroConta;
    double saldo;
    string pass;
    string confirmarpass;
    string historico;
};

//Criacao da conta, contem nessa criacao o nome a pass e a confirm dela
Conta criarConta(string& password, string& confirmpass, string& nome) {
    Conta novaConta;
    novaConta.nomedapessoa = nome;
    novaConta.pass = password;
    novaConta.confirmarpass = confirmpass;

    cout << "Digite o seu nome inteiro: ";
    cin >> nome;

    do {
        cout << "Crie uma password: ";
        cin >> password;

        cout << "Confirme a sua password: ";
        cin >> confirmpass;

        if (password != confirmpass) {
            cout << "As Palavras pass nao coincidem, tente denovo !! \n";
            cout << "_________________________________________________\n";
        }
    } while (password != confirmpass);

    cout << "_________________________";
    cout << "\nConta criada com sucesso!!" << endl;
    cout << "_________________________";
    cout << "\nBem Vindo a sua nova conta sr/a " << nome << ", espero que goste!" << endl;;

    return novaConta;
}

int main() {
    string nome, password, confirmpass;
    Conta novaConta = criarConta(password, confirmpass, nome);
    return 0;
}

