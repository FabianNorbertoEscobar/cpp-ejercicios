# Ejercicios de C++

[![C++](https://img.shields.io/badge/lenguaje-C%2B%2B-blue.svg)](https://isocpp.org/)
[![IDE](https://img.shields.io/badge/IDE-Code%3A%3ABlocks-orange.svg)](http://www.codeblocks.org/)
[![Estado](https://img.shields.io/badge/estado-archivo%20de%20pr%C3%A1cticas-informational.svg)](https://github.com/FabianNorbertoEscobar/cpp-ejercicios)

Colección de ejercicios y proyectos prácticos desarrollados para estudiar **programación estructurada y programación orientada a objetos en C++**.

El repositorio contiene más de **170 archivos fuente**, organizados en proyectos independientes. Cada carpeta representa un concepto, una clase o una aplicación pequeña creada para experimentar con el lenguaje y observar su comportamiento.

## Contenido

- [Stack y tecnologías](#stack-y-tecnologías)
- [Áreas prácticas](#áreas-prácticas)
- [Proyectos destacados](#proyectos-destacados)
- [Estructura del repositorio](#estructura-del-repositorio)
- [Cómo ejecutar los ejercicios](#cómo-ejecutar-los-ejercicios)
- [Convenciones](#convenciones)
- [Contribuciones](#contribuciones)
- [Autor](#autor)

## Stack y tecnologías

| Tecnología | Uso en el repositorio |
|---|---|
| C++ | Implementación de los ejercicios y proyectos |
| Headers `.h` y `.hpp` | Declaración de clases, funciones y plantillas |
| Implementaciones `.cpp` | Definición de clases y lógica de los programas |
| Code::Blocks | IDE utilizado para crear y compilar la mayoría de los proyectos |
| GCC/G++ | Compilador empleado por los proyectos `.cbp` |
| STL básica | Contenedores y utilidades estándar utilizadas según el ejercicio |
| Consola | Interfaz de entrada y salida mediante `iostream`, `iomanip` y `clocale` |

La mayoría de los proyectos corresponde a C++ clásico o a versiones iniciales de C++, por lo que algunos ejercicios pueden contener APIs o prácticas antiguas, como `auto_ptr` o llamadas específicas de Windows.

## Áreas prácticas

### Fundamentos del lenguaje

- Variables y tipos de datos
- Entrada y salida con `iostream`
- Formato de flujo con `iomanip`
- Operadores y resolución de alcance
- Funciones, parámetros por valor y por referencia
- Sobrecarga de funciones
- Parámetros predeterminados
- Funciones `inline`
- Multiplicación rusa
- Cálculos de áreas y volúmenes

### Clases y objetos

- Constructores y destructores
- Inicializadores de atributos
- Atributos y métodos estáticos
- Sobrecarga de operadores
- Getters y setters
- Uso de clases relacionadas
- Memoria dinámica
- Clases `Complejo`, `Racional`, `Moneda`, `Cadena`, `Fecha` y `Hora`
- Modelos de objetos como cuenta bancaria, persona, vendedor, bicicleta y figura

### Herencia y polimorfismo

- Herencia simple
- Herencia múltiple
- Jerarquías entre `Punto`, `Círculo` y `Cilindro`
- Clases base y clases derivadas
- Clases abstractas
- Funciones virtuales
- Vinculación estática y dinámica
- Implementaciones mediante punteros y referencias

### Plantillas y estructuras de datos

- Plantillas de funciones
- Plantillas de clases
- Pila genérica
- Cola genérica
- Gestión manual de nodos y memoria

### Gestión de errores y memoria

- Excepciones con `try`, `catch` y `throw`
- Relanzamiento de excepciones
- Desenrollado de la pila de ejecución
- División por cero
- Fallos de asignación dinámica
- Uso de punteros inteligentes clásicos
- Manejo de objetos creados dinámicamente

## Proyectos destacados

| Proyecto | Conceptos demostrados |
|---|---|
| `clase abstracta Figura_polimorfismo y funciones virtuales` | Clase abstracta, herencia, polimorfismo y despacho dinámico |
| `clase bicicleta_herencia múltiple` | Composición, herencia múltiple y modelado de una bicicleta |
| `clase persona` | Sobrecarga de operadores de flujo y asociación entre clases |
| `clase cilindro (hereda de círculo)` | Herencia y especialización de clases |
| `template clase pila` | Clase plantilla, memoria dinámica y operaciones LIFO |
| `template clase cola` | Clase plantilla, memoria dinámica y operaciones FIFO |
| `entrada y salida de flujo` | Manipuladores, formato numérico, lectura y escritura |
| `clase 25 (try catch y memoria dinámica en c++)` | Excepciones y memoria dinámica |
| `desenrollar la pila de ejecución para capturar la excepción` | Propagación de excepciones |
| `clase gato_juego del gato (ta-te-ti)` | Implementación de una aplicación interactiva de consola |

## Estructura del repositorio

Cada ejercicio suele contener sus propios archivos independientes:

```text
ejercicio/
├── main.cpp                 # Punto de entrada del programa
├── clase.cpp                # Implementación de la clase
├── clase.hpp                # Declaración de la clase
├── ejercicio.cbp            # Proyecto de Code::Blocks
├── bin/Debug/               # Ejecutable generado
├── obj/Debug/               # Archivos objeto generados
└── ejercicio.layout         # Metadatos del IDE
```

Los directorios `bin/`, `obj/` y los archivos `.exe`, `.o`, `.cbp`, `.layout` y `.depend` son artefactos de compilación o configuración del entorno de desarrollo. El código fuente principal está compuesto por `.cpp`, `.h` y `.hpp`.

## Cómo ejecutar los ejercicios

### Requisitos

- Un compilador compatible con C++ (`g++`, `clang++` o MinGW)
- Opcional: Code::Blocks
- Terminal o consola

### Código::Blocks

1. Abre el proyecto `*.cbp` correspondiente a la carpeta que quieras estudiar.
2. Selecciona el objetivo `Debug` o `Release`.
3. Compila y ejecuta desde `Build > Build and Run`.

La mayoría de los proyectos tiene un objetivo generado para Windows y GCC.

### Compilar desde una terminal

Para un ejercicio sencillo con un único archivo:

```bash
cd "área de círculo"
g++ -std=c++11 -Wall main.cpp -o area-de-circulo
./area-de-circulo
```

Para proyectos con varias implementaciones:

```bash
cd "clase persona"
g++ -std=c++11 -Wall *.cpp -o clase-persona
./clase-persona
```

Para proyectos con nombres o rutas especiales, reemplaza el nombre de la carpeta con la ruta exacta y conserva el uso de comillas:

```bash
cd "clase abstracta Figura_polimorfismo y funciones virtuales"
g++ -std=c++11 -Wall *.cpp -o figura
./figura
```

En Windows con MinGW, el ejecutable generado puede llevar la extensión `.exe`:

```powershell
g++ -std=c++11 -Wall *.cpp -o programa.exe
.\programa.exe
```

> Algunos ejemplos utilizan `system("cls")`, cadenas con configuración regional o APIs heredadas. El código puede requerir ajustes para compilar en plataformas distintas de Windows o con compiladores modernos.

## Convenciones

- Los nombres de carpetas suelen describir directamente el tema estudiado.
- Las clases se distribuyen habitualmente entre `.hpp`/`.h` para las declaraciones y `.cpp` para las implementaciones.
- Muchos ejercicios incluyen el nombre del concepto trabajado en comentarios o mensajes de consola.
- Los proyectos son pequeños y están orientados al aprendizaje, no a formar una biblioteca única.
- El repositorio conserva artefactos de compilación como parte de su evolución histórica.

## Contribuciones

Las contribuciones son bienvenidas si mantienen el enfoque educativo del repositorio. Ejemplos apropiados:

- Corregir errores de compilación o enlaces
- Añadir comentarios breves a conceptos difíciles
- Mejorar el acceso a memoria y los ejercicios con recursos dinámicos
- Migrar ejemplos obsoletos preservando su objetivo didáctico
- Agregar instrucciones de compilación o ejemplos de uso

Antes de ampliar un ejercicio existente, intenta mantener una carpeta independiente para que cada práctica siga representando una idea clara.

## Autor

**Fabian Norberto Escobar**

- GitHub: [FabianNorbertoEscobar](https://github.com/FabianNorbertoEscobar)
- Repositorio: [cpp-ejercicios](https://github.com/FabianNorbertoEscobar/cpp-ejercicios)

Este repositorio no incluye actualmente una licencia explícita. Si deseas reutilizar el código fuera de fines personales o educativos, primero solicita permiso al autor.
