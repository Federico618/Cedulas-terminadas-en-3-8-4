#include <iostream>// Biblioteca

using namespace std;// Palabras

int main()
{

    int horas,tarifa,extras,salario,tarifa_extra ;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas ;
    tarifa=5000 ;

    if (horas<40)
    {
           salario=horas*tarifa;
    }

    else

    {
           tarifa_extra=tarifa+0.50*tarifa;

       extras=horas-40;

       salario=extras*tarifa_extra+40*tarifa;

    }
    cout << "Su salario es:" << salario ;
    return 0;
}
