[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Trabajo Práctico 1 - Lenguaje C y Git

## Ejercicio 2

### a) Investigación sobre el archivo `.gitignore`

**¿Por qué es conveniente incluirlo?**  
El archivo `.gitignore` es útil porque permite **excluir archivos o carpetas** que no queremos subir al repositorio, como archivos temporales, binarios, archivos de configuración local, etc. Esto mantiene el repositorio más limpio y evita compartir archivos innecesarios o privados.

**¿Cuándo se debe hacer?**  
El `.gitignore` se debe crear al **inicio del proyecto**, antes de hacer los primeros commits, para asegurarse de que los archivos que deben ignorarse nunca lleguen al repositorio.

**¿Cómo configuraría el archivo `.gitignore`?**  
Se configura agregando el nombre del archivo o carpeta que se quiere ignorar, por ejemplo:
ignorado.txt # Ignora un archivo específico
_.log # Ignora todos los archivos con extensión .log
build/ # Ignora una carpeta completa
_.exe # Ignora archivos ejecutables

### Preguntas sobre punteros

Los puntos 2 y 3 del inciso e) dan el mismo resultado porque ambos muestran la dirección de memoria de la variable `numero`.

En el punto 4, se muestra la dirección de memoria del puntero en sí, que es distinta, porque es una variable diferente almacenada en otra posición.

Esto demuestra cómo los punteros almacenan direcciones de otras variables.
