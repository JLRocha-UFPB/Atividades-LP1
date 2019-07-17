#include "ControlePagamento.h"
#include "Pagamento.h"
#include <iostream>
#include <stdio.h>

int i;

ControlePagamento::ControlePagamento()
{
    //ctor Padrao
}

void ControlePagamento::setPagamento(double valor){
    for(i=0; i<10; i++){
        if(pagamentos[i].getValorPagamento() == 0){
                pagamentos[i].setValorPagamento(valor);
            break;
        }
    }
}

double ControlePagamento::TotalPagamento(){
    double total=0;

    for(i=0; i<10; i++){
        if(pagamentos[i].getValorPagamento() != 0){
            total = total + pagamentos[i].getValorPagamento();
        }
    }
    return total;
}

bool ControlePagamento::PagamentoFuncionario(string nomeFuncionario){
    for(i=0; i<10; i++){
        if(pagamentos[i].getNomeFuncionario() == nomeFuncionario){
            return true;
        }else
        return false;
    }
}





