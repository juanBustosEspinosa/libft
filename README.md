# libft
*Este proyecto ha sido creado como parte del currículo de 42 por [Juan Bustos Espinosa / jbustos-].*

## Descripción

**Libft** es el primer proyecto individual del currículo de 42. El objetivo principal de este proyecto es recrear desde cero una serie de funciones de la librería estándar de C (`libc`), así como desarrollar funciones adicionales de utilidad para el manejo de memoria, cadenas de caracteres y estructuras de datos como listas enlazadas.

Al completar este proyecto, se construye una librería estática (`libft.a`) que servirá como base de código fundamental para los siguientes proyectos del currículo (como `get_next_line`, `ft_printf` o `so_long`).

---

## Descripción detallada de la librería

La librería está dividida en tres bloques principales:

### 1. Funciones de la Libc (`libc`)
Reimplementaciones de las funciones estándar de C respetando sus comportamientos originales (`man`):
* **Manejo de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Manejo de cadenas:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`.
* **Manejo de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
* **Conversiones:** `ft_atoi`.

### 2. Funciones adicionales
Funciones no incluidas en la `libc` estándar o con un enfoque simplificado:
* **Generación/Modificación de cadenas:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.
* **Escritura en File Descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Funciones Listas enlazadas 
Funciones para la manipulación y gestión de la estructura de datos `t_list`:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;