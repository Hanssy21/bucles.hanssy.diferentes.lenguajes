#include <iostream>    // Importa la librería para entrada y salida de datos (cout, cin).
#include <vector>      // Importa la librería para usar la clase vector (estructura dinámica).
#include <string>      // Importa la librería para trabajar con cadenas de texto (string).

using namespace std;  // Usa el espacio de nombres estándar para evitar escribir 'std::' antes de cada comando.


// Definición de la clase Persona.
class Persona {
public:
    string nombre;  // Atributo de tipo string para almacenar el nombre de la persona.
    int edad;       // Atributo de tipo int para almacenar la edad de la persona.

    // Constructor de la clase Persona.
    Persona(string nombre, int edad) {
        this->nombre = nombre;   // Inicializa el atributo 'nombre' con el valor pasado como argumento.
        this->edad = edad;       // Inicializa el atributo 'edad' con el valor pasado como argumento.
    }
};

int main() {
    // Lista de nombres. Es un arreglo de cadenas (strings) que contiene los nombres de las personas.
    string nombres[] = {"Esteban", "Hans", "Jhon", "Juan Pablo"};

    // Bucle para imprimir los nombres.
    for (const string& nombre : nombres) {  // Itera sobre cada elemento de 'nombres'. 
        // 'const string&' es una referencia constante para evitar copiar los elementos.
        cout << nombre << endl;  // Imprime el nombre seguido de un salto de línea.
    }

    // Crear un vector para almacenar objetos de tipo Persona.
    vector<Persona> personas;  // El vector 'personas' se usará para almacenar los objetos Persona.

    // Crear objetos de la clase Persona y añadirlos al vector.
    personas.push_back(Persona("Esteban", 28));  // Crea un objeto Persona con nombre "Esteban" y edad 28, luego lo agrega al vector.
    personas.push_back(Persona("Hans", 27));     // Crea un objeto Persona con nombre "Hans" y edad 27, luego lo agrega al vector.
    personas.push_back(Persona("Jhon", 41));     // Crea un objeto Persona con nombre "Jhon" y edad 41, luego lo agrega al vector.
    personas.push_back(Persona("Juan Pablo", 23));  // Crea un objeto Persona con nombre "Juan Pablo" y edad 23, luego lo agrega al vector.

    // Bucle para imprimir los nombres y edades de las personas en el vector.
    for (const Persona& persona : personas) {   // Itera sobre cada objeto Persona en el vector 'personas'.
        // 'const Persona&' es una referencia constante para evitar copiar los objetos.
        cout << persona.nombre << " " << persona.edad << endl;  // Imprime el nombre y la edad de cada persona seguido de un salto de línea.
    }

    return 0;  // Devuelve 0, indicando que el programa terminó correctamente.
}