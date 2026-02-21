# Configuración de Visual Studio Code para desarrollar en C

Esta guía te ayudará a configurar tu entorno de desarrollo para programar en C utilizando Visual Studio Code y MinGW.

## Contenido

1. [Instalación de Visual Studio Code](#1-instalación-de-visual-studio-code)
2. [Instalación de MinGW](#2-instalación-de-mingw)
3. [Instalación de CMake](#3-instalación-de-cmake)
4. [Instalación de extensiones de Visual Studio Code](#4-instalación-de-extensiones-de-visual-studio-code)
5. [Primer programa C en Visual Studio Code](#5-primer-programa-c-en-visual-studio-code)

---

## 1. Instalación de Visual Studio Code

### Paso 1: Descargar Visual Studio Code

1. Ve al sitio oficial de Visual Studio Code: [https://code.visualstudio.com](https://code.visualstudio.com)
2. Descarga el instalador para tu sistema operativo (Windows, macOS o Linux)

![Sitio web de Visual Studio Code](imagenes/vscode-website.jpg)

### Paso 2: Ejecutar el instalador

1. Ejecuta el instalador descargado
2. Acepta el acuerdo de licencia

![Acuerdo de licencia](imagenes/vscode-license.jpg)

### Paso 3: Configurar la instalación

1. Selecciona la carpeta de destino (por defecto: `C:\Users\[usuario]\AppData\Local\Programs\Microsoft VS Code`)
![Carpetas de instalación](imagenes/vscode-folders.jpg)

2. Selecciona la carpeta del menú inicio (por defecto: `Visual Studio Code`)
![Carpetas de instalación](imagenes/vscode-folders-2.jpg)


### Paso 4: Opciones adicionales

Marca las siguientes opciones recomendadas:
- ✓ Crear un icono en el escritorio
- ✓ Añadir "Abrir con Code" al menú contextual de archivos
- ✓ Agregar a PATH (disponible después de reiniciar)

![Opciones de instalación](imagenes/vscode-options.jpg)

### Paso 5: Completar la instalación

1. Haz clic en "Instalar"
2. Espera a que se complete la instalación
3. Marca la opción "Ejecutar Visual Studio Code"
4. Haz clic en "Finalizar"

![Instalación completa](imagenes/vscode-complete.jpg)

---

## 2. Instalación de MinGW

MinGW (Minimalist GNU for Windows) es un port de las herramientas de desarrollo GNU para Windows, que incluye el compilador GCC para C/C++.

### Paso 1: Buscar MinGW

1. Abre tu navegador y busca "mingw" en Google
2. Accede al sitio de SourceForge: [https://sourceforge.net/projects/mingw/](https://sourceforge.net/projects/mingw/)

![Búsqueda de MinGW](imagenes/mingw-search.jpg)

### Paso 2: Descargar MinGW

1. En la página de SourceForge, haz clic en el botón "Download"
2. Se descargará el archivo `mingw-get-setup.exe`

![Página de descarga de MinGW](imagenes/mingw-download.jpg)

### Paso 3: Ejecutar el instalador

1. Ejecuta el archivo `mingw-get-setup.exe`
2. Verás la ventana de bienvenida del MinGW Installation Manager Setup Tool
3. Haz clic en "Install"

![Instalador de MinGW](imagenes/mingw-installer.jpg)

### Paso 4: Configurar directorio de instalación

1. Mantén el directorio de instalación por defecto: `C:\MinGW`
2. Haz clic en "Continue"

![Directorio de instalación](imagenes/mingw-directory.jpg)

### Paso 5: Descargar catálogos

Espera mientras el instalador descarga los catálogos necesarios.

![Descarga de catálogos](imagenes/mingw-downloading.jpg)

### Paso 6: Completar descarga de catálogos

Cuando la descarga se complete, verás el mensaje "Catalogue update completed"
Haz clic en "Continue"

![Catálogos descargados](imagenes/mingw-catalogue-complete.jpg)

### Paso 7: Seleccionar paquetes

En el MinGW Installation Manager:
1. Marca para instalación: `mingw32-gcc-g++` (The GNU C++ Compiler)
2. Haz clic derecho sobre el paquete y selecciona "Mark for Installation"

![Seleccionar compilador](imagenes/mingw-select-compiler.jpg)

### Paso 8: Aplicar cambios

1. Ve al menú "Installation" > "Apply Changes"
2. Verás un resumen de los paquetes que se instalarán (29 paquetes nuevos/actualizados aproximadamente)
3. Haz clic en "Apply"

![Aplicar cambios](imagenes/mingw-apply-changes.jpg)

### Paso 9: Instalación de paquetes

Espera mientras se instalan todos los paquetes necesarios.

![Instalando paquetes](imagenes/mingw-installing.jpg)

### Paso 10: Verificar instalación

Una vez completada la instalación:
1. Navega a `C:\MinGW\bin`
2. Verás archivos como `gcc.exe`, `g++.exe`, etc.

![Carpeta bin de MinGW](imagenes/mingw-bin-folder.jpg)

### Paso 11: Configurar variables de entorno

Para poder usar el compilador desde cualquier ubicación:

1. Busca "variables de entorno" en el menú de Windows
2. Haz clic en "Editar las variables de entorno del sistema"

![Buscar variables de entorno](imagenes/env-search.jpg)

### Paso 12: Editar la variable PATH

1. En las propiedades del sistema, haz clic en "Variables de entorno..."
2. En "Variables de usuario", selecciona "Path" y haz clic en "Editar..."
3. Haz clic en "Nuevo" y agrega: `C:\MinGW\bin`
4. Haz clic en "Aceptar" en todas las ventanas

![Editar PATH](imagenes/env-edit-path.jpg)

### Paso 13: Verificar la instalación

Abre un símbolo del sistema y ejecuta:

```bash
gcc --version
```

Deberías ver algo como:
```
gcc (MinGW.org GCC-6.3.0-1) 6.3.0
This is free software; see the source for copying conditions. There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

![Verificar GCC - Error](imagenes/gcc-verify-error.jpg)

Si funciona correctamente, verás:

![Verificar GCC - Éxito](imagenes/gcc-verify-success.jpg)

---

## 3. Instalación de CMake

CMake es un sistema de generación de archivos de construcción multiplataforma que facilita la gestión de proyectos C/C++. Permite definir la estructura del proyecto y sus dependencias de forma independiente del compilador.

### ¿Qué es CMake?

CMake lee archivos de configuración llamados `CMakeLists.txt` y genera los archivos necesarios para compilar tu proyecto (como Makefiles). Esto hace que sea más fácil:
- Gestionar proyectos con múltiples archivos fuente
- Organizar el código en bibliotecas y ejecutables
- Manejar dependencias entre módulos
- Compilar el proyecto en diferentes plataformas

### Paso 1: Descargar CMake

1. Ve al sitio oficial de CMake: [https://cmake.org/download/](https://cmake.org/download/)
2. En la sección "Binary distributions", busca la versión para Windows
3. Descarga el instalador (archivo `.msi`) para la última versión estable
   - Ejemplo: `cmake-3.XX.X-windows-x86_64.msi`

![Página de descarga de CMake](imagenes/cmake-download.jpg)

### Paso 2: Ejecutar el instalador

1. Ejecuta el archivo `.msi` descargado
2. Aparecerá el asistente de instalación de CMake
3. Haz clic en "Next" para continuar

![Instalador de CMake - Bienvenida](imagenes/cmake-installer-welcome.jpg)

### Paso 3: Aceptar la licencia

1. Lee el acuerdo de licencia
2. Marca "I accept the terms in the License Agreement"
3. Haz clic en "Next"

![Acuerdo de licencia de CMake](imagenes/cmake-license.jpg)

### Paso 4: Configurar PATH

Esta es la opción más importante. Selecciona:
- **"Add CMake to the system PATH for all users"** (recomendado)
  - O "Add CMake to the system PATH for the current user" si no tienes permisos de administrador

Esto te permitirá usar CMake desde cualquier terminal sin necesidad de especificar la ruta completa.

![Configurar PATH de CMake](imagenes/cmake-path-option.jpg)

### Paso 5: Seleccionar carpeta de instalación

1. Mantén la carpeta por defecto: `C:\Program Files\CMake`
2. O selecciona una ubicación diferente si lo prefieres
3. Haz clic en "Next"

![Carpeta de instalación de CMake](imagenes/cmake-install-folder.jpg)

### Paso 6: Instalar

1. Haz clic en "Install" para comenzar la instalación
2. Espera mientras se copian los archivos

![Instalando CMake](imagenes/cmake-installing.jpg)

### Paso 7: Completar la instalación

1. Una vez finalizada la instalación, haz clic en "Finish"

![Instalación completa de CMake](imagenes/cmake-complete.jpg)

### Paso 8: Verificar la instalación

Abre un símbolo del sistema (o PowerShell) y ejecuta:

```bash
cmake --version
```

Deberías ver algo como:

```
cmake version 3.XX.X

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

![Verificar instalación de CMake](imagenes/cmake-verify.jpg)

### Uso básico de CMake

Para usar CMake en tus proyectos, necesitarás crear un archivo `CMakeLists.txt` en la raíz de tu proyecto. Ejemplo básico:

```cmake
# Versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MiProyecto)

# Estándar de C
set(CMAKE_C_STANDARD 11)

# Agregar ejecutable
add_executable(programa main.c funciones.c)
```

Para compilar tu proyecto con CMake:

```bash
# Crear carpeta de construcción
mkdir build
cd build

# Generar archivos de construcción
cmake ..

# Compilar el proyecto
cmake --build .
```

---

## 4. Instalación de extensiones de Visual Studio Code

Las extensiones añaden funcionalidades específicas para el desarrollo en C/C++.

### Paso 1: Abrir el panel de extensiones

1. Abre Visual Studio Code
2. Haz clic en el icono de extensiones en la barra lateral izquierda (o presiona `Ctrl+Shift+X`)

![Panel de extensiones](imagenes/vscode-extensions-panel.jpg)

### Paso 2: Buscar extensiones de C/C++

En el cuadro de búsqueda, escribe "C/C++" para encontrar las extensiones disponibles.

![Buscar extensiones C++](imagenes/vscode-search-cpp.jpg)

### Paso 3: Instalar C/C++ Extension

1. Busca la extensión "C/C++" de Microsoft
2. Haz clic en "Install"

Esta extensión proporciona:
- IntelliSense (autocompletado inteligente)
- Debugging (depuración)
- Code browsing (navegación de código)

![Extensión C/C++](imagenes/vscode-cpp-extension.jpg)

### Paso 4: Extensión instalada

Una vez instalada, verás el botón "Uninstall" en lugar de "Install".

![C/C++ instalada](imagenes/vscode-cpp-installed.jpg)

### Paso 5: Instalar C/C++ Extension Pack

También es recomendable instalar el "C/C++ Extension Pack" que incluye:
- C/C++ (extensión base)
- C/C++ Themes
- CMake
- CMake Tools

![Extension Pack](imagenes/vscode-extension-pack.jpg)

---

## 5. Primer programa C en Visual Studio Code

### Paso 1: Crear una carpeta para tu proyecto

1. En Visual Studio Code, ve a "File" > "Open Folder..."
2. Crea o selecciona una carpeta para tu proyecto (ejemplo: "Programacion II")

![Abrir carpeta](imagenes/vscode-open-folder.jpg)

### Paso 2: Seleccionar la carpeta

Navega hasta la carpeta deseada y haz clic en "Seleccionar carpeta"

![Seleccionar carpeta](imagenes/vscode-select-folder.jpg)

### Paso 3: Crear un nuevo archivo

1. Haz clic en el icono de nuevo archivo en el explorador
2. O usa el menú "File" > "New File"

![Nuevo archivo](imagenes/vscode-new-file.jpg)

### Paso 4: Configurar IntelliSense (si es necesario)

Si aparece un mensaje sobre la configuración de IntelliSense:
1. Haz clic en "Configure IntelliSense"
2. Selecciona tu compilador (gcc.exe)
3. VS Code creará automáticamente un archivo `c_cpp_properties.json`

![Configurar IntelliSense](imagenes/vscode-configure-intellisense.jpg)

### Paso 5: Escribir tu primer programa

Crea un archivo llamado `HolaMundo.c` y escribe el siguiente código:

```c
#include <stdio.h>

int main(){
    printf("Hola Mundo!\n");
}
```

![Código Hola Mundo](imagenes/vscode-holamundo-code.jpg)

### Paso 6: Ejecutar el programa

1. Haz clic derecho en el archivo
2. Selecciona "Run Code" o presiona `Ctrl+Alt+N`

También puedes ver el archivo `tasks.json` que se genera automáticamente con la configuración del compilador.

![tasks.json](imagenes/vscode-tasks-json.jpg)

---

## Notas adicionales

### Pre-requisitos

C es un lenguaje compilado, lo que significa que el código fuente debe ser traducido (compilado) antes de poder ejecutarse en tu computadora. VS Code es solo un editor de texto, por lo que necesitarás instalar:

- **Compilador de C++**: Pre-instalado
- **Debugger de C++**: Pre-instalado

### Recursos adicionales

- [Documentación oficial de VS Code para C/C++](https://code.visualstudio.com/docs/languages/cpp)
- [Repositorio de la extensión C/C++](https://github.com/Microsoft/vscode-cpptools)
- [Documentación de MinGW](http://www.mingw.org/)

---

**Programación II - Universidad Nacional de Luján**
