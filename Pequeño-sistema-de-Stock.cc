/* Codigo sobre un sistema de inventario. Se intenta realizar un ABM de productos dando el nombre del mismo, su ID, las cantidades, la marca, el tamaño y el precio. */

#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

class Producto{ // Clase
    public:       // Encapsulamiento: Puede ser privado o público
    int id_producto, cantidad, precio; // Atributos
    string marca, tamano_medida, nombre;
    void cargar_producto();   // Metodos
    void cargar_id();
    void cargar_cantidad();
    void cargar_marca();
    void cargar_tamano();
    void cargar_precio();
    void mostrar_datos();
    void modificar_producto();
    void mostrar_datos_modificados();
    void eliminar_producto();
    bool producto_cargado = false; // Booleano para hacer un seguimiento de si el producto se cargó o no, inicializado en falso como "no cargado"
};

void Producto::cargar_producto(){
      cout << "Ingrese el nombre del producto: ";
      cin >> nombre;
      producto_cargado = true; // Cuando se carga un producto en la opción 1 del Menú se vuelve TRUE, así como en las demás opciones se verifica que siga siendo así. 
}                               // De lo contrario no lleva a cabo la elección

void Producto::cargar_id(){
      cout << "Ingrese el ID del producto: ";
      cin >> id_producto;
}

void Producto::cargar_cantidad(){
      cout << "Ingrese las cantidades del producto: ";
      cin >> cantidad;
}

void Producto::cargar_marca(){
      cout << "Ingrese la marca del producto: ";
      cin >> marca;
}

void Producto::cargar_tamano(){
      cout << "Ingrese el tamano/medida/peso del producto: ";
      cin >> tamano_medida;
}

void Producto::cargar_precio(){
      cout << "Ingrese el precio del producto: ";
      cin >> precio;
}

void Producto::mostrar_datos(){
    cout << "\nNombre:\n" << nombre << endl;
    cout << "ID de producto:\n" << id_producto << endl;
    cout << "Cantidad:\n" << cantidad << endl;
    cout << "Marca:\n" << marca << endl;;
    cout << "Medida:\n" << tamano_medida << endl;
    cout << "Precio: $\n" << precio << endl;
}

void Producto::modificar_producto() {
    int eleccion;
    bool modificado = false; // Indica si se realizó una modificación en los datos del producto durante la presente función
                                // Si se hace una modificación, el valor se vuelve TRUE
    cout << "\n¿Que desea modificar?\n";
    cout << "1. Nombre del producto.\n";
    cout << "2. ID del producto.\n";
    cout << "3. Cantidad del producto.\n";
    cout << "4. Marca del producto.\n";
    cout << "5. Tamano/medida/peso del producto.\n";
    cout << "6. Precio del producto.\n";
    cout << "\nOpcion: ";
    cin >> eleccion;

    switch (eleccion) {
        case 1:
            cout << "\nIngrese el nuevo nombre del producto: ";
            cin >> nombre;
            modificado = true;
            break;

        case 2:
            cout << "\nIngrese el nuevo ID del producto: ";
            cin >> id_producto;
            modificado = true;
            break;

        case 3:
            cout << "\nIngrese la nueva cantidad del producto: ";
            cin >> cantidad;
            modificado = true;
            break;

        case 4:
            cout << "\nIngrese la nueva marca del producto: ";
            cin >> marca;
            modificado = true;
            break;

        case 5:
            cout << "\nIngrese el nuevo tamano/medida/peso del producto: ";
            cin >> tamano_medida;
            modificado = true;
            break;

        case 6:
            cout << "\nIngrese el nuevo precio del producto: ";
            cin >> precio;
            modificado = true;
            break;

        default: // Si ninguna de las opciones coincide con el valor proporcionado, pasa esto
            cout << "\nOpcion invalida. No se realizaron modificaciones.\n";
            return;
    }

    if (modificado) { // Respecto a la presente variable, en caso de ser TRUE o FALSE, salta el mensaje
        cout << "\nEl producto fue modificado.\n";
    } else {
        cout << "\nNo se realizo ninguna modificación.\n";
    }
}

void Producto::mostrar_datos_modificados() {
    cout << "\nDatos modificados del producto:\n";
    mostrar_datos();
}

void Producto::eliminar_producto() {
    producto_cargado = false; // Al elegir la opción 3 del Menú, el producto se borra abandonando el estado TRUE y volviéndose FALSE
    cout << "\nEl producto fue eliminado.\n";
}

void guardar_producto_binario(const Producto & producto) { // Permite pasar un objeto Producto como argumento a la función sin modificarlo.
    ofstream almacen("stock.bin", ios::app); // "ofstream" es para crear el archivo binario. Lo que está entre comillas es el nombre
    if (almacen.is_open()) {
        almacen << producto.nombre << "-"; // Se escribe el atributo "nombre" del objeto "Producto" en el archivo binario
        almacen << producto.id_producto << "-";
        almacen << producto.cantidad << "-";
        almacen << producto.marca << "-";
        almacen << producto.tamano_medida << "-";
        almacen << producto.precio << endl;
        almacen.close();
        cout << "El producto se guardó en el archivo." << endl;
    } else {
        cout << "Error al concretar el archivo." << endl;
    }
}

// void guardar_producto_binario(const Producto& producto) {
//    ofstream almacen("stock.bin", ios::binary);
//    if (almacen.is_open()) {
//        almacen.write(reinterpret_cast<const char*>(&producto), sizeof(producto));
//        almacen.close();
//        cout << "El producto se guardó en el archivo." << endl;
//    } else {
//        cout << "Error al concretar el archivo." << endl;
//    }
//}

int main(){
	
      int opcion; // Se utiliza para almacenar la eleccion del usuario

      Producto papeleria; // "papeleria" es el objeto de la clase "Producto", destinado a realizar las operaciones relacionadas al mismo
      
      do{  // El do-while se utiliza para repetir el menu hasta que el usuario elija la opcion "Salir"
            cout << "\n";
            cout << "=============================\n";
            cout << "| Bienvenido! Puede elegir: |\n";
            cout << "| Menu:                     |\n";
            cout << "| 1. Agregar producto.      |\n";
            cout << "| 2. Modificar producto.    |\n";
            cout << "| 3. Eliminar producto.     |\n";
            cout << "| 4. Guardar producto.      |\n";
            cout << "| 5. Salir.                 |\n";
            cout << "=============================\n";
            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            
            switch (opcion) {
            case 1:
                papeleria.cargar_producto();
                papeleria.cargar_id();
                papeleria.cargar_cantidad();
                papeleria.cargar_marca();
                papeleria.cargar_tamano();
                papeleria.cargar_precio();
                papeleria.mostrar_datos();
                cout << "\nEl producto fue agregado.\n";
                break;

            case 2:
                if (papeleria.producto_cargado) { // Acá como en los próximos casos, se verifica que efectivamente haya un producto cargado dentro del objeto "papelería"
                    papeleria.modificar_producto();
                    papeleria.mostrar_datos_modificados(); 
                } else {
                    cout << "\nNo se cargo ningun producto. Agrega uno primero.\n";
                }
                break;

            case 3:
                if (papeleria.producto_cargado) {
                    papeleria.eliminar_producto();
                } else {
                    cout << "\nNo se cargo ningun producto. Agrega uno primero.\n";
                }
                break;

            case 4:
                if (papeleria.producto_cargado) {
                    guardar_producto_binario(papeleria);
                } else {
                    cout << "\nNo se cargo ningun producto. Agrega uno primero.\n";
                }
                break;

            case 5:
                cout << "\nSaliendo. Gracias por probar!\n";
                break;

            default:
                cout << "\nOpcion erronea. Ingresa una opcion correcta.\n";
                break;
        }

    } while (opcion != 5);

    return 0;
}