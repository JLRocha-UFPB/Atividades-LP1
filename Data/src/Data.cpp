#include "Data.h"

Data::Data()
{
    //ctor
}

Data::Data(int dia, int mes, int ano){
    if(dia>0 && dia <= 31){
        this -> dia = dia;
    } else this -> dia =0;

    if(mes > 0 && mes <= 12){
        this -> mes = mes;
    }else this -> mes = 1;

    if(ano > 0){
        this -> ano = ano;
    } else this -> ano = 1;
}
