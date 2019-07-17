#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario hourNow;

    hourNow.setHorario(6,5,4);


    cout << "Hour Now is : " << hourNow.getHora() << "/" << hourNow.getMinuto() << "/" <<hourNow.getSegundo() << endl;

    hourNow.setHora(23);
    hourNow.setMinuto(57);
    hourNow.setSegundo(59);

    cout << "Hour Now is : " << hourNow.getHora() << "/" << hourNow.getMinuto() << "/" <<hourNow.getSegundo() << endl;

    hourNow.avancarHorario();

    cout << "Hour Now is : " << hourNow.getHora() << "/" << hourNow.getMinuto() << "/" <<hourNow.getSegundo() << endl;

    return 0;
}
