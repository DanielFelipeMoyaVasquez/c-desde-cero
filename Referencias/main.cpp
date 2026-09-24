#include <iostream>
using namespace std;

void Menu(){
    
    cout << "\n== Menu ==" << endl;
    cout << "1. La referencia" << endl;
    cout << "2. Modificar desde una función" << endl;
    cout << "3. Intercambiar dos variables" << endl;
    cout << "4. Salir" << endl << endl;
}

void duplicar(int &numero){
    
    numero = numero * 2;
    
}

void intercambiar(int &a, int &b){
    
    int temporal = a;
    
    a = b;
    b = temporal;
    
}

int main()
{
    int opcion;
    bool ejecutar = true;
    
    while(ejecutar){
        
        Menu();
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 1:{
                
                /*🟢 1. Fácil — La referencia
                Crea:
                int numero = 10;
                Después crea una referencia:
                int &referencia = numero;
                El programa debe:
                Mostrar numero.
                Mostrar referencia.
                Cambiar referencia a 50.
                Mostrar nuevamente numero.
                Mostrar nuevamente referencia.*/
                
                int numero = 10;
                
                int &referencia = numero;
                
                cout << "Numero: " << numero;
                cout << "\nReferencia: " << referencia;
                
                referencia = 50;
                
                cout << "\n\nDespues de modificar referencia:";
                
                cout << "\n\nNumero: " << numero;
                cout << "\nReferencia: " << referencia << endl;
                
                break;
            }
            
            case 2:{
                
                /*🟡 2. Medio — Modificar desde una función
                Crea esta función:
                void duplicar(int &numero)
                La función debe multiplicar el número por 2.
                En main() pide un número al usuario.
                Ejemplo:
                Escribe un numero: 7
                Antes: 7
                Despues: 14
                💡 La función debe modificar directamente el número original.*/
                               
                int numero;
                
                cout << "Escribe un numero: ";
                cin >> numero;
                
                cout << "\nAntes: " << numero;
                duplicar(numero);
                cout << "\nDespues: " << numero << endl;
                
                break;
             
            }
            
            case 3:{
                
                /*🔴 3. Difícil — Intercambiar dos variables
                Crea:
                void intercambiar(int &a, int &b)
                La función debe intercambiar los valores.
                Por ejemplo:
                Antes:
                A = 10
                B = 20
                Despues:
                A = 20
                B = 10*/
                
                int a, b;
                
                cout << "Escribe el numero a: ";
                cin >> a;
                
                cout << "Escribe el numero b: ";
                cin >> b;
                
                cout << "\nAntes:";
                cout << "\nA = " << a;
                cout << "\nB = " << b;
                
                intercambiar(a, b);
                
                cout << "\nDespues:";
                cout << "\nA = " << a;
                cout << "\nB = " << b << endl;
                
                break;
                
            }
            
            case 4:{
                
                cout << "Saliendo...";
                ejecutar = false;
                break;   
            }
            
            default:
                cout << "Opcion no valida.\n";
            
        }
        
    }
    
    

    return 0;
}