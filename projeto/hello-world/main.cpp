#include <iostream>
using namespace std;

string saudacao(string nome) {
    return "olá," + nome + "! Bem vindo ao sistema";
}


int main() {
    string nome;

    cout << "digite seu nome";
    cin >> nome;

    cout << saudacao(nome) << endl;

    return 0;
}