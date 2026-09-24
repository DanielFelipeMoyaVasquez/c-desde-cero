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

        cout << endl << "1. Cambiar un elemento" << endl;
        cout << "2. Multiplicar todos"<< endl;
        cout << "3. Modificar según condición" << endl;
        cout << "4. Salir" << endl;
        cout << "Respuesta: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
        
            case 1: {
                
               /*🟢 Fácil — Cambiar un elemento
                Crea:
                int numeros[5] = {10, 20, 30, 40, 50};
                Cambia solamente el número 30 por 100.
                Después muestra el array completo usando un for.*/
                
                int numeros[5] = {10, 20, 30, 40, 50};
                
                numeros[2] = 100;
                
                for (int i = 0; i < 5; i++){
                    
                    cout << numeros[i] << endl;
                    
                }
                
                break;
                               
            }
            
            case 2: {
                
                /*🟡 Medio — Multiplicar todos
                Crea:
                int numeros[5] = {2, 4, 6, 8, 10};
                Usa un for para multiplicar cada elemento por 3.*/
                
                int numeros[5] = {2, 4, 6, 8, 10};
                
                for (int i = 0; i < 5; i ++){
                    
                    numeros[i] = numeros[i] * 3;
                    
                }
                
                for (int i = 0; i < 5; i ++){
                    
                   cout << numeros[i] << endl;
                    
                }
                
                break;
                
            }
            
            case 3: {
                
                /*🔴 Difícil — Modificar según condición
                Crea:
                int numeros[10] = {4, 7, 2, 9, 6, 3, 10, 5, 8, 1};
                Recorre el array y:
                Si el número es par, multiplícalo por 2.
                Si el número es impar, multiplícalo por 3.
                Después muestra el array modificado.
                Por ejemplo:
                4 → 8
                7 → 21
                2 → 4
                ...*/
               
               int numeros[10] = {4, 7, 2, 9, 6, 3, 10, 5, 8, 1};
               int par;
               int impar;
               
               for (int i = 0; i < 10; i ++){
                   
                   if ((numeros[i] % 2) == 0){
                       
                       par = numeros[i] * 2;
                       
                       cout << numeros[i] << " → " << par << endl;
                       
                       
                   }
                   else{
                       
                       impar = numeros[i] * 3;
                       
                       cout << numeros[i] << " → " << impar << endl;
                       
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