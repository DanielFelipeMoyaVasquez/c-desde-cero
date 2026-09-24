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

        cout << endl << "1. Crear y mostrar" << endl;
        cout << "2. Promedio"<< endl;
        cout << "3. Sistema de números" << endl;
        cout << "4. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
                /*🟢 Fácil — Crear y mostrar
                Crea un array de 5 números enteros:
                10, 20, 30, 40, 50
                Y utiliza un for para mostrar todos los números.*/
                
                int numeros [5] = {10,20,30,40,50};
                
                for (int i = 0; i < 5; i++){
                    
                    cout << numeros[i] << endl;
                    
                }
                break;
            }
            
            case 2: {
                
                /*🟡 Medio — Promedio
                Crea un array con 5 notas.*/
                
                double notas [5];
                double suma = 0;
                double promedio;
                
                for (int i = 0; i < 5; i++){
                    
                    cout << nombre << ", escribe la nota numero " << i+1 << ": ";
                    cin >> notas[i];
                    
                }
                
                for (int i = 0; i < 5; i++){
                    
                    suma = suma + notas[i];
                    
                    
                }
                
                promedio = suma / 5;
                
                cout << "El promedio de las notas " << notas[0] << " , " << notas[1] << " , " << notas[2] << " , " << notas[3] << " , " << notas[4] << " , " << "es: " << promedio << endl;
                
                break;
                
            }
            
            case 3: {
                
                /*🔴 Difícil — Sistema de números
                Crea un array de 10 números enteros.
                El programa debe recorrerlo y mostrar:
                Número: 5 → Positivo
                Número: -3 → Negativo
                Número: 0 → Cero...*/
               
               int numeros [10];
               
               for (int i = 0; i < 10; i++){
                   
                   cout << nombre << ", ingrese el numero " << i+1 << ": ";
                   cin >> numeros[i];
                   
               }
               
               for (int i = 0; i < 10; i++){
                   
                   if (numeros[i] > 0){
                       
                       cout << endl << "Numero: " << numeros[i] << " → Positivo";
                       
                   }
                   
                   else if (numeros[i] < 0){
                       
                       cout << endl <<"Numero: " << numeros[i] << " → Negativo";
                       
                   }
                   
                   else {
                       
                       cout << endl << "Numero: " << numeros[i] << " → Cero";
                       
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
                cout << "Opcion no valida.";
            
        }
    }

    return 0;
}