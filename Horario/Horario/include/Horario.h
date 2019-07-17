#ifndef HORARIO_H
#define HORARIO_H
#include <iostream>

using namespace std;

class Horario
{
    public:
        Horario();  //construtor sem parametro
        Horario(int hora,int minuto,int segundo);   //construtor com tres parametros;

        void setHorario(int hora,int minuto,int segundo);
        void avancarHorario();

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);




    private:
        int hora;
        int minuto;
        int segundo;
};

#endif // HORARIO_H
