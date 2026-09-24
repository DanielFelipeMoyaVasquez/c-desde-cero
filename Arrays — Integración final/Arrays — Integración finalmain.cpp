#include <iostream>
using namespace std;

int calcularSuma (int numeros[], int cantidad){
    
    int total = 0;
    
    for (int i = 0; i < cantidad; i++){
        
        total = total + numeros[i];
        
    }
    
    return total;
    
}

double calcularPromedio(int numeros[], int cantidad){
    
    if (cantidad == 0){
        
        return 0;
    }
    
    double resultado = (double)calcularSuma(numeros, cantidad) / (double)cantidad;
    
    return resultado;
    
}

int obtenerMayor(int numeros[], int cantidad){
    
    int mayor = numeros[0];
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] > mayor){
            
            mayor = numeros[i];
            
        }
        
    }
    
    return mayor;
}

int obtenerMenor(int numeros[], int cantidad){
    
    int menor = numeros[0];
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] < menor){
            
            menor = numeros[i];
            
        }
        
    }
    
    return menor;
}

int contarPositivos(int numeros[], int cantidad){
    
    int positivos = 0;
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] > 0){
            
            positivos ++;
            
        }
        
    }
    
    return positivos;
}

int contarNegativos(int numeros[], int cantidad){
    
    int negativos = 0;
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] < 0){
            
            negativos ++;
            
        }
        
    }
    
    return negativos;
}

int contarCeros(int numeros[], int cantidad){
    
    int cero = 0;
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] == 0){
            
            cero ++;
            
        }
        
    }
    
    return cero;
}


int contarApariciones(int numeros[], int cantidad, int numero){
    
    int aparicion = 0;
    
    for(int i = 0; i < cantidad; i++){
        
        if(numeros[i] == numero){
            
            aparicion ++;
            
        }
        
    }
    
    return aparicion;
    
}


int main()
{
    
    bool ejecutar = true;
    
    int opcion;
    
    while (ejecutar){
    
        cout << "== MENU ==\n\n";
        
        cout << "1. Analizador de números" << endl;
        cout << "2. Buscar y modificar" << endl;
        cout << "3. Mini sistema de estadísticas" << endl;
        cout << "4. Salir" << endl;
        
        cout << endl << "Respuesta: ";
        
        cin >> opcion;
        
        cout << endl;
        
        switch(opcion){
            
            case 1:{
                
                /*🟢 1. Fácil — Analizador de números
                Crea un array de 6 números:
                int numeros[6] = {4, 8, 3, 10, 7, 2};
                Haz un programa que:
                Muestre todos los números.
                Calcule la suma.
                Calcule el promedio.
                Muestre cuántos números son pares.*/
                
                int numeros[6] = {4, 8, 3, 10, 7, 2};
                int suma = calcularSuma(numeros, 6);
                double promedio = calcularPromedio(numeros, 6);
                int par = 0;
                
                for (int i = 0; i < 6; i ++){
                    
                    if(numeros[i] % 2 == 0){
                        
                        par ++;
                        
                    }
                    
                }
                
                cout << "Suma: " << suma << endl;
                cout << "Promedio: " << promedio << endl;
                cout << "Cantidad de numeros pares: " << par << endl << endl;
                
                
                break;
            }
            
            case 2:{
                
                /*🟡 2. Medio — Buscar y modificar
                Crea:
                int numeros[8] = {5, 12, 7, 20, 3, 12, 9, 12};
                Pide al usuario un número.
                El programa debe:
                Buscarlo.
                Decir cuántas veces aparece.
                Mostrar la posición de la primera aparición.
                Si no existe, mostrar "No encontrado".
                Después, pide otro número y reemplaza todas sus apariciones por 0.*/
                
                
                int numeros[8] = {5, 12, 7, 20, 3, 12, 9, 12};
                int numeroBuscar;
                int pedirNumero;
                int cuantasVecesAparece = 0;
                
                cout << "Array: " << endl;
                for (int i = 0; i < 8; i++){
                    
                    cout << numeros[i] << " ";
                    
                }
                
                cout << "\n\nNumero a buscar: ";
                cin >> numeroBuscar;
                cout << endl;
                
                for (int i = 0; i < 8; i++){
                    
                    if(numeros[i] == numeroBuscar){
                        
                        cuantasVecesAparece ++;
                        
                    }
                }
                
                if (cuantasVecesAparece == 0){
                    
                    cout<< "No encontrado" << endl;
                }
                else if (cuantasVecesAparece >1){
                   
                    cout<< "El numero " << numeroBuscar << " aparece " << cuantasVecesAparece << " veces." << endl;
                    
                }
                else{
                    
                    cout<< "El numero " << numeroBuscar << " aparece " << cuantasVecesAparece << " vez." << endl;
                    
                }
                
                for (int i = 0; i < 8; i++){
                    
                    if(numeros[i] == numeroBuscar){
                        
                        cout << endl << "Primera posicion: " << i << endl;
                        break;
                        
                    }
                }
                
                cout << endl << "Escribe un numero para remplazar por 0 en la array: ";
                bool confirmar = false;
                cin >> pedirNumero;
                cout << endl << endl;
                
                for (int i = 0; i < 8; i++){
                    
                    if (numeros[i] == pedirNumero){
                        
                        numeros[i] = 0;
                        confirmar = true;
                    }
                    
                }
                
                if (confirmar){
                    
                    cout << "Array: " << endl;
                    for (int i = 0; i < 8; i++){
                        
                        cout << numeros[i] << " ";
                        
                    }
                    
                    cout << endl << endl;
                }
                else{
                    
                    cout << "El numero no se encuentra en la array.";
                    cout << endl << endl;
                    
                }
                break;
            }
            
            case 3:{
                
                /*🔴 3. Difícil — Mini sistema de estadísticas
                El usuario debe introducir 10 números en un array.
                Después el programa debe mostrar:
                El array original.
                El número mayor.
                El número menor.
                El promedio.
                Cantidad de positivos.
                Cantidad de negativos.
                Cantidad de ceros.
                Pedir un número para buscar y decir cuántas veces aparece.
                💡 Condición: intenta organizar el programa usando funciones, por ejemplo: 
                double calcularPromedio(...)
                int obtenerMayor(...)
                int obtenerMenor(...)
                int contarPositivos(...)
                int contarNegativos(...)
                int contarCeros(...)
                int contarApariciones(...)*/
                
                int numeros[10];
                int cantidad = 10;
                int buscar;
                
                for (int i = 0; i < 10; i++){
                    
                    cout << "Escribe el numero " << i + 1 << ": ";
                    cin >> numeros[i];
                    
                }
                
                cout << "\nArray original: \n";
                
                for (int i = 0; i < 10; i++){
                    
                    cout << numeros[i] << " ";
                    
                }
                
                cout << "\n\nPromedio: " << calcularPromedio(numeros, cantidad);
                cout << "\n\nNumero mayor: " << obtenerMayor(numeros, cantidad);
                cout << "\n\nNumero menor: " << obtenerMenor(numeros, cantidad);
                cout << "\n\nCantidad de positivos: " << contarPositivos(numeros, cantidad);
                cout << "\n\nCantidad de negativos: " << contarNegativos(numeros, cantidad);
                cout << "\n\nCantidad de ceros: " << contarCeros(numeros, cantidad);
                
                cout << "\n\nQue numero quieres buscar?: ";
                cin >> buscar;
                
                if(contarApariciones(numeros, cantidad, buscar) == 0){
                    
                    cout << "\nEl numero no se encuentra en la array.\n";
                    
                }
                else{
                    
                    cout << "\nCantidad de apariciones del numero " << buscar << ": " << contarApariciones(numeros, cantidad, buscar) << endl;
                }
                break;
            }
            
            case 4:{
                
                cout << "Saliendo...";
                ejecutar = false;
                break;
                
            }
            
            default:
            
                cout << "Opcion no valida.";
            
        }
        
    }

    return 0;
}
