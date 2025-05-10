#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char estudiantes[20][20]; // Arreglo para almacenar 20 nombres de estudiantes
    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ":";
        cin.getline(estudiantes[i], 20);
    }
    return 0;
}