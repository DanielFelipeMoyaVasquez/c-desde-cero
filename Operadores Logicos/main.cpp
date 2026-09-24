/*🟢 1. Fácil
Pide la edad y determina si una persona puede entrar.
Regla: debe tener 18 años o más.
Pista: usa >=.*/



#include <iostream>
using namespace std;

int main()
{
    int numero;
    
    cout << "Elige un numero del menu:" << endl;
    cout << "1. Facil" << endl;
    cout << "2. Medio"<< endl;
    cout << "3. Dificil" << endl;
    
    cout << "Respuesta: ";
    cin >> numero;
    
    if (numero == 1){
        
        int edad;
        
        cout << "Escribe tu edad: ";
        cin >> edad;
        
        if (edad >= 18) {
            
            cout << "Eres mayor de edad, puedes entrar.";
        }
        else {
            cout << "Eres menor de edad, no puedes entrar.";
        }
    
        return 0;
        
    }


/*🟡 2. Medio
Pide:
edad
si tiene carnet (1 = sí, 0 = no)
Puede entrar solamente si:
Tiene 18 o más Y tiene carnet.
Usa &&.*/

    if (numero == 2) {
        
        int edad;
        int carnet;
        
        cout << "Escribe tu edad: ";
        cin >> edad;
        
        cout << "Tienes carnet? (1 = si, 0 = no): ";
        cin >> carnet;
        
        if (edad >= 18 && carnet == 1) {
            
            cout << "Eres mayor de edad y tienes carnet, puedes entrar.";
        }
        else {
            cout << "Eres menor de edad o no tienes carnet, no puedes entrar.";
        }
        
    }
    
/*🔴 3. Difícil
Haz un sistema de acceso.
Pide:
edad
carnet (1/0)
invitación (1/0)
Puede entrar si:
Tiene 18 años o más Y tiene carnet O tiene invitación.*/
   
    if (numero == 3) {
        
        int edad;
        int carnet;
        int invitacion;
        
        cout << "Escribe tu edad: ";
        cin >> edad;
        
        cout << "Tienes carnet? (1 = si, 0 = no): ";
        cin >> carnet;
        
        cout << "Tienes invitacion? (1 = si, 0 = no): ";
        cin >> invitacion;
        
        if (edad >= 18 && carnet == 1 || invitacion == 1) {
            
            cout << "Eres mayor de edad y tienes carnet o invitacion, puedes entrar.";
        }
        else {
            cout << "Eres menor de edad o no tienes carnet o invitacion, no puedes entrar.";
        }
        
    }
        return 0;
}








