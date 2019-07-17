#ifndef CONTROLEPAGAMENTO_H
#define CONTROLEPAGAMENTO_H

#include "Pagamento.h"
#include <iostream>


class ControlePagamento
{
    public:
        ControlePagamento();
        void setPagamento(double valor);
        double TotalPagamento();
        bool PagamentoFuncionario(string);


    private:
        Pagamento pagamentos [10];  //pagamentos é um array de objetos do tipo Pagamento;
};

#endif // CONTROLEPAGAMENTO_H
