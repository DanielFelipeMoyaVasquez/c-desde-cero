#include <iostream>
using namespace std;

bool esPositivo(int numero){
    
    if (numero > 0){
        
        return true;
        
    }
    
    return false;
    
}

bool esPar(int numero){
    
    if (numero % 2 == 0){
        
        return true;
        
    }
    
    return false;
    
}

string clasificarEdad(int edad){
    
    if (edad >= 60){
        
        return "Adulto mayor";
        
    }
    
    else if(edad >= 18 and edad <= 59){
        
        return "Adulto";
        
    }
    
    else if(edad >= 13 and edad <= 17){
        
        return "Adolescente";
        
    }
    
    else if(edad >= 0 and edad <= 12){
        
        return "Niño";
        
    }
    return "El numero es menor que 0";
    
}

int main()
{
    int opcion;
    
    bool ejecutar = true;

    cout << endl << "Hola, elige un numero del menu: " << endl;

    
    
    while(ejecutar){

        cout << endl << "1. Facil" << endl;
        cout << "2. Medio"<< endl;
        cout << "3. Dificil" << endl;
        cout << "4. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
                /*🟢 Ejercicio 1 — Fácil
                Crea:
                bool esPositivo(int numero)
                Debe devolver:
                true si el número es positivo.
                false si es cero o negativo.
                Desde main() pide un número y muestra:
                Ingresa un número: 8
                El número es positivo.*/
                
                int numero;
                
                cout << "Escribe un numero: ";
                cin >> numero;
                
                if (esPositivo(numero)){
                    
                    cout << endl << "El numero es positivo.";
                    
                }
                else {
                    
                    cout << endl << "El numero es cero o negativo.";
                    
                }
                
                break;
               
            }
            
            case 2: {
               
               /*🟡 Ejercicio 2 — Medio
                Crea:
                bool esPar(int numero)
                Debe devolver:
                true → si es par
                false → si es impar
                Pista:
                numero % 2
                Desde main() pide un número y utiliza la función para mostrar:
                Ingresa un número: 17
                El número es impar.*/
                
                int numero;
                
                cout << "Escribe un numero: ";
                cin >> numero;
                
                if (esPar(numero)){
                    
                    cout << endl << "El numero " << numero << " es par." << endl;
                    
                }
                else {
                    
                    cout << endl << "El numero " << numero << " es impar." << endl;
                    
                }
                break;
            }
            
            case 3: {
                
                /*🔴 Ejercicio 3 — Difícil
                Ahora vamos a mezclar varias cosas. 😈
                Crea:
                string clasificarEdad(int edad)
                La función debe devolver:
                0 - 12   → "Niño"
                13 - 17  → "Adolescente"
                18 - 59  → "Adulto"
                60+      → "Adulto mayor"
                Por ejemplo:
                Ingresa tu edad: 18
                Clasificación: Adulto*/
                
                int edad;
                
                cout << "Cual es tu edad?: ";
                cin >> edad;
                
                cout << "Clasificación: " << clasificarEdad(edad);
                break;
            }
            
            case 4:{
                
                cout << "saliendo...";
                ejecutar = false;
                
                break;
                
            }
            
            default:
                cout << "Opcion no valida.";
            
        }
    }

    return 0;
}