#include <iostream>
#include "ControlePagamento.h"
#include "Pagamento.h"

using namespace std;

int main()
{
    ControlePagamento test;


    test.setPagamento(500);

    cout << "O Total Calculado Eh: " << "R$ " << test.TotalPagamento() << endl;

    test.setPagamento(100);

    cout << "O Total Calculado Eh: " << "R$ " << test.TotalPagamento() << endl;

    test.setPagamento(500);

    cout << "O Total Calculado Eh: " << "R$ " << test.TotalPagamento() << endl;

    return 0;
}
