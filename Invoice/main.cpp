#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice objeto; //inicializa com construtor padrao (vazio)
    Invoice objeto2(19,6,119.50,"teclado DELL");

    cout <<objeto2.getDesc()<< endl;
    cout <<objeto2.getNum()<<endl;
    cout <<objeto2.getPrice()<<endl;
    cout <<objeto2.getQuant()<<endl;
    cout <<objeto2.getInvoiceAmount()<<endl;

    objeto.setDesc("Bug");
    objeto.setPrice(119.85);
    objeto.setNum(78);
    objeto.setQuant(40);

    cout << endl;
    cout <<objeto.getDesc()<< endl;
    cout <<objeto.getNum()<<endl;
    cout <<objeto.getPrice()<<endl;
    cout <<objeto.getQuant()<<endl;
    cout <<objeto.getInvoiceAmount()<<endl;





    return 0;
}
