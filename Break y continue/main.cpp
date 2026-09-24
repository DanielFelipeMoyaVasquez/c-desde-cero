#include <iostream>
using namespace std;

int main()
{
    int opcion;
    string nombre ;
    
    bool ejecutar = true;
    
    
    cout << "Cual es tu nombre?: ";
    cin >> nombre;
    cout << endl << "Hola "<< nombre << ", elige un numero del menu: " << endl;

    
    
    while(ejecutar){

        cout << endl << "1. Break" << endl;
        cout << "2. Continue"<< endl;
        cout << "3. Sistema de números" << endl;
        cout << "4. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
                /*🟢 Fácil — break
                Haz un for del 1 al 10, pero cuando 
                llegue a 6, debe detenerse.*/
                
                for (int i =  1; i <= 10; i++){
                    
                    if (i == 6){
                        
                        break;
                        
                    }
                    
                    cout << i << endl;
    
                    
                }
                
                break;
            }
            
            case 2: {
                
                /*🟡 Medio — continue
                Haz un for del 1 al 10, 
                pero no muestres el número 5.*/
                
                for(int i = 1; i <= 10; i++){
                    
                    if (i == 5){
                        
                        continue;
                        
                    }
                    
                    cout << i << endl;
                }
                
                break;
            }
            
            case 3: {
                
                /*🔴 Difícil — Sistema de números

                Haz un programa que pida números continuamente.
                
                Si el usuario escribe 0 → termina el programa.
                Si escribe un número negativo → no lo muestres y continúa pidiendo números.
                Si escribe un número positivo → muéstralo.*/
                
                int numero;
                
                while (true){
                    
                    cout << "Escribe un numero: ";
                    cin >> numero;
                    
                    if (numero == 0){
                        
                        cout << endl << "Saliendo del programa...";
                        break;
                        
                    }
                    
                    else if(numero < 0) {
                        
                        continue;
                        
                    }
                    
                    else {
                        
                        cout << numero << endl;
                        
                    }
                    
                }
                
                break;
            }
            
            case 4:{
                
                cout << "saliendo...";
                ejecutar = false;
                
                break;
                
            }
            
            default:
                cout << "opcion no valida.";
            
        }
    }
    return 0;
}