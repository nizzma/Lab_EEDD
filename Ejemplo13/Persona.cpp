#include "Persona.hpp"
#include <cstdio>
#include <cstdlib>

Persona::Persona(int edad)
{
    this->edad = edad;

    // Genero automatico (aleatorio)
    genero = rand() % 2;

    // DNI automatico: 8 digitos aleatorios + letra
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int numero = 10000000 + rand() % 90000000;
    sprintf(dni, "%08d%c", numero, letras[numero % 23]);
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
    return edad;
}

bool Persona::esMujer()
{
    return genero;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

void Persona::mostrar()
{
    cout << "DNI: " << dni
         << " | Edad: " << edad
         << " | Genero: " << (genero ? "Mujer" : "Hombre") << endl;
}