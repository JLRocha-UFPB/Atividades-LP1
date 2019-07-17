#include "Invoice.h"

using namespace std;

Invoice::Invoice()
{}

Invoice::Invoice(int num,int quant,double price,string desc){
    this ->num = num;
    this ->desc = desc;
    setQuant(quant);
    setPrice(price);
}

//metodos get copia os valores do atributo e manda para o usuario

int Invoice::getNum(){
    return num;
}
int Invoice::getQuant(){
    return quant;
}

double Invoice::getPrice(){
    return price;
}
string Invoice::getDesc(){
    return desc;
}

double Invoice::getInvoiceAmount(){
    return quant * price;
}

//metodos set para pegar os valores do usuario e mandar para o atributo


void Invoice::setNum(int num){
    this ->num = num;
}

void Invoice::setQuant(int quant){
    if(quant < 0){
        this -> quant = 0;
    }
    else
        this -> quant = quant;

}
void Invoice::setPrice(double price){
    if(price < 0)
        this -> price = 0.0;
    else
        this -> price = price;
}
void Invoice::setDesc(string desc){
    this ->desc = desc;
}














