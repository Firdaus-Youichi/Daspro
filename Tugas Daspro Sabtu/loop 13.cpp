#include <iostream>

using namespace std;

int main()
{
   float x;
    float y;

    cout << "--------------------------------------------------------" << endl;
    cout << "|Celcius       |  Fahrenheit       |   Keterangan       " << endl;
    cout << "--------------------------------------------------------" << endl;

    for(x=-40; x<=100; x++){
            y=(x*(1.8))+32.0;
        if (x==-40) {
            cout << x << "            |      " << y << "            |      " << "Cuaca Sangat Dingin Bersalju" << endl;
        } else if (x>=-39 && x<=-18){
            cout << x << "            |      " << y << "            |      " << "Cuaca Dingin Bersalju" << endl;
        } else if (x>=-17 && x<=0){
            cout << x << "             |      " << y << "             |      " << "Titik Beku Air" << endl;
        } else if(x>=1 && x<=10){
            cout << x << "              |      " << y << "              |      " << "Hari Yang Dingin" << endl;
        } else if (x>=11 && x<=21){
            cout << x << "             |      " << y << "             |      " << "Temperatur Ruangan" << endl;
        } else if (x>=22 && x<=30){
            cout << x << "            |      " << y << "            |      " << "Cuaca Pantai" << endl;
        } else if (x>=31 && x<=37){
            cout << x << "            |      " << y << "            |      " << "Temperatur Tubuh" << endl;
        } else if (x>=38 && x<=40){
            cout << x << "            |      " << y << "            |      " << "Air Mandi Panas" << endl;
        } else if (x>=41 && x<=100){
            cout << x << "            |      " << y << "            |      " << "Air Mendidih" << endl;
        }
    }

    cout << "-----------------------------" << endl;



    return 0;
}
