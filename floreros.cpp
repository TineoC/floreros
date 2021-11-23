#include <iostream> // Para manejar entradas y salidas del programa

/*
    Fecha de Inicio: 13 - 11 - 2021
    Fecha de Entrega: 23 - 11 - 2021
    
    Grupo #02

        * Christopher Tineo
        * Camilo Maria
        * Lya Sanchez
        * Sahira Tejada
        * Taiyab Gillani
        * José Fernandez

    Hace algún tiempo Salvador compró 100 floreros para venderlos en un mercadillo. La semana pasada, después de haber vendido algunos de ellos en los días anteriores, tenía los floreros ordenados en 6 filas con el mismo número de unidades en cada una de ellas.

    En esta semana, vendió 8 floreros y en la actualidad tiene los que le quedan, ordenados en 11 filas, con el mismo número de floreros en cada una.

    1. Cuántos floreros tiene Salvador para vender todavía
    EXTRA: 2. Cuántos vendió la semana pasada

    A: 100 - X = 6Y
    B: 100 - X - 8 = 11Z
*/

using namespace std;

int main()
{
    int index = 0, restante = 100 - index;

    while (index < 100)
    {
        bool multiploSeis = restante % 6 == 0;        // Si se pueden colocar en múltiplos de 6 uniformemente los floreros
        bool multiploOnce = (restante - 8) % 11 == 0; // Si se pueden colocar en múltiplos de 11 uniformemente los floreros, después de la venta de esta semana

        if (multiploSeis && multiploOnce)
        {
            int ventaSemanaPasada = index;

            cout << "1. Salvador vendio: " << ventaSemanaPasada << " floreros la semana pasada." << endl;

            cout << "2. A Salvador le quedaban: " << restante << " floreros." << endl;

            restante -= 8; // Como Salvador vende 8 esta semana se le resta 8 a lo que quedaba de la semana pasada.

            cout << "3. A Salvador ahora le quedan: " << restante << " floreros." << endl;

            cout << '\n';
        }

        index++;
        restante = 100 - index;
    }
}