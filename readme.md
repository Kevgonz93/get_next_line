# Get Next Line - 42 Project

## Descripción

El proyecto **Get Next Line** de 42 consiste en implementar una función que lea una línea de un archivo a la vez, devolviendo cada línea hasta que se haya leído todo el archivo. La función debe gestionar correctamente la memoria y manejar archivos de cualquier tamaño, utilizando `read` para leer el contenido.

## Requisitos

- **Norminette**: El código debe cumplir con las reglas de estilo de la Norminette de 42.
- **Lenguaje**: El proyecto debe ser implementado en C.
- **Librerías**: Uso de las funciones estándar de C como `read`, `malloc`, `free`, entre otras.

## Función principal

### `get_next_line(int fd)`

Esta es la función principal del proyecto. Lee una línea desde el archivo cuyo descriptor de archivo es `fd` y la devuelve. Si no hay más líneas o hay un error, devuelve `NULL`.

### Comportamiento esperado

- La función debe ser capaz de leer archivos de cualquier tamaño.
- Se debe leer una línea completa a la vez, gestionando correctamente los saltos de línea.
- El contenido debe ser leído de manera eficiente y sin desperdicio de memoria.

## Instalación

Este proyecto no requiere ninguna instalación especial. Para probar la función, solo es necesario compilarla junto con un archivo principal o de prueba que invoca `get_next_line`.

### Pasos para compilar:

1. Clona el repositorio:

   git clone https://github.com/Kevgonz93/get_next_line.git

2. Navega al directorio del proyecto:

   cd get_next_line

3. Compila el código:

   make

4. Ejecuta las pruebas o tu propio archivo para probar la función get_next_line.

## Pruebas

Para probar la implementación, se recomienda usar varios archivos de prueba con diferentes casos, tales como:

• Archivos vacíos.
• Archivos con múltiples líneas.
• Archivos con líneas muy largas.
• Archivos con solo saltos de línea.

Encontrarás en el directorio txt distintos archivos con los casos anteriores, incluso con la letra de [Duality](https://www.youtube.com/watch?v=6fVE8kSM43I)

## Consideraciones

• Gestión de memoria: Asegúrate de liberar correctamente la memoria después de usarla para evitar fugas.
• Norminette: El código debe cumplir con las restricciones de la Norminette, por lo que las funciones no deben exceder las 25 líneas y el estilo de código debe ser consistente con las reglas de indentación.

## Autor

[Kevin Gonzales](https://github.com/Kevgonz93)
