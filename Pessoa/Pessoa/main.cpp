#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa joao;

    joao.setNome("Joao");
    joao.setTelefone("9982879");
    joao.setIdade(19);


    cout << joao.getNome() << endl;
    cout << joao.getTelefone() << endl;
    cout << joao.getIdade() << endl;


}
