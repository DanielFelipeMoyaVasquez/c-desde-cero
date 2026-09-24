/*¿Como te llamas?
¿Cuantos años tienes?
¿Que carrera estudias?*/

#include <iostream>
using namespace std;

int main()
{
    string nombre;
    int edad;
    string carrera;
    
    
    cout << "Cual es ru nombre?: ";
    cin >> nombre; 
    
    cout << "Cual es tu edad?: ";
    cin >> edad;
    
    cout << "Que carrera estas estudiando?: ";
    cin >> carrera;
    
    cout << "Hola " << nombre << ", tu edad es " << edad << ", y estudias " << carrera;

    return 0;
}