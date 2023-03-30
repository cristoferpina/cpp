#include <iostream>

using namespace std;

int main(){

    char canciones [10][18] ={
        {'G','o','o','d',' ','4',' ','u'},
        {'T','h','a','n','k',' ','u',' ','n','e','x','t'},
        {'M','a','l','a','m','e','n','t','e'},
        {'S','a','v','e',' ','y','o','u','r',' ','t','e','a','r','s'},
        {'O','j','i','t','o','s',' ','l','i','n','d','o','s'},
        {'L','e','v','i','a','t','i','n','g'},
        {'H','a','p','p','i','e','r',' ','T','h','a','n',' ','E','v','e','r'},
        {'D','e','s','v','e','l','a','d','o'},
        {'C','o','m','o',' ','l','a',' ','f','l','o','r'},
        {'S','a','n',' ','l','u','c','a','s'},
    };

    char artistas [10][18] ={
        {'O','l','i','v','i','a',' ','R','o','d','r','i','g','o'},
        {'A','r','i','a','n','a',' ','G','r','a','n','d','e'},
        {'R','o','s','a','l','i','a'},
        {'T','h','e',' ','W','e','e','k','n','d'},
        {'B','a','d',' ','B','u','n','n','y'},
        {'D','u','a',' ','L','i','p','a'},
        {'B','i','l','l','i','e',' ','E','i','l','i','s','h'},
        {'B','o','b','b','y',' ','P','u','l','i','d','o'},
        {'S','e','l','e','n','a'},
        {'K','e','v','i','n',' ','K','a','a','r','l'},
    };

    float duracion [10] ={ 
        170.f,
        207.f,
        150.f,
        191.f,
        258.f,
        203.f,
        298.f,
        194.f,
        183.f,
        247.f,
    };

cout << "Lista de reproduccion:" << endl;
float duracion_total = 0;
for (int i = 0; i < 10; i++) 


float duracion_total = 0.0f;
for (int i = 0; i < 10; i++) {
    duracion_total += duracion[i];
}

cout << "Lista de reproduccion:\n";
for (int i = 0; i < 10; i++) {
    cout << canciones[i] << " - " << artistas[i] << " - " << duracion[i] << " segundos\n";
}

cout << "Duracion total: " << duracion_total << " segundos\n";

return 0;

}     
