#include "Horario.h"
#include <iostream>

using namespace std;

Horario::Horario()
{}

    Horario::Horario(int hora,int minuto,int segundo){
        void setHorario(int hora,int minuto,int segundo);
    }

    int Horario::getHora(){
        return hora;
    }
    int Horario::getMinuto(){
        return minuto;
    }
    int Horario::getSegundo(){
        return segundo;
    }

    void Horario::setHora(int hora){
        if(hora > 24 || hora < 0){
            this ->hora = 00;
        }
        else
            this ->hora = hora;
    }
    void Horario::setMinuto(int minuto){
        if(minuto < 0){
            this ->minuto = 00;
        }
        else
            this ->minuto = minuto;
    }
    void Horario::setSegundo(int segundo){
        if(segundo < 0){
            this ->segundo = 00;
        }
        else
            this ->segundo = segundo;
    }


    void Horario::avancarHorario(){
        segundo++;
        if(segundo == 60){
            minuto++;
            segundo = 0;
        }
        if(minuto == 60){
            hora++;
            minuto = 0;
        }
        if(hora > 23){
            hora = 0;
        }
    }

    void Horario::setHorario(int hora,int minuto,int segundo){
        if(hora <=23 && hora >= 0){
            this ->hora = hora;
        }
        else{
            this ->hora = 00;
            this ->minuto = 00;
            this ->segundo = 00;
        }

        if(minuto <= 60 && minuto >= 0){
            this ->minuto = minuto;
        }
        else{
            this ->hora = 00;
            this ->minuto = 00;
            this ->segundo = 00;
        }

        if(segundo <= 60 && segundo >= 0){
            this ->segundo = segundo;
        }
        else{
            this ->hora = 00;
            this ->minuto = 00;
            this ->segundo = 00;
        }
    }
