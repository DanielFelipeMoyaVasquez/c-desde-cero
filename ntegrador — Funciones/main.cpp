#include <iostream>
using namespace std;

double calcularPromedio(double notas[], int cantidad){
    
    double suma = 0;
    
    for (int i = 0; i < cantidad; i ++ ){
        
        suma = suma + notas[i];
        
    }
    
    return suma / cantidad;
    
}

double obtenerMayor(double notas[], int cantidad){
    
    double mayor = 0;
    
    for (int i = 0; i < cantidad; i++){
        
        if (mayor < notas[i]){
            
            mayor = notas[i];
            
        }
        
    }
    
    return mayor;
}


bool aprobo(double promedio){
    
    if (promedio >= 3.0){
        
        return true;
        
    }
    
    return false;
    
}

int main()
{
    int opcion;
    double notas[5] = {3.5, 4.2, 2.8, 4.8, 3.0};
    int cantidad = 5;
    bool ejecutar = true;

    cout << endl << "Hola, elige un numero del menu: " << endl;

    
    
    while(ejecutar){

        cout << endl << "1. Promedio" << endl;
        cout << "2. Nota mayor"<< endl;
        cout << "3. Aprobado" << endl;
        cout << "4. Reporte final" << endl;
        cout << "5. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
                /*🟢 Función 1 — Promedio
                double calcularPromedio(double notas[], int cantidad)
                Debe:
                Recibir el array.
                Recibir la cantidad de notas.
                Calcular el promedio.
                Devolverlo.*/
               
               
               
               cout << "El promedio es: " << calcularPromedio(notas, cantidad) << endl;
               
               break;
            }
            
            case 2: {
               
               /*🟡 Función 2 — Nota mayor
                double obtenerMayor(double notas[], int cantidad)
                Debe recorrer el array y devolver la nota más alta.
                Con nuestro ejemplo:
                Nota mayor: 4.8*/
                
                cout << endl << "El numero mayor es: " << obtenerMayor(notas, cantidad) << endl;
                break;
            }
            
            case 3: {
                
                /*Función 3 — Aprobado
                bool aprobo(double promedio)
                Debe devolver:
                true  → si promedio >= 3.0
                false → si promedio < 3.0*/
                
                if (aprobo(calcularPromedio(notas, cantidad))) {
                    
                    cout << endl << "Estado: Aprobado." << endl;
                    
                } 
                else {
                    
                    cout << endl <<"Estado: Reprobado. " << endl;
                    
                }
                break;
            }
            
            case 4: {
                cout << "Notas:" << endl;
                
                for (int i = 0; i < cantidad; i ++){
                    
                    cout << notas[i] << endl;
                    
                }
                
                cout << endl << "Promedio: " << calcularPromedio(notas, cantidad) << endl;
                cout << "Nota mayor: " << obtenerMayor(notas, cantidad) << endl;
                
                if (aprobo(calcularPromedio(notas, cantidad))) {
                    
                    cout << "Estado: APROBADO." << endl;
                    
                } 
                else {
                    
                    cout <<"Estado: REPROBADO. " << endl;
                    
                }
                break;
                
            }
            
            case 5:{
                
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