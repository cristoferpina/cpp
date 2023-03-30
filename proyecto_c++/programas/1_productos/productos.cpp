#include <iostream>
 
using namespace std;

int main(){

    char productos [5][10] ={
        {'S','A','B','R','I','T','A','S'},
        {'T','A','M','A','R','I','N','D','O','S'},
        {'N','A','R','A','N','J','A','S'},
        {'F','A','B','U','L','O','S','O'},
        {'J','A','B','O','N',' ','Z','O','T','E'},
    };

    float presios [5] = {
        16.f,
        18.f,
        17.6f,
        13.9f,
        14.f,
    };

for (size_t i = 0; i < 5; i++)
{
    cout <<i<<")";
    for (size_t j = 0; j < 10; j++)
    {
        if (productos[i][j] == '\0')
        break;
        cout << productos [i][j];
    }
            cout << endl;
        }   
    unsigned int numero; 
    cout << "Bienvenido! selecciona un numero correspondiente al producto para que puedas ver su precio: ";
    cin >> numero;

    if (numero > 4)
    {
        cout << "Producto fuera de stock, intentalo nuevamente" << endl;
        
        return 1;
    }
    {
        cout << "El precio del producto es: ";
        cout << presios [numero] << endl;

        return 0;

    }
    
}