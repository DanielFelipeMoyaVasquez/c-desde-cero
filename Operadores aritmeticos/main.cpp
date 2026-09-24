/*Pida dos números.
Los guarde en variables.
Muestre:
suma
resta
multiplicación
división
residuo*/

#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    
    cout << "Escribe el numero a: ";
    cin >> a;
    
    
    cout << "Escribe el numero b: ";
    cin >> b;
    
    
    cout << "Suma: " << a+b << endl;
    cout << "Resta: " << a-b << endl;
    cout << "Multiplicacion: " << a*b << endl;
    cout << "Division: " << a/b << endl;
    cout << "Residuo: " << (int)a % (int)b; // Esta parte tuve que buscar como convertirla en int, ya que no recibe decimales
    
    

    return 0;
}