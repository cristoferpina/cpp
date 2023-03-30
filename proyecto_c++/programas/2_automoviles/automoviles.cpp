#include <iostream>

using namespace std;

int main (){
    char autos [5][10] = {
        {'M','E','R','C','E','D','E','S'},
        {'N','I','S','S','A','N'},
        {'J','E','E','P'},
        {'F','O','R','D'},
        {'K','I','A'},
    };

    float modelo [5]= {
        2022.f,
        1987.f,
        2004.f,
        2020.f,
        2000.f,
    };


float modelo_max = modelo[0];
float modelo_min = modelo[0];
for (int i = 1; i < 5; i++) {
    if (modelo[i] > modelo_max) {
        modelo_max = modelo[i];
    }
    if (modelo[i] < modelo_min) {
        modelo_min = modelo[i];
    }
}


char auto_mas_reciente[10];
char auto_mas_antiguo[10];
for (int i = 0; i < 5; i++) {
    if (modelo[i] == modelo_max) {
        for (int j = 0; j < 10; j++) {
            auto_mas_reciente[j] = autos[i][j];
        }
    }
    if (modelo[i] == modelo_min) {
        for (int j = 0; j < 10; j++) {
            auto_mas_antiguo[j] = autos[i][j];
        }
    }
}


cout << "Auto mas reciente: " << auto_mas_reciente << " " << modelo_max << endl;
cout << "Auto mas antiguo: " << auto_mas_antiguo << " " << modelo_min <<endl;

return 0;

}
