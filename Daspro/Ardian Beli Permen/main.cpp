#include <iostream>

using namespace std;
int main()
{
    int x = 5000;
    int y,i;

    cout << "~Daftar Harga Permen~" << endl;
    cout << "1 = 1000" << endl;
    cout << "2 = 500" << endl;
    cout << "3 = 300" << endl;
    cout << "Masukan Salah Satu Huruf: ";

    cin >> y;

    if (y==1){
        cout << "Ardian Mendapatkan 3 Buah Permen";
    } else if (y==2){
        cout << "Ardian Membeli Permen Sampai Uangnya Habis: ";
        for (i=5000; i>=0; i){
            cout << i << " ";
            i=i-500;
        }
    } else if (y==3){
        cout << "Ardian Menghitung Uangnya sampai: ";
        for (i=300; i<5000; i){
            cout << i << " ";
            i=i+300;
        }
    }


    return 0;
}
