#include <iostream>
using namespace std;

void menu(){
    
    cout << "== Menu ==";
    
    cout << "\n\n0.Salir";
    cout << "\n1.Semáforo";
    cout << "\n2.Menú de estados de un robot";
    cout << "\n3.Sistema de robots con struct + enum";
    
}

int main()
{
    
    int opcion;
    bool ejecutar = true;
    
    do{
        cout << endl << endl;
      
        menu();
        
        cout << "\n\nOpcion: ";
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 0:{
                
                cout << "Saliendo...";
                ejecutar = false;
                
                break;
                
            }
            
            case 1 :{
                
                /*🟢 Ejercicio 1 — Fácil

                Semáforo
                1. Crea un enum llamado Semaforo con ROJO, AMARILLO y VERDE.
                2. Crea una variable que represente el estado actual.
                3. Asígnale ROJO.
                4. Usa if/else para mostrar:
                   - ROJO → "Detenerse"
                   - AMARILLO → "Precaucion"
                   - VERDE → "Avanzar"
                No necesitas pedir datos al usuario todavía.*/
                
                enum Semaforo {
                    
                    ROJO,
                    AMARILLO,
                    VERDE
                    
                };
                
                Semaforo estado = ROJO;
                
                if (estado == ROJO){
                    
                    cout << "Detenerse";
                    
                }
                
                else if (estado == AMARILLO){
                    
                    cout << "Precaucion";
                    
                }
                
                else{
                    
                    cout << "Avanzar";
                    
                }
                
                break;
                
            }
            
            case 2:{
                
                /*🟡 Ejercicio 2 — Medio

                Menú de estados de un robot
                
                Define:
                enum EstadoRobot {
                    APAGADO,
                    ENCENDIDO,
                    MANTENIMIENTO
                };
                
                
                El programa debe:
                1. Mostrar un menú con las tres opciones.
                2. Pedir al usuario un número del 0 al 2.
                3. Convertir la opción en el estado correspondiente.
                4. Mostrar el estado seleccionado mediante un switch.
                Condición: si el usuario introduce otro número, debe mostrar "Opcion invalida".*/
                
                int option;
                bool verdadera = true;
                
                enum EstadoRobot {
                    
                    APAGADO,
                    ENCENDIDO,
                    MANTENIMIENTO
                    
                };
                
                EstadoRobot robot;
                
                do{
                    cout << endl << endl;
                    cout << "== Estado del robot ==";
    
                    cout << "\n\n0.Apagado";
                    cout << "\n1.Encendido";
                    cout << "\n2.Mantenimiento";
                    cout << "\n3.Salir del menu 'Estado del robot' ";
                    
                    cout << "\n\nOpcion: ";
                    cin >> option;
                    cout << endl;
                    
                    switch(option){
                        
                        case 0:
                            robot = APAGADO;
                            cout << "El robot esta apagado.";
                            break;
                        
                        case 1:
                            robot = ENCENDIDO;
                            cout << "El robot esta encendido.";
                            break;
                            
                        case 2:
                            robot = MANTENIMIENTO;
                            cout << "El robot esta en mantenumiento.";
                            break;
                        
                        case 3:
                            cout << "Saliendo del menu...";
                            verdadera = false;
                            break;
                            
                        default:
                            cout << "Numero invalido.";
                        
                    }
                    
                }while(verdadera);
                
                break;
                
            } 
            
            case 3:{
                
                /*🔴 Ejercicio 3 — Difícil

                Sistema de robots con struct + enum
                
                Define estas estructuras:
                enum Estado {
                    APAGADO,
                    ENCENDIDO,
                    MANTENIMIENTO
                };
                
                struct Robot {
                    string nombre;
                    int bateria;
                    Estado estado;
                };
                
                
                Tu programa debe:
                1. Crear un array de 3 robots.
                2. Pedir el nombre, el porcentaje de batería y el estado de cada robot.
                3. Guardar los datos en el array.
                4. Mostrar la ficha completa de cada robot.
                5. Contar cuántos están encendidos.
                6. Avisar si alguno tiene menos del 20 % de batería.
                Pista: para guardar el estado, convierte la opción numérica en uno de los valores de Estado. Valida que esté entre 0 y 2.
                
                Este ejercicio integra el tema nuevo con struct, arrays, ciclos, condiciones y contadores.*/
                
                int contador = 0; 
                
                enum Estado {
                    APAGADO,
                    ENCENDIDO,
                    MANTENIMIENTO
                };
                
                struct Robot {
                    string nombre;
                    int bateria;
                    Estado estado;
                };
                
                Robot misRobots[3];
                
                for(int i = 0; i < 3; i++){
                    
                    string nombre;
                    int bateria;
                    int estado_numerico;
                    Estado estado;
                    bool encendido = true;
                    
                    cout << "Ingresa el nombre del robot " << i+1 << " : ";
                    cin >> nombre;
                    
                    cout << "Ingresa la bateria del robot " << i+1 << " : ";
                    cin >> bateria;
                    
                    while(encendido){
                        
                        cout << "Ingresa el estado del robot " << i+1 << " | 0.APAGADO | 1.ENCENDIDO | 2. MANTENIMIENTO : ";
                        cin >> estado_numerico;
                        
                        switch(estado_numerico){
                            
                            case 0:{
                                
                                estado = APAGADO;
                                encendido = false;
                                break;
                                
                            }
                            
                            case 1:{
                                
                                estado = ENCENDIDO;
                                encendido = false;
                                break;
                                
                            }
                            
                            case 2:{
                                
                                estado = MANTENIMIENTO;
                                encendido = false;
                                break;
                                
                            }
                            
                            default:{
                                
                                cout << "Opcion invalido.";
                                cout << endl << endl;
                                
                            }
                        }
                        
                    }
                    
                    misRobots[i] = {nombre, bateria, estado};
                    cout << endl;
                    
                }
                
                for(int i = 0; i < 3; i++){
                    
                    cout << i+1 << ". Nombre: " << misRobots[i].nombre << " | Bateria : " << misRobots[i].bateria;
                    
                    switch(misRobots[i].estado){
                        
                        case 0:
                            cout << " | Estado: APAGADO";
                            break;
                            
                        case 1:
                            cout << " | Estado: ENCENDIDO";
                            break;
                            
                        case 2:
                            cout << " | Estado: MANTENIMIENTO";
                            break;
                    }
                    
                    cout << endl;
                    
                }
                
                for(int i = 0; i < 3; i++){
                    
                    if(misRobots[i].estado == ENCENDIDO){
                        
                        contador ++;
                        
                    }
                    
                }
                
                cout << "\nRobots encendidos: " << contador;
                
                for(int i = 0; i < 3; i++){
                    
                    if(misRobots[i].bateria < 20){
                        
                        cout << "\n\nEl robot " << misRobots[i].nombre << " tiene menos de 20 porciento de bateria!!!!";
                        
                    }
                    
                }
                
                break;
            }
            
            default:{
                
                cout << "Opcion invalido.";
                
            }
            
        }
        
    }while(ejecutar);

    return 0;
}
