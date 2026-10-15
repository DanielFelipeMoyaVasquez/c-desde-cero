#include <iostream>
using namespace std;

void menu(){
    
    cout << "\n== MENU ==";
    cout << "\n\n1.Facil";
    cout << "\n2.Medio";
    cout << "\n3.Dificil";
    cout << "\n0.Salir";
    cout << "\n\nOpcion: ";
    
}

struct Componente{
    
    string nombre;
    double voltaje;
    int cantidad;
    
};

struct Estudiante{
    
    string nombre;
    int edad;
    double promedio;
    
};

struct Producto{
    
    string nombre;
    double precio;
    int stock;
    
};

int main()
{
    int opcion;
    bool ejecutar = true;
    
    
    
    while(ejecutar){
        
        menu();
        cin >> opcion;
        cout << endl;
        
        switch(opcion){
            
            case 0:{
                
                cout << "Saliendo...";
                ejecutar = false;
                break;
                
            }
            
            case 1:{
                
                /*Ejercicio 1 — Fácil

                Ficha de un componente electrónico
                Crea un struct llamado Componente que tenga:
                - string nombre
                - double voltaje
                - int cantidad
                En main():
                1. Crea una variable de tipo Componente.
                2. Asigna los datos de un componente electrónico.
                3. Muestra todos sus datos por pantalla.
                Puedes usar, por ejemplo, una resistencia, un LED o un sensor.*/
                
                Componente led;
                
                led.nombre = "LED";
                led.voltaje = 1.8;
                led.cantidad = 4;
                
                cout << "Nombre: " << led.nombre;
                cout << "\nVoltaje: " << led.voltaje << " V";
                cout << "\nCantidad: " << led.cantidad << endl;
                
                break;
                
            }
            
            case 2:{
                
                /*Ejercicio 2 — Medio

                Registro de estudiantes
                Crea un struct llamado Estudiante con:
                - string nombre
                - int edad
                - double promedio
                Tu programa debe:
                1. Pedir los datos al usuario.
                2. Guardarlos en una variable Estudiante.
                3. Mostrar la información.
                4. Indicar si aprobó: el promedio mínimo es 3.0.
                Pista: puedes combinar struct, cin, getline(), cout e if/else.*/
                
                string nombre;
                int edad;
                int cantidadNotas;
                double promedio = 0;
                
                
                cout << "Cual es tu nombre?: ";
                cin.ignore();
                getline(cin, nombre);
                
                cout << "Cual es tu edad?: ";
                cin >> edad;
                
                cout << "Cantidad de notas: ";
                cin >> cantidadNotas;
                
                double notas[cantidadNotas];
                
                for(int i = 0; i < cantidadNotas; i++){
                    
                    cout << "Nota " << i+1 << " : ";
                    cin >> notas[i];
                    
                }
                
                for(int i = 0; i < cantidadNotas; i++){
                    
                    promedio = promedio + notas[i];
                    
                }
                
                promedio = promedio / cantidadNotas;
                
                Estudiante alumno;
                alumno.nombre = nombre;
                alumno.edad = edad;
                alumno.promedio = promedio;
                
                cout << "\n\nNombre: " << alumno.nombre;
                cout << "\nEdad: " << alumno.edad;
                cout << "\nNotas: ";
                
                for(int i = 0; i < cantidadNotas; i++){
                    
                    if (i == cantidadNotas - 1){
                        
                        cout << notas[i] << ".";
                        
                    }
                    else{
                        
                        cout << notas[i] << ", ";
                        
                    }
                    
                }
                
                cout << "\nPromedio: " << alumno.promedio;
                
                if (alumno.promedio >= 3.0){
                    
                    cout << "\nEstado: Apobado";
                    
                }
                
                else{
                    
                    cout << "\nEstado: Reprobado";
                    
                }
                
                cout << endl;
                
                break;
            }
            
            case 3:{
                
                /*Ejercicio 3 — Difícil

                Miniinventario tecnológico
                Crea un struct llamado Producto con:
                - string nombre
                - double precio
                - int stock
                Tu programa debe:
                1. Crear un array de 5 productos.
                2. Pedir al usuario los datos de los 5 productos.
                3. Mostrar el inventario completo.
                4. Calcular el valor total del inventario, multiplicando el precio por el stock de cada producto y sumando los resultados.
                5. Mostrar el producto con el precio más alto.
                6. Contar cuántos productos tienen stock igual a cero.
                Pista: necesitarás combinar struct, arrays, ciclos for, condicionales y acumuladores.*/
                
                Producto producto[5];
                
                for(int i = 0; i < 5; i++){
                    
                    string nombre;
                    double precio;
                    int stock;
                    
                    cout << "Ingresa el nombre del producto " << i+1 << ": ";
                    cin.ignore();
                    getline(cin, nombre);
                    
                    cout << "Ingresa el precio del producto " << i+1 << ": ";
                    cin >> precio;
                    
                    cout << "Ingresa el stock del producto " << i+1 << ": ";
                    cin >> stock;
                    
                    producto[i] = {nombre, precio, stock};
                    
                    cout << endl;
                    
                }
                
                cout << "Inventario: ";
                
                for(int i = 0; i < 5; i++){
                    
                    cout << "\n\nNombre: " << producto[i].nombre << "\nPrecio: "<< producto[i].precio << "\nStock:" << producto[i].stock;
                    
                }
                
                double inventario = 0;
                
                for(int i = 0; i < 5; i++){
                    
                    inventario = inventario + (producto[i].stock * producto[i].precio);
                    
                }
                
                cout << "\n\nValor total del Inventario: " << inventario;
                
                
                double precioMayor = producto[0].precio;
                string nProducto = producto[0].nombre;
                
                for(int i = 0; i < 5; i++){
                    
                    if (precioMayor < producto[i].precio){
                        
                        precioMayor = producto[i].precio;
                        nProducto = producto[i].nombre;
                        
                    }
                    
                }
                
                cout << "\nProducto con el precio mas alto: " << nProducto << " ; " << precioMayor;
                
                int totalStock = 0; 
                
                for(int i = 0; i < 5; i++){
                    
                    if (producto[i].stock == 0){
                        
                        totalStock ++;
                        
                    }
                    
                }
                
                cout << "\nProductos sin stock: " << totalStock;
                
                cout << endl;
                
                break;
                
            }
            
            default:{
                
                cout << "Opcion invalida.";
                
            }
            
        }
        
    }

    return 0;
}