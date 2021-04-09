#include <iostream>
#include <string>
#include <vector>
#define PI_MACRO 3.1415;

using namespace std;

struct Empleado
{
    int identificador;
    float sueldo;
};


int main(){
    int edad = 18;
    //Con sizeof podemos ver el tamaño de la variable en bytes.
    int cantidad_bytes = sizeof(int);
    float pi = 3.14;
    float precio = 10;  //Se convierte en 10.0
    char caracter = 'e';
    bool logico = true;
    logico = false;
    // Enumerado
    enum Semaforo{
        ROJO,
        AMARILLO,
        VERDE
    };
    // Variable enumerado
    Semaforo semaforo = VERDE;
    // Una manera de constante
    const float PI = 3.1415;
    // Vectores
    float primerTrimestre[] = {1.2, 2.2, 3.3};
    primerTrimestre[2] = 5.2;  // Asignamos un valor al vector
    // MATRICES
    float sueldoEmpleados[5][12];  //[fila][columnas]
    sueldoEmpleados[0][2] = 1200;
    // cadena de caracteres
    char saludo[5] = "Hola"; // Tiene cinco caracteres porque al final contiene \0
    // Estructura
    Empleado empleado;
    empleado.identificador = 1;
    empleado.sueldo = 15000.2;
    string saludo("Hola");
    string despedida;
    despedida = "Adios";
    char primeraLetra = despedida.at(0);  // Retorna la primera posición
    //Vectores
    vector<float> ingresos;
    ingresos.push_back(120.3);
    ingresos.push_back(45.3);
    ingresos.push_back(78.6);
    return 0;
}