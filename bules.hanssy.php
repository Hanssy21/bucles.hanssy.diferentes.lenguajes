<?php

// Definir la clase Persona
class Persona {
    public $nombre;
    public $edad;

    // Constructor de la clase Persona
    public function __construct($nombre, $edad) {
        $this->nombre = $nombre;
        $this->edad = $edad;
    }
}

// Lista de nombres
$nombres = ["Esteban", "Hans", "Jhon", "Juan Pablo"];

// Imprimir los nombres
foreach ($nombres as $nombre) {
    echo $nombre . "\n";
}

// Crear una lista para las personas
$personas = [];

// Crear objetos Persona y añadirlos a la lista
$personas[] = new Persona("Esteban", 28);
$personas[] = new Persona("Hans", 27);
$personas[] = new Persona("Jhon", 41);
$personas[] = new Persona("Juan Pablo", 23);

// Imprimir los nombres y edades de las personas
foreach ($personas as $persona) {
    echo $persona->nombre . " " . $persona->edad . "\n";
}

?>