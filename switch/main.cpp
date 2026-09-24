/*🟢 Fácil
Haz un menú:
1. Hola
2. Adios
3. Salir*/


#include <iostream>
using namespace std;


int main()
{
    int opcion;
    string nombre ;
    
    cout << "Cual es tu nombre?: ";
    cin >> nombre;
    
    cout << "Hola "<< nombre << ", elige un numero del menu: " << endl;
    cout << "1. Menu" << endl;
    cout << "2. Calculadora"<< endl;
    cout << "3. Sistema Universitario" << endl;
    cout << "Respuesta: ";
    cin >> opcion;
    cout << endl;
    
    switch (opcion) {
        
        case 1:
            int numero;
            
            cout << nombre << ", elige un numero del menu: " << endl;
            cout << "1. Saludar" << endl;
            cout << "2. Adios"<< endl;
            cout << "3. Salir" << endl;
            cout << "Respuesta: ";
            cin >> numero;
            cout << endl;
            
            switch (numero){
                
                case 1:
                    cout << "Hola " << nombre <<"!!";
                    break;
                    
                case 2:
                    cout << "Adios " << nombre <<"!!";
                    break;
                    
                case 3:
                    cout << "saliendo " << nombre <<"...";
                    
                    break;
                    
                default:
                    cout << "Opcion no valida";
            }
            
            break;
            
        /*🟡 Medio
        Haz una calculadora.
        Pide:
        Número 1
        Número 2
        Operación
        La operación puede ser:
        1. Suma
        2. Resta
        3. Multiplicación
        4. División*/
        
        case 2: {
            int numero1;
            int numero2;
            
            int numero;
            
            cout << "Escoge un primer numero " << nombre << ": ";
            cin >> numero1;
            
            cout << "Escoge un segundo numero " << nombre << ": ";
            cin >> numero2;
            
            cout << nombre << ", elige una operacion: " << endl;
            cout << "1. Suma" << endl;
            cout << "2. Resta"<< endl;
            cout << "3. Multiplicacion" << endl;
            cout << "4. División" << endl;
            cout << "5. Salir" << endl;
            cout << "Respuesta: ";
            cin >> numero;
            cout << endl;
            
            switch (numero){
                
                case 1:
                    cout << "Suma: " << numero1 << " + " << numero2 << " = " << numero1 + numero2;
                    break;
                    
                case 2:
                    cout << "Resta: " << numero1 << " - " << numero2 << " = " << numero1 - numero2;
                    break;
                    
                    
                case 3:
                    cout << "Multiplicacion: " << numero1 << " * " << numero2 << " = " << numero1 * numero2;
                    break;
                    
                case 4:{
                
                    int residuo = numero1 % numero2;
                    
                    if (residuo != 0){
                        
                        cout << "Division: " << numero1 << " / " << numero2 << " = " << numero1 / numero2 << " con un residuo de " << numero1 % numero2;
                        
                    }
                    else{
                        
                        cout << "Division: " << numero1 << " / " << numero2 << " = " << numero1 / numero2 << " sin residuo.";
                        
                    }                
    
                    break;
                }
                    
                case 5:
                
                    cout << "Saliendo...";
                    break;
                    
                default:
                    cout << "Opcion no valida";
            }
            break;
        }
        /*🔴 Difícil
        Haz un menú de sistema universitario:
        1. Ver nombre
        2. Ver edad
        3. Ver carrera
        4. Ver semestre
        5. Salir*/
        
        case 3:{
            
            int opcion1;
            
            int edad;
            string carrera;
            int semestre;
            
            cout << "-- Sistema universitario --";
            cout << endl;
            
            cout << "Cual es tu edad?: ";
            cin >> edad;
            
            cout << "Cual es tu carrera?: ";
            cin >> carrera;
            
            cout << "Cual es tu semestre?: ";
            cin >> semestre;
            cout << endl;
            
            cout << nombre << ", elige una opcion: " << endl;
            cout << "1. Ver nombre" << endl;
            cout << "2. Ver edad"<< endl;
            cout << "3. Ver carrera" << endl;
            cout << "4. Ver semestre" << endl;
            cout << "5. Toda la informacion" << endl;
            cout << "6. Salir" << endl;
            cout << "Respuesta: ";
            cin >> opcion1;
            cout << endl;
            
            switch(opcion1){
                
                case 1:
                    cout << "Tu nombre es: " << nombre;
                    break;
                
                case 2:
                    cout << nombre << ", tu edad es: " << edad;
                    break;
                    
                case 3:
                    cout << nombre << ", carrera es: " << carrera;
                    break;
                    
                case 4:
                    cout << nombre << ", tu semestre es: " << semestre;
                    break;
                    
                case 5:
                    cout << "Tu nombre es: " << nombre << ", tu edad es: " << edad << ", tu carrera es: " << carrera << ", y eres de " << semestre << " semestre."; 
                    break;
                    
                default:
                    cout << "Opcion no valida.";
            }
            break;
        }
        
        default:
            cout << "Opcion no valida.";
    }

    
    
    return 0;
}