#include <iostream>

using namespace std;

int main() {
    char alumnos[10][18] = {
        {'M', 'o', 'n', 'i', 'c', 'a', ' ', 'M', 'o', 'r', 'a'},
        {'J', 'u', 'a', 'n', ' ', 'P', 'e', 'r', 'e', 'z'},
        {'M', 'o', 'n', 's', 'e', 'r', 'r', 'a', 't', ' ', 'C', 'r', 'u', 'z'},
        {'J', 'u', 'a', 'n', ' ', 'C', 'a', 'r', 'm', 'o', 'n', 'a'},
        {'O', 'm', 'a', 'r', ' ', 'T', 'o', 'l', 'e', 'd', 'o'},
        {'O', 'm', 'a', 'r', ' ', 'd', 'e', ' ', 'J', 'e', 's', 'u', 's'},
        {'Y', 'a', 'm', 'i', 'l', 'e', 't', ' ', 'H', 'e', 'r', 'n', 'a', 'n', 'd', 'e', 'z'},
        {'Y', 'a', 'z', 'm', 'i', 'n', ' ', 'S', 'o', 't', 'o'},
        {'E', 'd', 'u', 'a', 'r', 'd', 'o', ' ', 'P', 'i', 'n', 'e', 'd', 'a'},
        {'E', 'd', 'n', 'a', ' ', 'S', 'a', 'r', 'a', 'h', 'i', ' ', 'M', 'i', 'n', 'e', 'r', 'o'}
    };

    float calificacion[10] = {
        95.f,
        27.f,
        50.f,
        91.f,
        58.f,
        03.f,
        98.f,
        94.f,
        83.f,
        47.f
    };

    cout << "Alumnos reprobados: " << endl;

    for (int i = 0; i < 10; i++) {
        if (calificacion[i] < 69) {
            cout << alumnos[i] << " con calificacion de: " << calificacion[i] << endl;
        }
    }

    return 0;
}