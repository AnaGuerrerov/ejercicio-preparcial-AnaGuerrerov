#include "ejercicioss.h"
#include <iostream>
using namespace std;

// 1 Calificacion notas
// Se reciben las 8 calificaciones
void Ejercicio1() {
    float calificaciones[8];//Uso un arreglo para guardar las notas
    int aprobados=0, reprobados=0, excelentes=0; //Inicio los contadores
    float sumanotas=0;// Contador para el promedio

    for (int i=0;i<8;i++) { //condicion en caso de que se cumpla
        cout<<" Ingrese las calificaciones " << (i+1) << ":";
        cin>>calificaciones[i]; //Se guarda la calificacion
        sumanotas+=calificaciones[i];

        if (calificaciones[i] >=3.0)aprobados++; // Cada que se cumpla se agrega al contador

        else reprobados++;

        if (calificaciones[i]>=4.5)excelentes++;
    }

    //Mostrar los resultados
    cout << "\nLos resultados son:\n";
    cout << "Aprobados: " <<aprobados <<endl;
    cout << "Reprobados: " <<reprobados <<endl;
    cout << "Excelentes: " <<excelentes <<endl;
    cout << "El promedio es: " << (sumanotas/8) <<endl;
}

//2 Calificacion de servicio
void Ejercicio2() {
    int edad, totalEncuestados=0, Jovenes=0, CaliPerfectas=0; //Se inician los contadores
    float calificacion, SumaCali=0;

    cout <<"Ingrese la edad, si desea finalizar ponga 0: ";
    cin >> edad;

    // El ciclo se repite hasta que sea 0
    while (edad!= 0){
        cout << " Ingrese la calificacion de la pelicula (1-10): ";
        cin >> calificacion;

        totalEncuestados++;
        SumaCali+=calificacion;

        //Condicion para jovenes
        if (edad>=18 && edad<=25)
            Jovenes++;

        //Calificaciones perfectas
        if (calificacion == 10)
            CaliPerfectas++;

        //Para continuar con el ciclo
        cout << "Ingrese la siguiente edad (si desea finalizar ponga 0) : ";
        cin >> edad;
    }

    // Se muestra si hubo encuestados
    if (totalEncuestados>0) {
        cout << "\nResultados de la encuesta:\n";
        cout << "Cantidad total de personas: " <<totalEncuestados << endl;
        cout << "El promedio es de: " << (SumaCali / totalEncuestados) << endl;
        cout << "Cantidad de Jóvenes (18-25): " << Jovenes << endl;
        cout << "Calificaciones perfectas (10): " << CaliPerfectas << endl;
    }
    else{
        cout << "No se registro ninguna calificacion" << endl;
    }
}

// 3 Ascendente o no
void Ejercicio3() {
    int cantidad; //Debe ser entero
    cout << "Ingrese la cantidad de numeros: ";
    cin >>cantidad;

    if (cantidad<=1) {
        cout << "Se necesitan al menos 2 numeros" << endl;
        return;
    }

    int anterior, actual;
    bool es_ascendente =true; //Hasta que se demuestre lo contrario

    cout << "Número1: ";
    cin >> anterior;

    // Se compara el numero actual con el anterior
    for (int i =2; i<=cantidad; i++) {
        cout << "Número " << i << ": ";
        cin >> actual;

        if (actual <= anterior)
            es_ascendente = false;
        anterior=actual;
    }
    cout << "\nEl resultado es: ";
    if (es_ascendente) cout << "Es ascendente " << endl;
    else cout << "No es ascendente" << endl;
}

//4 Descuento por unidades

void Ejercicio4() {
    float precioUnitario;
    int cantidadunidades;

    cout << "Ingrese el precio unitario: ";
    cin >> precioUnitario;
    cout << "Ingrese la Cantidad de unidades: ";
    cin >> cantidadunidades;

    float descuento=0;

    if (cantidadunidades >= 11 && cantidadunidades <=20)
        descuento=0.05;
    else if (cantidadunidades>= 21 && cantidadunidades <=50)
        descuento=0.10;
    else if (cantidadunidades >50)
        descuento=0.15;

    //Se calcula el total con el descuento
    float totalPagar = precioUnitario * cantidadunidades * (1-descuento);
    cout << "Valor total a pagar es: " << totalPagar << endl;
}

//5 Se repite o no
void Ejercicio5() {
    string palabra;
    cout <<"Ingrese una palabra en minuscula: ";
    cin >> palabra;

    bool encontrado=false;

    // Se recorre cada letra para ver si se repite
    for (int i= 0; i<palabra.length();i++) {
        char letra= palabra[i];
        bool repite =false;

        //se recorre la palabra
        for (int j = 0; j < palabra.length(); j++) {
            if (i!= j && palabra[j] == letra) {
                repite = true;
                break;
            }
        }

        // Si no se repite, la muestra y termina
        if (!repite) {
            cout << "El primer caracter que no se repite es: " << letra << endl;
            encontrado= true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Todas las letras se repiten" << endl;
    }
}
//6 Fibonacci
void Ejercicio6() {
    int cantidad;
    cout << "Ingrese el numero: ";
    cin >> cantidad;

    int primero= 0, segundo= 1, siguiente;

    cout << "La Serie es: ";
    for (int i = 0; i < cantidad; i++) {
        cout << primero << " ";
        siguiente = primero+segundo;
        primero=segundo;
        segundo=siguiente;
    }
    cout << endl;
}