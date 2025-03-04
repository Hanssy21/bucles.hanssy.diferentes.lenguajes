# Lista de nombres
nombres = ['Esteban', 'Hans', 'Jhon', 'Juan Pablo']

# Imprimir los nombres
for nombre in nombres:
    print(nombre)

# Diccionarios (en Python usamos diccionarios)
personas = []  # Lista vacía

# Crear diccionarios (similares a objetos en JavaScript)
a = {'nombre': 'Esteban', 'Edad': 28}
b = {'nombre': 'Hans', 'Edad': 27}
c = {'nombre': 'Jhon', 'Edad': 41}
d = {'nombre': 'Juan Pablo', 'Edad': 23}

# Agregar los diccionarios a la lista
personas.append(a)
personas.append(b)
personas.append(c)
personas.append(d)

# Imprimir los nombres y edades
for persona in personas:
    print(persona['nombre'], persona['Edad'])

# Operar con valores de los diccionarios
suma_edades = 0
for persona in personas:
    suma_edades += persona['Edad']  # Sumar las edades

print("La suma total de las edades es:", suma_edades)