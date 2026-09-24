#include <iostream>
using namespace std;


void mostrarNombre(){
    
    cout << "Hola soy pipe" << endl;
    cout << "Esctoy aprendiendo c++" << endl;
    
} 

void mostrarEdad(int edad){
    
    cout << "Tienes " << edad << endl;
    
}

int sumar(int a, int b) {
    
    return a + b;
    
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
                Crea una función:
                void mostrarNombre()
                que muestre:
                Hola, soy Pipe
                Estoy aprendiendo C++
                Luego llámala desde main().*/
                
                mostrarNombre();
                
                break;
               
            }
            
            case 2: {
                
                /*Ejercicio 2 — Medio 
                Crea una función:
                void mostrarEdad(int edad)
                La función debe recibir una edad y mostrar:
                Tienes 18 años.
                Desde main() pide la edad al usuario y pásala a la función.
                Por ejemplo:
                Ingresa tu edad: 18
                Tienes 18 años.*/
                
                int edad; 
                
                cout << "Cuantos anos tienes ?: ";
                cin >> edad;
                
                mostrarEdad(edad);
                
                break;
                
            }
            
            case 3: {
                
                
                
                /*🔴 Ejercicio 3 — Difícil
                Crea una función:
                int sumar(int a, int b)
                Debe recibir dos números y devolver su suma.
                Desde main():
                Pide dos números.
                Llama a sumar().
                Guarda el resultado.
                Muéstralo.
                Ejemplo:
                Primer número: 15
                Segundo número: 27
                Resultado: 42*/
                
                
                int a, b;
                
                cout << "Escribe el numero a: ";
                cin >> a;
                
                cout << "Escribe el numero b: ";
                cin >> b;
                
                int total = sumar(a, b);
                
                cout << "Primer número: " << a << endl;
                cout << "Segundo número: " << b << endl;
                cout << "Resultado: " << total << endl;
                
                
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