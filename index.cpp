#include <iostream>
#include <math.h>

using namespace std;

/*
    Fecha de Inicio: 11 - 11 - 2021
    Fecha de Entrega: 16 - 11 - 2021
    
    Grupo #02

        * Christopher Tineo
        * Camilo Maria
        * Lya Sanchez
        * Sahira Tejada
        * Taiyab Gillani
        * José Fernandez


    * Instrucciones
        Son cubos narcisistas aquellos enteros de tres dígitos cuya sumas de sus dígitos elevadas al cubo, da como resultado al mismo número.

        123 = 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36
        
        153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

        Realizar un programa de C++ que encuentre los cubos narcisistas entre 100 y 999.
*/

bool esNarcisista(int numero);

int main()
{
    int index = 100;

    cout << "Los números narcisistas entre 100 y 999 son:\n"
         << endl;

    while (index < 1000)
    {
        if (esNarcisista(index))
        {
            // Si el número es narcisista
            cout << "* El numero " << index << " es narcisista" << endl;
        }

        // Si no es narcisista
        index++;
    }
}

bool esNarcisista(int numero)
{
    int primerDigito = 0, segundoDigito = 0, tercerDigito = 0, sumaDeCubos = 0;

    primerDigito = (numero / 100);      // Obtener el primer dígito
    segundoDigito = (numero / 10) % 10; // Obtener el segundo dígito
    tercerDigito = numero % 10;         // Obtener el tercer dígito

    sumaDeCubos = pow(primerDigito, 3) + pow(segundoDigito, 3) + pow(tercerDigito, 3); // Suma del cubo de los dígitos.

    if (sumaDeCubos == numero)
    {
        // Si la suma de los cubos de los dígitos es igual al número que conforman esos dígitos.
        return true;
    }
    // Si la suma de cubos no es igual a la variable número.
    return false;
}