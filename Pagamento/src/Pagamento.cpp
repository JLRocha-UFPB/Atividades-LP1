#include "Pagamento.h"
#include <iostream>

Pagamento::Pagamento()
{
    //ctor padrão
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeFuncionario(){
    return nomeFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
    this -> valorPagamento = valorPagamento;
}

void Pagamento::setNomeFuncionario(string nomeFuncionario){
    this -> nomeFuncionario = nomeFuncionario;
}




