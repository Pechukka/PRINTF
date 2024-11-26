# PRINTF

![printf](https://img.shields.io/badge/printf-42Malaga-blue)

## 📚 Descripción

**PRINTF** es un proyecto de la escuela 42 que consiste en la implementación de una versión personalizada de la función `printf` en C. Esta función permite formatear y mostrar datos en la salida estándar, similar a la función `printf` de la biblioteca estándar de C. El objetivo del proyecto es profundizar en el conocimiento del lenguaje C, la gestión de argumentos variables y la manipulación de cadenas y números.

## 📂 Contenido

El proyecto FT_PRINTF incluye los siguientes archivos:

### 📄 Archivos del Proyecto


- [`ft_printf.h`](ft_printf.h) - Archivo de cabecera con las declaraciones de funciones y las inclusiones necesarias.
- [`ft_printf.c`](printf_clean/ft_printf.c) - Implementación de la función principal `ft_printf`.
- [`ft_putchar.c`](printf_clean/ft_putchar.c) - Función para escribir un carácter en la salida estándar.
- [`ft_putstr.c`](printf_clean/ft_putstr.c) - Función para escribir una cadena en la salida estándar.
- [`ft_strlen.c`](printf_clean/ft_strlen.c) - Función para calcular la longitud de una cadena.
- [`ft_putptr.c`](printf_clean/ft_putptr.c) - Función para escribir un puntero en formato hexadecimal.
- [`ft_putnbr.c`](printf_clean/ft_putnbr.c) - Función para escribir un número entero en la salida estándar.
- [`ft_putunsigned.c`](printf_clean/ft_putunsigned.c) - Función para escribir un número entero sin signo en la salida estándar.
- [`ft_puthex.c`](printf_clean/ft_puthex.c) - Función para escribir un número en formato hexadecimal.

## 🛠️ Instalación

Para compilar la biblioteca, simplemente clona este repositorio y ejecuta `make`:

## 🚀 Uso

Incluye el archivo de cabecera `ft_printf.h` en tu proyecto y enlaza la biblioteca `libftprintf.a` durante la compilación:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hola, %s!\n", "mundo");
    return 0;
}
```

## 🤝 Contribuciones

Las contribuciones son bienvenidas. Si encuentras algún error o tienes alguna mejora, por favor abre un issue o envía un pull request.

## 📄 Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo [`LICENSE`](LICENSE) para más detalles.

## 📧 Contacto

Para cualquier consulta, puedes contactarme en [eliaspm05@gmail.com](mailto:eliaspm05@gmail.com).

---

¡Gracias por visitar mi proyecto FT_PRINTF!