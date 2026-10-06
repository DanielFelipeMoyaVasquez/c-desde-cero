#include <iostream>
using namespace std;

void Menu(){
    
    cout << "\n== Menu ==" << endl;
    cout << "1. Mi primer puntero" << endl;
    cout << "2. Modificar mediante puntero" << endl;
    cout << "3. Función + puntero" << endl;
    cout << "4. Salir" << endl << endl;
}

void aumentar(int *numero){
    
    *numero = *numero + 10;
    
}

int main() {
    
    int opcion;
    bool ejecutar = true;
    
    while(ejecutar){
        
        Menu();
        
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 1: {
                
                /*🟢 1. Fácil — Mi primer puntero
                Crea:
                int numero = 25;
                Después:
                
                Crea un puntero que apunte a numero.
                Muestra el valor de numero.
                Muestra la dirección de numero.
                Muestra la dirección almacenada en el puntero.
                Muestra el valor de numero usando el puntero.
                
                Deberías terminar mostrando algo parecido a:
                
                Numero: 25
                Direccion de numero: 0x7...
                Direccion guardada en puntero: 0x7...
                Valor usando puntero: 25*/
                
                
                int numero = 25;
                
                int *puntero = &numero;
                
                cout << "Numero: " << numero << endl;
                cout << "Direccion de numero: " << &numero << endl;
                cout << "Direccion guardada en puntero: " << puntero << endl;
                cout << "Valor usando puntero: " << *puntero << endl;
                
                break;
                
            }
            
            case 2:{
                
                /*🟡 2. Medio — Modificar mediante puntero
                Crea:
                int numero = 10;
                Crea un puntero que apunte a numero.
                Después:
                
                Muestra el número original.
                Usa el puntero para cambiar numero a 100.
                Muestra el número nuevamente.
                Muestra el valor utilizando *puntero.
                Resultado esperado:
                
                Antes: 10
                Despues: 100
                Valor usando puntero: 100*/
                
                
                int numero = 10;
                
                int *puntero = &numero;
                cout << "Antes: " << numero << endl;
                
                *puntero = 100;
                cout << "Despues: " << numero << endl;
                
                cout << "Valor usando puntero: " << *puntero << endl;
                
                break;
            }
            
            case 3: {
                
                /*🔴 3. Difícil — Función + puntero
                Ahora vamos a mezclar lo que acabas de aprender con funciones.
                Crea:
                void aumentar(int *numero)
                La función debe aumentar el número en 10 utilizando el puntero.
                En main():
                
                Pide un número.
                Muéstralo antes.
                Envía su dirección a la función.
                La función debe modificarlo mediante el puntero.
                Muéstralo después.
                Ejemplo:
                
                Escribe un numero: 25
                Antes: 25
                Despues: 35*/
                
                int numero;
                cout << "Escribe un numero: ";
                cin >> numero;
                
                cout << "Antes: " << numero << endl;
                
                aumentar(&numero);
                
                
                cout << "Despues: " << numero << endl;
                
                break;
            }
            
            case 4:{
                
                cout << "Saliendo...\n";
                ejecutar = false;
                break;
            }
            
            default:
                cout << "Opcion no valida.\n";
        }
        
    }
    

    return 0;
}