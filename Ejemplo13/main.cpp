#include "Persona.hpp"
#include <cstdlib>
#include <ctime>

int main(int argc, char** argv)
{
    srand(time(NULL));

    // Edades 18..27 (10 valores distintos) mezcladas
    int edades[10];
    for(int i = 0; i < 10; i++)
        edades[i] = 18 + i;

    for(int i = 9; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = edades[i];
        edades[i] = edades[j];
        edades[j] = tmp;
    }

    // Crear las 10 personas
    Persona* personas[10];
    for(int i = 0; i < 10; i++)
        personas[i] = new Persona(edades[i]);

    // Mostrarlas
    for(int i = 0; i < 10; i++)
        personas[i]->mostrar();

    // Liberar memoria
    for(int i = 0; i < 10; i++)
        delete personas[i];

    return 0;
}