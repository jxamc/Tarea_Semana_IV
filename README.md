# Tarea Semana IV - Lista Enlazada de Productos

Nombre: Julio Cesar Xam  
Carné: 9941-24-8897  
Sección: Programación 3  


Este programa simula el registro temporal de productos utilizando una lista simplemente enlazada

Cada producto guarda tres datos:
- Código
- Nombre
- Precio

El programa crea 4 nodos dinámicamente usando memoria dinámica (`new`).  
Luego pide al usuario que ingrese la información de cada producto.  

Los nodos se enlazan manualmente en el orden en que se ingresan, formando una lista enlazada.

Después, se recorre la lista usando un puntero auxiliar (sin perder la referencia del primer nodo) para mostrar todos los productos en pantalla y calcular el total acumulado de los precios.

Al finalizar, se libera correctamente la memoria utilizando `delete` para evitar fugas de memoria.

