#include <iostream>
using namespace std;

bool tieneArroba(string correo){
    
    for (int i = 0; i < correo.length(); i++){
        
        if (correo[i] == '@'){
            
            return true;
            
        }
        
    }
    return false;
}

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
                Crea:
                string nombre;
                Pide al usuario su nombre y muestra:
                Hola Pipe
                Tu nombre tiene 4 caracteres.
                Debes utilizar:
                .length()*/
                
                string nombre;
                
                cout << "Cual es tu nombre?: ";
                cin >> nombre;
                
                cout << nombre  <<", tu nombre tiene " << nombre.length() << " caracteres.";
                
                break;
            }
            
            case 2: {
               
               /*🟡 Ejercicio 2 — Medio
                Pide al usuario su nombre completo utilizando:
                getline()
                Después muestra:
                El nombre completo.
                La cantidad de caracteres.
                El primer carácter.
                El último carácter.
                Ejemplo:
                Nombre completo: Pipe Gonzalez
                Nombre: Pipe Gonzalez
                Caracteres: 13
                Primer caracter: P
                Ultimo caracter: z*/
                
                string nombreCompleto;
    
                cout << "Escribe tu nombre completo: ";
                cin.ignore(); // esto lo tuve que buscar, lo que entendi es que del mensaje anterio quedo un enter "flotando" y el comando lo toma, entonces este comando lo borra.
                getline(cin, nombreCompleto);
                
                cout << endl << "Nombre completo: " << nombreCompleto;
                cout << endl << "Cantidad de caracteres: " << nombreCompleto.length();
                cout << endl << "Primer caracter: " << nombreCompleto[0];
                cout << endl << "Ultimo caracter: " << nombreCompleto[nombreCompleto.length() -1];
                
                break;
              
            }
            
            case 3: {
                
                /*🔴 Ejercicio 3 — Difícil
                Crea una función:
                bool tieneArroba(string correo)
                Debe revisar si un correo contiene el carácter:
                @
                Debe devolver:
                true → contiene @
                false → no contiene @
                Por ejemplo:
                Correo: pipe@gmail.com
                El correo contiene @
                Pero:
                Correo: pipegmail.com
                El correo no contiene @*/
                
                string correo;
                
                cout << "Escribe tu correo: ";
                cin >> correo;
                
                cout << "\n\nCorreo: " << correo;
                
                if (tieneArroba(correo)){
                    
                    cout << endl << "El correo contiene @.";
                    
                }
                else{
                    
                    cout << endl << "El correo no contiene @.";
                    
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