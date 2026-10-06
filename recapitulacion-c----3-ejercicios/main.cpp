#include <iostream>
#include <stdlib.h>
using namespace std;

void menu(){
    
    cout << "\n== Menu ==" << endl;
    cout << "1. Analizador rápido" << endl;
    cout << "2. Buscador con función" << endl;
    cout << "3. Función + puntero" << endl;
    cout << "4. Salir" << endl << endl;
}

double calcularSuma(double numeros[], int cantidad){
    
    double suma = 0;
    
    for (int i = 0; i < cantidad; i++){
        
        suma = suma + numeros[i];
        
    }
    
    return suma;
}

int calcularPares(double numeros[], int cantidad){
    
    int pares = 0;
    
    for (int i = 0; i < cantidad; i++){
        
        if ((int)numeros[i] % 2 == 0){
            
            pares ++;
            
        }
        
    }
    
    return pares;
}

int contarApariciones(int numeros[], int cantidad, int buscado){
    
    int apariciones = 0;
    
    for (int i = 0; i < cantidad; i++){
        
        if (numeros[i] == buscado){
            
            apariciones ++;
            
        }
        
    }
    
    return apariciones;
    
}


void modificar(int *numero){
    
    if (*numero == 0 ){
        
        *numero = 100;
      
    }
    else if (*numero % 2 == 0){
        
        *numero = *numero * 2;
      
    }
    
    else{
        
        *numero = abs(*numero);
        
    }
    
}


int main()
{
    
    int opcion;
    bool ejecutar = true;
    
    while(ejecutar){
        menu();
        
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 1:{
                
                /*🟢 1. Fácil — Analizador rápido
                Crea un programa que pida al usuario 5 números y los guarde en un array.
                
                Después debe mostrar:
                
                Los 5 números.
                La suma.
                El promedio.
                Cuántos son pares.
                Cuántos son impares.*/
                
                double numeros[5];
                
                for (int i = 0; i<5; i++){
                    
                    cout << "Escribe el numero "<< i+1 <<": ";
                    cin >> numeros[i];
                    cout << endl;
                    
                }
                cout << "Numeros:";
                for (int i = 0; i < 5; i++){
                    
                    if (i < 4){
                        
                        cout << " " << numeros[i] << ",";
                        
                    }
                    
                    else{
                        
                        cout << " " << numeros[i] << ".";
                        
                    }
                    
                }
                cout << "\nSuma: " << calcularSuma(numeros, 5);
                cout << "\nPromedio: " << calcularSuma(numeros, 5)/5;
                cout << "\nPares: " << calcularPares(numeros, 5);
                cout << "\nImpares: " << abs(calcularPares(numeros, 5) - 5) << endl;
                
                break;
            }
            
            case 2:{
                
                /*🟡 2. Medio — Buscador con función
                Crea un array de 8 números:
                int numeros[8] = {5, 12, 7, 20, 3, 12, 9, 12};
                Pide al usuario un número y crea una función:
                int contarApariciones(int numeros[], int cantidad, int buscado)
                La función debe devolver cuántas veces aparece.*/
                
                int numeros[8] = {5, 12, 7, 20, 3, 12, 9, 12};
                int buscado;
                
                cout << "Escribe un numero: ";
                cin >> buscado;
                
                
                if (contarApariciones(numeros, 8, buscado) > 1){
                    
                    cout << "\nEl numero " << buscado << " aparece " << contarApariciones(numeros, 8, buscado) << " veces.";
                    
                }
                
                else if (contarApariciones(numeros, 8, buscado) == 1){
                    
                    cout << "\nEl numero " << buscado << " aparece " << contarApariciones(numeros, 8, buscado) << " vez.";
                }
                
                else{
                    
                    cout << "\nEl numero " << buscado << " no fue encontrado.";
                    
                }
                
                cout << endl;
                
                break;
            }
            
            case 3:{
                
                /*🔴 3. Difícil — Puntero + función
                Ahora vamos al último punto que aprendimos.
                Pide al usuario un número:
                Escribe un numero: 25
                Crea:
                void modificar(int *numero)
                La función debe:
                Recibir la dirección del número.
                Si el número es positivo, multiplicarlo por 2.
                Si es negativo, convertirlo en positivo.
                Si es 0, cambiarlo a 100.
                Ejemplos:
                25 → 50
                -8 → 8
                0 → 100*/
                
                int numero;
                
                cout << "Escribe un numero: ";
                cin >> numero;
                
                cout << endl << numero << " → ";
                
                int *puntero = &numero;
                
                modificar(puntero);
                
                cout << numero;
                cout << endl;
                
                break;
                
            }
            
            case 4:{
                
                cout << "Saliendo...";
                ejecutar = false;
                break;
            }
            
            default:{
                
                cout << "El numero digitado no es una opcion valida." << endl;
                
            }
        }
    
    
    }

    return 0;
}