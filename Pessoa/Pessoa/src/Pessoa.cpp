#include "Pessoa.h"
#include <iostream>


Pessoa::Pessoa(string nome,string telefone,int idade){
    this ->nome = nome;
    this ->telefone = telefone;
    this ->idade = idade;
}

// Chamada dos Metodos Gets e Sets //

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

int Pessoa::getIdade(){
    return idade;
}

void Pessoa::setNome(string nome){
    this-> nome = nome;
}
void Pessoa::setTelefone(string telefone){
    this-> telefone = telefone;
}
void Pessoa::setIdade(int idade){
    this -> idade = idade;
}


