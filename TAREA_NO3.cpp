#include <iostream>
#include <string>

using namespace std;

struct Producto {
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto producto;
    Nodo* siguiente;
};

int main() {

    cout << "Nombre: Julio Xam" << endl << endl;

    Nodo* inicio = nullptr;
    Nodo* nuevoNodo = nullptr;
    Nodo* recorrido = nullptr;

    for (int i = 1; i <= 4; i++) {

        nuevoNodo = new Nodo();
        nuevoNodo->siguiente = nullptr;

        cout << "Ingrese los datos del producto " << i << endl;

        cout << "Codigo: ";
        cin >> nuevoNodo->producto.codigo;

        cin.ignore();
        cout << "Nombre: ";
        getline(cin, nuevoNodo->producto.nombre);

        cout << "Precio: ";
        cin >> nuevoNodo->producto.precio;

        cout << "------------------------" << endl;

        if (inicio == nullptr) {
            inicio = nuevoNodo;
        } else {
            recorrido = inicio;
            while (recorrido->siguiente != nullptr) {
                recorrido = recorrido->siguiente;
            }
            recorrido->siguiente = nuevoNodo;
        }
    }

    cout << endl << "===== PRODUCTOS INGRESADOS =====" << endl;

    double sumaTotal = 0;
    recorrido = inicio;

    while (recorrido != nullptr) {

        cout << endl;
        cout << "Codigo: " << recorrido->producto.codigo << endl;
        cout << "Nombre: " << recorrido->producto.nombre << endl;
        cout << "Precio: Q" << recorrido->producto.precio << endl;
        cout << "------------------------" << endl;

        sumaTotal += recorrido->producto.precio;
        recorrido = recorrido->siguiente;
    }

    cout << endl << "Total acumulado: Q" << sumaTotal << endl;

    recorrido = inicio;
    Nodo* aux;

    while (recorrido != nullptr) {
        aux = recorrido;
        recorrido = recorrido->siguiente;
        delete aux;
    }

    inicio = nullptr;

    return 0;
}