// Haz un programa que pida una nota de 0 a 5 y diga:

// 4.5 → Excelente
// 3.0 → Aprobado
// 2.0 → Reprobado


#include <iostream>
using namespace std;

int main()
{
    double nota;
    
    cout << "Cual es tu nota?: ";
    cin >> nota;
    
    if (nota >= 4.5) {
        
        cout << "Tu nota es de " << nota << ", excelente!.";
    }
    
    else if (nota >= 3.0) {
        cout << "Tu nota es de " << nota << ", aprobaste.";
    }
    
    else {
        cout << "Tu nota fue de " << nota << ", reprobaste.";
    }

    return 0;
}