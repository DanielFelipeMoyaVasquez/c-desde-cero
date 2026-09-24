#include <iostream>
using namespace std;


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
                Tenemos:
                int numeros[5] = {10, 20, 30, 40, 50};
                Pide al usuario un número y dile:
                ✅ Si está en el array.
                ❌ Si no está.
                Ejemplo:
                ¿Qué número quieres buscar?: 30
                Encontrado*/
                
                int numeros[5] = {10, 20, 30, 40, 50};
                
                int pedir_numero;
                
                while (true){
                    
                    cout << "Ingresa un numero para buscar en el array (escribe 777 para salir): ";
                    cin >> pedir_numero;
                    
                   
                    
                    if (pedir_numero == 777){
                        
                        cout << "saliendo..." << endl;
                        break;
                        
                    }
                    
                    bool encontrado = false;
                    
                    for (int i = 0; i < 5; i ++){
                        
                        if (numeros[i] == pedir_numero){
                            
                            encontrado = true;
                            cout << endl << "El numero " << pedir_numero << " fue encontrado en la pocision " << i << "." << endl;
                            break;
                        }
                    }
                        
                    if (encontrado == false){
                        
                        cout << endl << "El numero " << pedir_numero << " no fue encontrado." << endl;
                        
                    }
                    
                }
                break;
            }
            
            case 2: {
                
                /*🟡 Ejercicio 2 — Medio
                Tenemos:
                int numeros[8] = {5, 2, 5, 8, 5, 1, 9, 5};
                Pide un número y cuenta cuántas veces aparece.
                Ejemplo:
                ¿Qué número buscas?: 5
                El número aparece 4 veces*/
                
                int numeros[8] = {5, 2, 5, 8, 5, 1, 9, 5};
                int pedir_numero;
                int contador = 0;
                bool encontrado = false;
                                
                cout << "¿Qué número buscas?: ";
                cin >> pedir_numero;
                
                for (int i = 0; i < 8; i++){
                    
                    if (numeros[i] == pedir_numero){
                        
                        contador ++;
                        
                        encontrado = true;
                    }
                    
                }
                
                if (encontrado == true) {
                    
                    if (contador == 1){
                        
                        cout << endl << "El numero " << pedir_numero << " se encontro " << contador << " ves.";
                        
                    }
                    
                    else {
                        
                        cout << endl << "El numero " << pedir_numero << " se encontro " << contador << " veces.";
                        
                    }
                    
                }
                
                else {
                    
                    cout << endl << "El numero " << pedir_numero << " no se encuentra en la array.";
                    
                }
                
                break;
                
            }
            
            case 3: {
                
               /*🔴 Ejercicio 3 — Difícil

                El usuario debe introducir 10 números en un array.
                Después debe introducir un número que quiere buscar.
                Tu programa debe decir:
                Número buscado: 7
                Encontrado
                Primera posición: 2
                Cantidad de veces: 3
                Si no aparece:
                El número no se encuentra en el array.*/
                
                int numeros[10];
                int buscar_numero;
                int contador = 0;
                bool encontrado = false;
                
                for (int i = 0; i < 10; i++){
                    
                    cout << "Ingrese el numero " << i + 1 << endl;
                    cin >> numeros[i];
                }
                
                cout << "Que numero quieres buscar: ";
                cin >> buscar_numero;
                
                cout << "Numero buscado: " << buscar_numero << endl;
                
                for (int i = 0; i < 10; i++){
                    
                    if(numeros[i] == buscar_numero){
                        
                        encontrado = true;
                        cout << "Encontrado" << endl;
                        cout << "Primera posicion: " << i << endl;
                        break;
                        
                    }
                }
                
                for (int i = 0; i < 10; i++){
                    
                    if(numeros[i] == buscar_numero){
                        
                        contador ++;
                        
                    }
                }
                
                cout << "Cantidad de veces: " << contador << endl;
                
                if(encontrado == false){
                    
                    cout << endl << "El numero " << buscar_numero << " no se encuentra en la array." << endl;
                    
                }
                
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
