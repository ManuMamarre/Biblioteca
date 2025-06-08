<<<<<<< HEAD
# Biblioteca
=======
# Sistema de Biblioteca

Este proyecto es un sistema de gestión de biblioteca desarrollado en C++.  
Implementa varios patrones de diseño para resolver problemas comunes en la administración de bibliotecas.

## Características principales

- Registro y autenticación de usuarios (Singleton)
- Préstamo de ejemplares con múltiples estados (State)
- Cálculo flexible de multas (Strategy)
- Compartición eficiente de instancias de libros (Flyweight)
- Búsqueda flexible de libros (Strategy)
- Gestión de préstamos físicos y digitales (Factory)

## Estructura del proyecto

src/
    main.cpp
    modelos/
        usuario.h
        libro.h
        ejemplar.h
        prestamo.h
        multa.h
    patrones/
        singleton/
        factory/
        strategy/
        State/
        Flyweight/


## Patrones de diseño implementados

- **Singleton:** Control centralizado de sesiones de usuario.
- **Factory:** Creación de préstamos físicos y digitales.
- **State:** Gestión de estados de los préstamos (activo, devuelto, retrasado).
- **Strategy:** Diferentes algoritmos para cálculo de multas y búsqueda de libros.
- **Flyweight:** Compartición de instancias de libros para ahorrar memoria.

## Compilación

Desde la raíz del proyecto, ejecuta (ajusta si tu compilador o rutas son diferentes):

```sh
g++ -std=c++14 -I./src src/main.cpp \
src/patrones/singleton/GestorSesion.cpp \
src/patrones/factory/CreadorPrestamoFisico.cpp \
src/patrones/factory/CreadorPrestamoDigital.cpp \
src/patrones/factory/PrestamoFisico.cpp \
src/patrones/factory/PrestamoDigital.cpp \
src/patrones/State/PrestamoEjemplar.cpp \
src/patrones/State/EstadoActivo.cpp \
src/patrones/State/EstadoDevuelto.cpp \
src/patrones/State/EstadoRetrasado.cpp \
src/patrones/strategy/Catalogo.cpp \
src/patrones/strategy/BusquedaPorTitulo.cpp \
src/patrones/strategy/BusquedaPorAutor.cpp \
src/patrones/strategy/BusquedaPorCategoria.cpp \
src/patrones/strategy/Multasimple.cpp \
src/patrones/strategy/MultaProgresiva.cpp \
src/patrones/Flyweight/FabricaLibros.cpp \
-o sistema.exe
```

## Pruebas

Para compilar y ejecutar los tests, usa comandos similares a:

g++ -std=c++14 -I./src tests/test_singleton.cpp src/patrones/singleton/GestorSesiones.cpp -o test_singleton.exe
./test_singleton.exe
```
>>>>>>> 6c1c1e8 (Primer commit)
