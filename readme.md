# Get Next Line - 42 Project

## 📜 Descripción

 **Get Next Line** es un proyecto de 42 que consiste en implementar una función que lea una línea de un archivo a la vez, devolviendo cada línea hasta que se haya leído todo el archivo. La función debe gestionar correctamente la memoria y manejar archivos de cualquier tamaño, utilizando `read` para leer el contenido.

---

## 📋 Requisitos

Antes de compilar y ejecutar el proyecto, asegúrate de tener:

- 🛠️ **`gcc`**: Compilador de C.
- 🛠️ **`make`**: Herramienta de construcción.
- 🖥️ **Sistema operativo**: Unix o Mac.

---

## 🛠️ Cómo Compilar y Ejecutar

1. Clona el repositorio:
   ```bash
   git clone https://github.com/Kevgonz93/get_next_line.git
   ```

2. Navega al directorio del proyecto:
   ```bash
   cd get_next_line
   ```

3. Compila el código:
   ```bash
   make
   ```

4. Compila junto a el main facilitado u otro que tengas:
   ```bash
   cc gnl_main.c libgnl -o gnl
   ```

5. Ejecuta para ver el resultado:

    ```bash
    ./gnl
   ```

---

## 🚀 Características

### `get_next_line(int fd)`

Esta es la función principal del proyecto. Lee una línea desde el archivo cuyo descriptor de archivo es `fd` y la devuelve. Si no hay más líneas o hay un error, devuelve `NULL`.

#### Comportamiento esperado:

- 📄 La función debe ser capaz de leer archivos de cualquier tamaño.
- 🔄 Se debe leer una línea completa a la vez, gestionando correctamente los saltos de línea.
- 💡 El contenido debe ser leído de manera eficiente y sin desperdicio de memoria.

---

## 🧪 Pruebas

Para probar la implementación, se recomienda usar varios archivos de prueba con diferentes casos, tales como:

- 📂 Archivos vacíos.
- 📝 Archivos con múltiples líneas.
- 📏 Archivos con líneas muy largas.
- ↔ Archivos con solo saltos de línea.

Encontrarás en el directorio "txt" distintos archivos con los casos anteriores, incluso con la letra de [Duality](https://www.youtube.com/watch?v=6fVE8kSM43I)

---

## 📂 Estructura del Proyecto

```
📦 printf
├── 📂 txt                 # Archivos de prueba
├── get_next_line_utils.c  # Funciones auxiliares
├── get_next_line_.c       # Funciones principales
├── get_next_line.h        # Archivo de cabecera
├── gnl_main.c             # Archivo con main tester
├── Makefile               # Para compilar la librería **(no se entrega)**
├── README.md              # Este archivo
├── subject.md             # Enunciado en markdown
└── subject.pdf            # Enunciado del proyecto en pdf


---

## 🧑‍💻 Autor

[Kevin Gonzales](https://github.com/Kevgonz93)
