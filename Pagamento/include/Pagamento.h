#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

using namespace std;


class Pagamento
{
    public:
        Pagamento(); // construtor padrão

        //metodos get
        double getValorPagamento();
        string getNomeFuncionario();

        //metodos set
        void setValorPagamento(double valorPagamento);
        void setNomeFuncionario(string nomeFuncionario);


    private:
        //atributos da classe Pagamento
        double valorPagamento = 0; //inicializando atributo com valor 0;
        string nomeFuncionario;
};

#endif // PAGAMENTO_H
