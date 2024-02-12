#include <iostream>

using namespace std;

void Suma() {

cout << "\nEstructura general: \n";

cout << "\nA = [a b]  B = [e f]";
cout << "\n    [c d]      [g h]\n";
cout << "A + B = [a + e  b + f]"; 
cout << "\n        [c + g  d + h]\n";

int m, n, i, j;  // Numero de filas, numero de columnas, Variables para ciclo For

cout << "\nIntroduzca numero de filas para la matriz: ";
cin >> m;

cout << "\nIntroduzca numero de columnas para la matriz: ";
cin >> n;

float A[m][n], B[m][n], C[m][n]; // Declaramos las matrices con sus respectivas filas y columnas (A Y B)
                                 // Declaramos la matriz resultante de A y B (C)

if (m == n) { // ¿Hasta 3x3?

    cout << "\nIntroduzca los datos pertenecientes a la matriz A: " << endl;
    // Recorrido para llenar la matriz
        for (i = 0; i < m; i ++) // Cuando quiero recorrer una matriz completa se usa doble ciclo For
            for(j = 0; j < n; j ++){
            cout << "["<<i<<"]["<<j<<"]: ";
            cin >> A[i][j]; // Lo que el usuario teclee se guarda en la posicicion i y j. No m y n porque estas representan el tamano de la matriz
        }                  // i y j son las variables que se mueven a lo largo de las posiciones de la matriz
    
    cout << "\nIntroduzca los datos pertenecientes a la matriz B: " << endl;
        for (i = 0; i < m; i ++) 
            for(j = 0; j < n; j ++){
            cout << "["<<i<<"]["<<j<<"]: ";
            cin >> B[i][j];  
        }

    for (i = 0; i < m; i ++) // Operacion de suma
        for(j = 0; j < n; j ++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "\nLa matriz resultado es: \n" << endl;
        for (i = 0; i < m; i ++)  // Mostrar resultado
            for(j = 0; j < n; j++)
            cout << "["<<i<<"]["<<j<<"]: " << C[i][j] << endl;

            cout << "\nY su formato ideal es el siguiente: \n" << endl; 

            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    cout << C[i][j] << "\t"; // Usamos "\t" para tabular los elementos
                }
                    cout << endl; // Cambiar de línea después de cada fila
            }

} else 
    cout << "\nLa matriz no posee el mismo numero de filas que de columnas, no se puede realizar" << endl;        

} 

void Resta() {

cout << "\nEstructura general: \n";

cout << "\nA = [a b]  B = [e f]";
cout << "\n    [c d]      [g h]\n";
cout << "A + B = [a - e  b - f]"; 
cout << "\n        [c - g  d - h]\n";

int m, n, i, j; 

cout << "\nIntroduzca numero de filas para la matriz: ";
cin >> m;

cout << "\nIntroduzca numero de columnas para la matriz: ";
cin >> n;

float A[m][n], B[m][n], C[m][n]; 

if (m == n) { // Hasta 3x3

    cout << "\nIntroduzca los datos pertenecientes a la matriz A: " << endl;
        for (i = 0; i < m; i ++) 
            for(j = 0; j < n; j ++){
                cout << "["<<i<<"]["<<j<<"]: ";
                cin >> A[i][j];
            }
    
    cout << "\nIntroduzca los datos pertenecientes a la matriz B: " << endl;
        for (i = 0; i < m; i ++) 
            for(j = 0; j < n; j ++){
                cout << "["<<i<<"]["<<j<<"]: ";
                cin >> B[i][j];  
            }

    for (i = 0; i < m; i ++) // Operación de resta
        for(j = 0; j < n; j ++)
            C[i][j] = A[i][j] - B[i][j];

    cout << "\nLa matriz resultado es: " << endl;
        for (i = 0; i < m; i ++) 
            for(j = 0; j < n; j++)
                cout << "["<<i<<"]["<<j<<"]: " << C[i][j] << endl;

                cout << "\nY su formato ideal es el siguiente: \n" << endl; 

            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    cout << C[i][j] << "\t";
                }
                    cout << endl; 
            }

} else 
    cout << "\nLa matriz no posee el mismo numero de filas que de columnas, no se puede realizar" << endl;        

}

void ProductoPunto() {

cout << "\nEstructura general: \n";

cout << "\nA = [a b]  B = [e f]";
cout << "\n    [c d]      [g h]\n";
cout << "A + B = [a * e + b * g] + [a * f + b * h]"; 
cout << "\n        [c * e + d * g] + [c * f + d * h]\n";

int Fila_A, Columna_A, Fila_B, Columna_B, i, j, k; // El primer índice o elemento de C es i (matriz A), y el segundo es j (matriz B)

cout << "\nIntroduzca numero de filas para la matriz A: ";
cin >> Fila_A;

cout << "\nIntroduzca numero de columnas para la matriz A: ";
cin >> Columna_A;

cout << "\nIntroduzca numero de filas para la matriz B: ";
cin >> Fila_B;

cout << "\nIntroduzca numero de columnas para la matriz B: ";
cin >> Columna_B;

// Declaramos la matrices
int A[Fila_A][Columna_A], B[Fila_B][Columna_B], C[Fila_A][Columna_B]; // C es una combinacion de ambas matrices. Tiene las filas de A y las columnas de B
    
    if (Columna_A == Fila_B) { // El número de columnas de A debe ser igual al número de filas de B, de lo contrario, no se puede realizar la multiplicación

        cout << "\nIntroduzca los datos pertenecientes a la matriz A" << endl;
            for (i = 0; i < Fila_A; i ++)
                for (j = 0; j < Columna_A; j ++){
                    cout<<"["<<i<<"]["<<j<<"]: ";
                    cin >> A[i][j];
                }

        cout << "\nIntroduzca los datos pertenecientes a la matriz B" << endl;
            for (i = 0; i < Fila_B; i ++)
                for (j = 0; j < Columna_B; j ++){
                    cout<<"["<<i<<"]["<<j<<"]: ";
                    cin >> B[i][j];
                }

            // Cálculo matriz C = A * B
            for (i = 0; i < Fila_A; i ++) // i y j se mueven por cada elemento de C
                for (j = 0; j < Columna_B; j ++){ 

                    C[i][j] = 0; // Inicializamos lo que haya en la posición de C para no afectar el resultado final, con esto se va a sumar k
                    for (k = 0; k < Columna_A; k ++) // k agarra elemento por elemento de toda la fila de A y lo va a multiplicar por cada elemento de toda la columna de b
                        C[i][j] += A[i][k] * B[k][j];
                }

        cout << "\nLa matriz resultado es: " << endl;
            for (i = 0; i < Fila_A; i ++) // La matriz C (resultado) va a tener el número de filas de A y el número de columnas de B
                for (j = 0; j < Columna_B; j ++)
                    cout << "["<<i<<"]["<<j<<"]: " << C[i][j] << endl;

                    cout << "\nY su formato ideal es el siguiente: \n" << endl; 

                    for (i = 0; i < Fila_A; i++) {
                        for (j = 0; j < Columna_B; j++) {
                            cout << C[i][j] << "\t";
                        }
                            cout << endl;
                }

    // Si no se cumple la condición
    } else
        cout << "\nLa multiplicacion de matrices no puede llevarse a cabo, no se cumple la condición requerida " << endl; 

}

void ProductoEscalar() {

cout << "\nEstructura general: \n";

cout << "\nAlpha = Alpha  A = [a b]";
cout << "\n                   [c d]\n";
cout << "\nAlpha * A = [Alpha * a  Alpha * b]";
cout << "\n            [Alpha * c  Alpha * d]\n";
    
int Alpha, m, n, i, j;

cout << "\nIntroduzca el numero que representa Alpha: ";
cin >> Alpha,

cout << "\nIntroduzca numero de filas para la matriz A: ";
cin >> m;

cout << "\nIntroduzca numero de columnas para la matriz A: ";
cin >> n;

 float A[m][n], Resultado[m][n];

    if (m == n) { // Hasta 3x3

        cout << "\nIntroduzca los datos pertenecientes a la matriz A: \n" << endl;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++) {
                cout << "[" << i << "][" << j << "]: ";
                cin >> A[i][j];
            }

        // Realizar la operación de producto escalar
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                Resultado[i][j] = Alpha * A[i][j];

        // Mostrar la matriz resultante
        cout << "\nLa matriz resultado es: \n" << endl;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++)
                cout << "["<<i<<"]["<<j<<"]: " << Resultado[i][j] << endl;
            }

        cout << "\nY su formato ideal es el siguiente: \n" << endl; 

                for (i = 0; i < m; i++) {
                    for (j = 0; j < n; j++)
                        cout << Resultado[i][j] << "\t";
                        cout << endl;
            }

    } else {
        cout << "\nLa matriz no posee el mismo numero de filas que de columnas, no se puede realizar" << endl;
    }
}

int main() {
    int opcion;
    
    do {
        
        cout << "\n";
        cout << "=============================================================\n";
        cout << "| ¡Bienvenido a la Matrizneta! ¿Que operacion relizamos?: |\n";
        cout << "| Ecuaciones:                                               |\n";
        cout << "| 1. Suma                                                   |\n";
        cout << "| 2. Resta                                                  |\n";
        cout << "| 3. Producto Punto                                         |\n";
        cout << "| 4. Producto Escalar                                       |\n";
        cout << "| 5. Salir (Tengo miedo).                                   |\n";
        cout << "=============================================================\n";
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                Suma();
                break;

            case 2:
                Resta();
                break;

            case 3:
                ProductoPunto();
                break;

            case 4:
                ProductoEscalar();
                break;

            case 5:
                cout << "\nGracias por usar, ¡Nos vemos!" << endl;
                break;
            default:
                cout << "\nOpcion incorrecta. Elija una opciopn valida." << endl;
                break;
        }
        
    } while (opcion != 5);
    
    return 0;
}

