#include <iostream>
using namespace std;

int main() {
    const int num_calificaciones = 4;
    float calificaciones[num_calificaciones];
    float suma = 0;
    float promedio;
 
    for(int i = 0; i < num_calificaciones; i++) {
        do {
            cout << "Ingrese la calificacion " << i + 1 << " (entre 0 al 10): ";
            cin >> calificaciones[i];

            if(cin.fail() || calificaciones[i] < 0 || calificaciones[i] > 10) {
                cin.clear(); 
                cout << "Entrada no válida. Por favor, ingrese un numero entre 0 y 10." << endl;
            } else {
                break;
            }
        } while(true);

        suma += calificaciones[i];
    }

    promedio = suma / num_calificaciones;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    
    //verificar promedio si se aprovo o no
    if( promedio >= 7.0){
    	cout << "¡Felicidades has aprobado el semestre!!"<< promedio << endl;
	} else{
		cout << "¡Que has reprovado ponagse a chamvear!!"<< endl;
	}

    return 0;
}
