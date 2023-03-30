#include <iostream>

using namespace std;

int main (){
    char personas [10][18] ={
        {'M','o','n','i','c','a'},
        {'J','u','a','n',' ','P','a','b','l','o'},
        {'M','o','n','s','e','r','r','a','t'},
        {'J','u','a','n',' ','C','a','r','l','o','s'},
        {'O','m','a','r',' ','T','a','d','e','o'},
        {'O','m','a','r',' ','J','e','s','u','s'},
        {'Y','a','m','i','l','e','t'},
        {'Y','a','z','m','i','n'},
        {'E','d','u','a','r','d','o'},
        {'E','d','n','a',' ','S','a','r','a','h','i'},
    };
    char Numeros [10][11] ={
        {'5','5','4','0','9','3','6','8','0','3','\0'},
        {'5','5','6','2','9','1','4','8','9','8','\0'},
        {'7','1','2','1','8','3','9','8','8','4','\0'},
        {'7','2','2','7','9','5','3','8','0','3','\0'},
        {'7','2','2','2','9','8','2','3','1','0','\0'},
        {'5','5','5','0','6','3','2','1','0','1','\0'},
        {'5','6','8','1','8','9','6','7','0','9','\0'},
        {'5','5','9','1','7','7','8','7','8','3','\0'},
        {'7','1','2','1','9','3','6','9','0','5','\0'},
        {'7','2','2','8','9','7','4','4','2','9','\0'},
    };
    char busqueda[18];
    cout << "Ingrese el nombre: ";
    cin >> busqueda;

    int longitud_busqueda = 0;
    for(int i=0; busqueda[i]!='\0' && i<18; i++){
        longitud_busqueda++;
    }

    int coincidencias;
    for (int i = 0; i < 10; i++) {
        coincidencias = 0;
        for (int j = 0; j < longitud_busqueda; j++) {
            if (personas[i][j] == busqueda[j]) {
                coincidencias++;
            }
        }
        if (coincidencias == longitud_busqueda) {
            cout << personas[i] << ": " << Numeros[i] << endl;
        }
    }

    return 0;
}