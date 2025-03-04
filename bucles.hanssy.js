// Definir una clase Persona
class Persona {
    // Atributos de la clase
    constructor(nombre, edad) {
        this.nombre = nombre;  // Asignar el nombre al atributo
        this.edad = edad;      // Asignar la edad al atributo
    }
}

// Crear instancias de la clase Persona
const a = new Persona("Esteban", 28);
const b = new Persona("Hans", 27);
const c = new Persona("Jhon", 41);
const d = new Persona("Juan Pablo", 23);

// Imprimir los nombres y edades
console.log(a.nombre + " " + a.edad);
console.log(b.nombre + " " + b.edad);
console.log(c.nombre + " " + c.edad);
console.log(d.nombre + " " + d.edad);