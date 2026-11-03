#include <iostream>
#include <string>

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
    
    //Contrasena que vamos a usar para darle un numero a la array gracias a '% 5'
    string contrasena;
    int posicion;

    cout << "Escribe la contraseña que deseas usar (solo usa palabras sin espacios): ";
    cin >> contrasena;
    
    int cantidadContrasena = contrasena.length();
    int numero = cantidadContrasena / 2;
    int suma = 0;
    int multiplicacion = 0;
    
    //Numero secreto
    int numeroAbecedario;
    
    cout << "\nEscribe el numero secreto que deseas usar: ";
    cin >> numeroAbecedario;
    
    
    for (int i = 0; i < numero; i ++){
        
        suma = suma + (contrasena[i] - 'a' + numeroAbecedario);
    
    }
    
    for(int i = numero; i < cantidadContrasena; i ++){
        
        multiplicacion = multiplicacion + (contrasena[i] - 'a' + numeroAbecedario);
        
    }

    posicion = (suma * multiplicacion) % 5;
    
    //Mensaje que deseamos encriptar
    string mensaje;
    int cantidadPalabras;
    
    cout << "\nEscribe el mensaje que deseas encriptar: ";
    cin.ignore();
    getline(cin, mensaje);
    
    cantidadPalabras = mensaje.length();
    
    //For para encriptar
    for (int i = 0; i < cantidadPalabras; i++){
        
        if(tolower(mensaje[i]) == 'a'){
            mensaje[i] = abecedario[0][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'b'){
            mensaje[i] = abecedario[1][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'c'){
            mensaje[i] = abecedario[2][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'd'){
            mensaje[i] = abecedario[3][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'e'){
            mensaje[i] = abecedario[4][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'f'){
            mensaje[i] = abecedario[5][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'g'){
            mensaje[i] = abecedario[6][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'h'){
            mensaje[i] = abecedario[7][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'i'){
            mensaje[i] = abecedario[8][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'j'){
            mensaje[i] = abecedario[9][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'k'){
            mensaje[i] = abecedario[10][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'l'){
            mensaje[i] = abecedario[11][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'm'){
            mensaje[i] = abecedario[12][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'n'){
            mensaje[i] = abecedario[13][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'o'){
            mensaje[i] = abecedario[14][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'p'){
            mensaje[i] = abecedario[15][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'q'){
            mensaje[i] = abecedario[16][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'r'){
            mensaje[i] = abecedario[17][posicion];
            
        }
        else if(tolower(mensaje[i]) == 's'){
            mensaje[i] = abecedario[18][posicion];
            
        }
        else if(tolower(mensaje[i]) == 't'){
            mensaje[i] = abecedario[19][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'u'){
            mensaje[i] = abecedario[20][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'v'){
            mensaje[i] = abecedario[21][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'w'){
            mensaje[i] = abecedario[22][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'x'){
            mensaje[i] = abecedario[23][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'y'){
            mensaje[i] = abecedario[24][posicion];
            
        }
        else if(tolower(mensaje[i]) == 'z'){
            mensaje[i] = abecedario[25][posicion];
            
        }
        else{
            continue;
        }
        
    }
    cout << "\n----------------------------------------------------------";
    cout << "\nMensaje encriptado: " << mensaje;
    cout << "\nContraseña: " << contrasena;
    cout << "\nNumero secreto: " << numeroAbecedario;
    cout << "\n----------------------------------------------------------";
    
    return 0;
}