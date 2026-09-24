#include <iostream>
using namespace std;


int main()
{
    int opcion;
    string nombre;
    
    bool ejecutar = true;
    
    
    cout << "Cual es tu nombre?: ";
    cin >> nombre;
    cout << endl << "Hola "<< nombre << ", elige un numero del menu: " << endl;

    
    
    while(ejecutar){

        cout << endl << "1. Recorrer y suma" << endl;
        cout << "2. Numero mayor"<< endl;
        cout << "3. Dificil" << endl;
        cout << "4. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
               /*🟢 Fácil
                Dado:
                int numeros[5] = {4, 8, 2, 10, 6};
                recorre el array y calcula la suma total.*/
                
                int numeros[5] = {4, 8, 2, 10, 6};
                int suma = 0;
                
                for (int i = 0; i < 5; i++){
                    
                    suma = suma + numeros[i];    
                    
                }
                
                cout << "La suma total es de: " << suma << endl;
                
                break;
            }
            
            case 2: {
                
                /*🟡 Medio
                Dado:
                int numeros[8] = {5, 12, 3, 20, 7, 9, 15, 2};
                recorre el array y encuentra cuál es el número mayor.*/
                
                int numeros[8] = {5, 12, 3, 20, 7, 9, 15, 2};
                int mayor = numeros[0]; // este si me costo JSJSJ tube que pedir ayuda perdon lo intente hacer con if de otra manera
                
                for (int i = 1; i < 8; i++){
                    
                    if (numeros[i] > mayor ){
                        
                        mayor = numeros[i];
                        
                    }
                    
                }
                
                cout << "El numero mayor es: " << mayor << endl;
                
                break;
            }
            
            case 3: {
                
                /*🔴 Difícil
                Dado un array de 10 números:
                8, -2, 15, 0, -7, 4, 12, -1, 20, 3
                recórrelo y determina:
                Mayor:
                Menor:
                Cantidad de positivos:
                Cantidad de negativos:
                Cantidad de ceros:*/
                
                int numeros[10] = {8, -2, 15, 0, -7, 4, 12, -1, 20, 3};
                int mayor = numeros[0];
                int menor = numeros[0];
                int positivos = 0;
                int negativos = 0;
                int ceros = 0;
                
                for (int i = 1; i < 10; i++){
                    
                    if (numeros[i] > mayor){
                        
                        mayor = numeros[i];
                        
                    }
                    else if(numeros[i] < menor){
                        
                        menor = numeros[i];
                        
                    }
                    
                }
                
                for (int i = 0; i < 10; i ++){
                    
                    if (numeros[i] > 0){
                        
                        positivos ++;
                        
                    }
                    
                    else if (numeros[i] < 0){
                        
                        negativos ++;
                        
                    }
                    
                    else if (numeros[i] == 0) {
                        
                        ceros ++;
                        
                    }
                    
                }
                
                cout << "Mayor: " << mayor << endl;
                cout << "Menor: " << menor << endl;
                cout << "Cantidad de positivos: " << positivos << endl;
                cout << "Cantidad de negativos: " << negativos << endl;
                cout << "Cantidad de ceros: " << ceros << endl;
                
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