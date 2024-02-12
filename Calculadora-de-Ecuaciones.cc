#include <iostream>

using namespace std;

// (ax + b = c)
void Ecuacion_Tipo_Uno() {
    float a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    
    if (a != 0 && b != 0 && c != 0) {
        cout << "\n";
        cout << a << "x + " << b << " = " << c << endl;
        cout << a << "x = " << c << " - " << b << endl;
        cout << a << "x = " << c - b << endl;
        cout << "x = " << (c - b) << " / " << a << endl;
        float x = (c - b) / a;
        cout << "x = " << x << endl;
    } else {
        cout << "\nEl numero 0 no es valido en esta ecuacion" << endl;
    }
}

// (ax + b = cx + d)
void Ecuacion_Tipo_Dos() {
    float a, b, c, d;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    
    if (a != 0 && b != 0 && c != 0 && d != 0) {
        cout << "\n";
        cout << a << "x + " << b << " = " << c << "x" << " + " << d << endl;
        cout << a << "x - " << c << "x" << " = " << d << " - " << b << endl;
        cout << a << "x - " << c << "x" << " = " << (d - b) << endl;
        cout << (a - c) << "x" << " = " << (d - b) << endl;
        cout << "x = " << (d - b) << " / " << (a - c) << endl; 
        float x = (d - b) / (a - c);
        cout << "x = " << x << endl;
    } else {
        cout << "\nEl numero 0 no es valido en esta ecuacion" << endl;
    }
}

// (ax + b / c = dx + e / f)
void Ecuacion_Tipo_Tres() {
    float a, b, c, d, e, f;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << " Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    cout << "Ingrese el valor de e: ";
    cin >> e;
    cout << "Ingrese el valor de f: ";
    cin >> f;
    
    if (a != 0 && b != 0 && c != 0 && d != 0 && e != 0 && f != 0) {
        cout << "\n";
        cout << a << "x + " << b << " / " << c << " = " << d << "x + " << e << " / " << f << endl;
        cout << "(" << a << "x + " << b << ")" << " * " << f << " = " << "(" << d << "x + " << e << ")" << " * " << c << endl;
        
        a = (a * f);
        b = (b * f);
        d = (d * c);
        e = (e * c);
        
        cout << a << "x + " << b << " = " << d << "x + " << e << endl;
        cout << a << "x - " << d << " = " << e << " - " << b << endl;
        cout << (a - d) << "x = " << (e - b) << endl;
        cout << "x = " << (e - b) << " / " << (a - d) << endl;
        float x = (e - b) / (a - d);
        cout << "x = " << x << endl;
    } else {
        cout << "\nEl numero 0 no es valido en esta ecuacion" << endl;
    }
}

// (ax + b / c + d = ex + f / g + h)
void Ecuacion_Tipo_Cuatro() {
    float a, b, c, d, e, f, g, h, i, j, k;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    cout << "Ingrese el valor de e: ";
    cin >> e;
    cout << "Ingrese el valor de f: ";
    cin >> f;
    cout << "Ingrese el valor de g: ";
    cin >> g;
    cout << "Ingrese el valor de h: ";
    cin >> h;
    
    if (a != 0 && b != 0 && c != 0 && d != 0 && e != 0 && f != 0 && g != 0 && h != 0) {
        cout << "\n";
        cout << a << "x + " << b << " / " << c << " + " << d << " = " << e << "x + " << f << " / " << g << " + " << h << endl;
        cout << a << "x + " << b << " / " << c << " = " << e << "x + " << f << " / " << g << " - " << d << " + " << h << endl;
        
        i = (h - d);
        
        cout << a << "x + " << b << " / " << c << " = " << e << "x + " << f << " / " << g << " + " << i << endl;
        cout << a << "x + " << b << " / " << c << " = " << e << "x + " << f << " + " << "(" << g << " * " << i << ")" << " / " << g << endl;
        
        j = (g * i);
        
        cout << a << "x + " << b << " / " << c << " = " << e << "x + " << f << " + " << j << " / " << g << endl;
        
        k = (f + j);
        
        cout << a << "x + " << b << " / " << c << " = " << e << "x + " << k << " / " << g << endl;
        cout << "(" << a << "x + " << b << ")" << " * " << g << " = " << "(" << e << "x + " << k << ")" << " * " << c << endl;
        
        a = (a * g);
        b = (b * g);
        e = (e * c);
        k = (k * c);
        
        cout << a << "x + " << b << " = " << e << "x + " << k << endl;
        cout << a << "x - " << e << "x" << " = " << k << " - " << b << endl;
        cout << (a - e) << "x = " << (k - b) << endl;
        cout << "x = " << (k - b) << " / " << (a - e) << endl;
        
        float x = (k - b) / (a - e);
        cout << "x = " << x << endl;
    } else {
        cout << "\nEl número 0 no es válido en esta ecuación." << endl;
    }
}

int main() {
    int opcion;
    
    do {
        
        cout << "=================================================================\n";
        cout << "| ¡Bienvenido! ¿Que ecuacion de primer grado desea realizar?:   |\n";
        cout << "| Ecuaciones:                                                   |\n";
        cout << "| 1. Tipo uno ax + b = c                                        |\n";
        cout << "| 2. Tipo dos ax + b = cx + d                                   |\n";
        cout << "| 3. Tipo tres (ax + b) / c = (dx + e) / f                      |\n";
        cout << "| 4. Tipo cuatro (ax + b) / c + d = (ex + f) / g + h            |\n";
        cout << "| 5. Salir (Tengo miedo).                                       |\n";
        cout << "=================================================================\n";
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                Ecuacion_Tipo_Uno();
                break;

            case 2:
                Ecuacion_Tipo_Dos();
                break;

            case 3:
                Ecuacion_Tipo_Tres();
                break;

            case 4:
                Ecuacion_Tipo_Cuatro();
                break;

            case 5:
                cout << "Gracias por usar, ¡Nos vemos!" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Elija una opciopn valida." << endl;
                break;
        }
        
    } while (opcion != 5);
    
    return 0;
}