#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;


class Pessoa
{
    public:
        Pessoa(string nome1);     //Construtor que recebe apenas Nome
        Pessoa(string nome = "JOAO",string telefone = "135487645",int idade = 19); //Construtor que recebe nome,telefone e idade

        //Metodos --Get-- --Set-- para obter e setar valores para os atributos da classe;
        string getNome();
        string getTelefone();
        int getIdade();
        void setNome(string nome);
        void setTelefone(string telefone);
        void setIdade(int idade);



    private:
    //Atributos da Classe;
        string nome;
        string telefone;
        int idade;


};

#endif // PESSOA_H
