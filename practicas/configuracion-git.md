# Guía de Configuración de Git

> **Nota importante**: En Windows, `ssh-keygen` viene incluido con Git y también está disponible nativamente en PowerShell (Windows 10/11). **No necesitas instalar nada adicional**.

## 1. Instalación de Git

### Windows

1. Descarga el instalador desde [git-scm.com](https://git-scm.com)
2. Ejecuta el instalador `.exe`
3. En el asistente, acepta las opciones por defecto (recomendado)
4. **Importante**: Asegúrate de que "Git Bash Here" y "Git Credential Manager" estén marcados
5. Completa la instalación

**Verificar instalación:**
- Abre **PowerShell** o **Git Bash** y ejecuta:
```bash
git --version
ssh-keygen --version
```

Ambos comandos deberían funcionar sin errores.

### Linux
```bash
# Ubuntu/Debian
sudo apt-get install git

# Fedora
sudo dnf install git
```

## 2. Configuración Inicial de Git

Configura tu identidad en Git (necesario para hacer commits):

```bash
git config --global user.name "Tu Nombre"
git config --global user.email "tu.email@ejemplo.com"
```

Verifica la configuración:
```bash
git config --global --list
```

## 3. Autenticación con GitHub

### Opción A: SSH (Recomendado)

#### En Windows

**Paso 1: Abre una terminal**

Elige una de estas opciones:
- **Opción 1**: Git Bash (clic derecho > "Git Bash Here" en cualquier carpeta)
- **Opción 2**: PowerShell (busca en el menú Inicio)
- **Opción 3**: Terminal de Windows (busca en el menú Inicio)

**Paso 2: Generar clave SSH**

Ejecuta en tu terminal elegida:
```bash
ssh-keygen -t ed25519 -C "tu.email@ejemplo.com"
```

El sistema te pedirá:
1. **File location**: Presiona `Enter` para aceptar la ubicación por defecto (`C:\Users\tu-usuario\.ssh\id_ed25519`)
2. **Passphrase**: Ingresa una contraseña segura (o presiona `Enter` sin contraseña)
3. **Confirm passphrase**: Repite la contraseña

Deberías ver un output como:
```
Your identification has been saved in C:\Users\tu-usuario\.ssh\id_ed25519
Your public key has been saved in C:\Users\tu-usuario\.ssh\id_ed25519.pub
```

**Paso 3: Agregar clave al ssh-agent (Windows)**

En **PowerShell** (ejecuta como Administrador):
```powershell
# Inicia el ssh-agent
Get-Service ssh-agent | Set-Service -StartupType Automatic
Start-Service ssh-agent

# Agrega tu clave privada
ssh-add C:\Users\tu-usuario\.ssh\id_ed25519
```

O si usas **Git Bash**, ejecuta:
```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

**Paso 4: Copiar clave pública y agregarla a GitHub**

Abre un editor de texto (Bloc de notas) y abre:
```
C:\Users\tu-usuario\.ssh\id_ed25519.pub
```

O en la terminal, ejecuta:
```bash
cat ~/.ssh/id_ed25519.pub
```

Copia el contenido completo.

Ahora:
- Ve a [github.com/settings/keys](https://github.com/settings/keys)
- Click en "New SSH key"
- Dale un nombre descriptivo (ej: "Mi Laptop")
- Pega el contenido en el campo "Key"
- Haz click en "Add SSH key"

**Paso 5: Probar conexión**

En tu terminal, ejecuta:
```bash
ssh -T git@github.com
```

Deberías ver:
```
Hi tu-usuario! You've successfully authenticated, but GitHub does not provide shell access.
```

#### En Linux

```bash
ssh-keygen -t ed25519 -C "tu.email@ejemplo.com"
```

Presiona Enter para aceptar la ubicación por defecto y establece una contraseña.

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

Copia y agrega la clave pública:
```bash
cat ~/.ssh/id_ed25519.pub
```

- Ve a [github.com/settings/keys](https://github.com/settings/keys)
- Click en "New SSH key"
- Pega el contenido copiado
- Guarda

Prueba la conexión:
```bash
ssh -T git@github.com
```

### Opción B: Token de Acceso Personal (PAT)

- Ve a [github.com/settings/tokens](https://github.com/settings/tokens)
- Click en "Generate new token"
- Selecciona permisos: `repo`, `read:user`
- Copia el token generado
- Usa el token como contraseña al hacer `git push`

## 4. Instalación de GitHub Desktop (Opcional)

Para una interfaz gráfica más amigable, descarga [GitHub Desktop](https://desktop.github.com).

Al abrir por primera vez, inicia sesión con tu cuenta de GitHub y sigue los pasos para vincular tus repositorios.

## 5. Integración con VS Code

### Extensiones Recomendadas

1. **Git Graph** (Recomendado)
   - Publisher: mhutchie
   - Visualiza el árbol de commits de forma clara

2. **GitLens** (Opcional)
   - Publisher: Eric Amodio
   - Muestra quién modificó cada línea y cuándo

### Configurar Git en VS Code

VS Code detecta automáticamente Git. Para verificar:

1. Abre VS Code
2. Ve a **Preferences > Settings**
3. Busca "Git: Enabled" y asegúrate que esté marcado
4. Busca "Git: Path" si necesitas especificar una ruta personalizada

### Usar Git en VS Code

**Panel de Control de Versiones (Sidebar):**
- Click en el ícono de Git (ramificación) en la barra lateral izquierda
- Aquí verás todos los cambios sin guardar en el repositorio

**Operaciones Comunes:**

- **Ver cambios**: Haz click en un archivo para ver diferencias
- **Stage (preparar cambios)**: Click en "+" junto a archivos individuales, o click en "+" al lado de "Changes" para stagear todo
- **Commit**: Escribe el mensaje en el campo de texto y presiona Ctrl+Enter
- **Push**: Usa el botón "↑" en la esquina inferior derecha
- **Pull**: Usa el botón "↓" en la esquina inferior derecha
- **Cambiar rama**: Click en el nombre de la rama (esquina inferior izquierda)

**Terminal Integrada:**
- Presiona Ctrl+` (backtick) o ve a **Terminal > New Terminal**
- Aquí puedes ejecutar comandos de Git directamente

## 6. Primeros Pasos con un Repositorio

```bash
# Clonar un repositorio (con SSH)
git clone git@github.com:usuario/repositorio.git

# O si usas HTTPS/token
git clone https://github.com/usuario/repositorio.git

# Entrar al directorio
cd repositorio

# Ver estado del repositorio
git status

# Ver todas las ramas disponibles
git branch -a

# Cambiar a una rama específica
git checkout nombre-rama

# Ver historial de commits
git log --oneline

# Ver los cambios desde el último commit
git diff

# Ver qué cambios están preparados (staged)
git diff --staged
```

## 7. Flujo de Trabajo Típico

```bash
# 1. Actualizar tu rama local
git pull origin main

# 2. Hacer cambios en tus archivos

# 3. Ver qué cambió
git status

# 4. Preparar cambios para commit
git add archivo.txt
# O preparar todos los cambios
git add .

# 5. Crear un commit
git commit -m "Descripción clara del cambio"

# 6. Enviar cambios al servidor
git push origin main
```

## 8. Resolución de Problemas Comunes

### Windows - "ssh-keygen command not found"
- Verifica que Git está instalado correctamente
- Reinicia PowerShell/Git Bash después de instalar Git
- Si el problema persiste, usa Git Bash en lugar de PowerShell

### Windows - ssh-agent no inicia
En PowerShell como Administrador:
```powershell
Get-Service ssh-agent | Set-Service -StartupType Automatic
Start-Service ssh-agent
```

Si aún no funciona, usa Git Bash:
```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

### "Permission denied (publickey)"
- Verifica que la clave SSH está agregada: 
  - En PowerShell: `ssh-add -L`
  - En Git Bash: `ssh-add -L`
- Revisa que la clave pública está agregada en [github.com/settings/keys](https://github.com/settings/keys)
- Intenta agregar la clave nuevamente: `ssh-add ~/.ssh/id_ed25519`
- **Windows**: Asegúrate de que ssh-agent está corriendo: `Get-Service ssh-agent`

### VS Code no detecta Git
- Asegúrate que Git está instalado: `git --version`
- Verifica que está en el PATH de tu sistema
- Reinicia VS Code
- **Windows**: A veces Git Bash funciona mejor que PowerShell como terminal integrada en VS Code

### "fatal: not a git repository"
- Asegúrate de estar dentro de una carpeta con `.git`
- Abre la carpeta raíz del proyecto en VS Code (File > Open Folder)

### Cambios no aparecen en VS Code
- Actualiza el repositorio: `git fetch`
- Verifica que tienes permisos de acceso
- Revisa que hay un `.git` en la raíz del proyecto

### Error al hacer push: "rejected"
- Primero haz pull: `git pull origin main`
- Resuelve los conflictos si los hay
- Luego intenta push nuevamente

---

## Recursos Útiles

- [Documentación oficial de Git](https://git-scm.com/doc)
- [Visualizador de comandos Git](https://git-school.github.io/visualizing-git/)

¿Preguntas o problemas? Consulta con tu docente o revisa los recursos arriba.

