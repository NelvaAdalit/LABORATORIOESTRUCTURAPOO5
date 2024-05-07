#include "pch.h"

#include "ClassProfesores.h"


 // Usamos el espacio de nombres donde se encuentra la clase profesor

// Constructor por defecto
Clasesdeprofesores::profesor::profesor() {
    identificador = "";
    nombre = "";
    apellido = "";
    edad = 0;
    sexo = "masculino";
    celular =0 ;
    direccion = "";
    fecha_ingreso = "01/1990";
    categoria = "";
    salario = 1000;
    titulo_universitario = "igeneria de sistemas";
    asignaturas_regentadas = "Fisica";
}

// Constructor con par�metros
Clasesdeprofesores::profesor::profesor(String^ _identificador, String^ _nombre, String^ _apellido, int _edad, String^ _sexo, int _celular, String^ _direccion, String^ _fecha_ingreso, String^ _categoria, float _salario, String^ _titulo_universitario, String^ _asignaturas_regentadas) {
    identificador = _identificador;
    nombre = _nombre;
    apellido = _apellido;
    edad = _edad;
    sexo = _sexo;
    celular = _celular;
    direccion = _direccion;
    fecha_ingreso = _fecha_ingreso;
    categoria = _categoria;
    salario = _salario;
    titulo_universitario = _titulo_universitario;
    asignaturas_regentadas = _asignaturas_regentadas;
}

// Destructor
Clasesdeprofesores::profesor::~profesor() {
    // Aqu� puedes incluir c�digo para liberar recursos si es necesario
}

// M�todo para subir de categor�a
void  Clasesdeprofesores::profesor::subircategoria() {
    if (categoria != "contrato fijo") {
        categoria = "contrato fijo";
        if (salario + 1000 > 15000) {
            salario = 15000;
        }

        else
            salario = salario + 1000;

    }
    // Aqu� implementa la l�gica para subir de categor�a seg�n tus requisitos
}


void  Clasesdeprofesores::profesor::mostrar() {
    // Aqu� puedes implementar la l�gica para mostrar la informaci�n del profesor
}
