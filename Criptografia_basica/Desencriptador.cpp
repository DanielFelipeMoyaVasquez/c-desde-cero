#include <iostream>
using namespace std;
int main()
{
    
    //Asignacion de arrays para cada letra
    char abecedario[26][5] = {

        {'Q', 'C', 'A', 'N', 'J'}, // A
        {'M', 'V', 'M', 'M', 'H'}, // B
        {'J', 'M', 'P', 'P', 'A'}, // C
        {'Z', 'H', 'K', 'J', 'N'}, // D
        {'T', 'T', 'I', 'Z', 'F'}, // E
        {'G', 'P', 'X', 'S', 'B'}, // F
        {'F', 'Q', 'V', 'B', 'R'}, // G
        {'K', 'X', 'F', 'A', 'X'}, // H
        {'P', 'Z', 'Q', 'Q', 'V'}, // I
        {'W', 'J', 'E', 'D', 'Q'}, // J
        {'L', 'L', 'W', 'I', 'Y'}, // K
        {'S', 'W', 'O', 'L', 'T'}, // L
        {'B', 'O', 'D', 'K', 'L'}, // M
        {'O', 'R', 'N', 'E', 'D'}, // N
        {'X', 'B', 'Z', 'G', 'C'}, // O
        {'N', 'D', 'Y', 'O', 'I'}, // P
        {'C', 'U', 'H', 'Y', 'E'}, // Q
        {'R', 'G', 'B', 'H', 'O'}, // R
        {'Y', 'E', 'C', 'R', 'M'}, // S
        {'E', 'Y', 'G', 'F', 'P'}, // T
        {'V', 'K', 'S', 'X', 'U'}, // U
        {'H', 'N', 'L', 'T', 'Z'}, // V
        {'I', 'F', 'T', 'C', 'K'}, // W
        {'A', 'A', 'U', 'U', 'W'}, // X
        {'D', 'I', 'J', 'V', 'S'}, // Y
        {'U', 'S', 'R', 'W', 'G'}  // Z
    
    };
    
    string contrasena;
    int posicion;
    int incognita;
    
    cout << "Escribe la contraseña: ";
    cin >> contrasena;
    
    int cantidadContrasena = contrasena.length();
    int numero = cantidadContrasena / 2;
    int suma = 0;
    int multiplicacion = 0;
    
    //Numero secreto
    int numeroAbecedario;
    
    cout << "Escribe el numero secreto: ";
    cin >> numeroAbecedario;
    
    
    for (int i = 0; i < numero; i ++){
        
        suma = suma + (contrasena[i] - 'a' + numeroAbecedario);
    
    }
    
    for(int i = numero; i < cantidadContrasena; i ++){
        
        multiplicacion = multiplicacion + (contrasena[i] - 'a' + numeroAbecedario);
        
    }
    
    incognita = (suma * multiplicacion);
    posicion = (suma * multiplicacion) % 5;
    
    string mensaje;
    int cantidadPalabras;
    cout << "Escribe el mensaje encriptado: ";
    cin.ignore();
    getline(cin, mensaje);
    
    cantidadPalabras = mensaje.length();
    
    for(int i = 0; i < cantidadPalabras; i++){
        
        for(int j = 0; j < 26; j++){
            
            if(abecedario[j][posicion] == mensaje[i]){
            
                mensaje[i] = 'A' + j;
                break;
                
            }
            
        }
    }
    
    cout << "\nMensaje: " << mensaje;
    
    
}