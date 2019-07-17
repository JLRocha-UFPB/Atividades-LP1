#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;

class Invoice
{
    public:
        Invoice(); //construtor padrao

        Invoice(int num,int quant,double price,string desc); //construtor que start os atributos
        //criacao de metodos get e set  para acessar e configurar cada um dos atributos

        int getNum();   //devoler valores
        int getQuant();
        double getPrice();
        string getDesc();

        double getInvoiceAmount();

        void setNum(int num);
        void setQuant(int quant);
        void setPrice(double price);
        void setDesc(string desc);


    private:
    int num;
    int quant;
    double price;
    string desc;
};

#endif // INVOICE_H
