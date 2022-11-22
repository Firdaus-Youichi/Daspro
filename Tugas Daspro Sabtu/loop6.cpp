#include <iostream>

using namespace std;

int main()
{
    int a;
    int maks;
    int minn;


    while (true){
        cout << "Masukan Nilai Anda: ";
        cin >> a;


        if (a==-99){
            break;
        } else if (maks<a){
            maks = a;
        } else if(minn>a){
            minn = a;
            /*gak tau pak kenapa nilai minimal
            jika diinput angka ratusan outputnya
            sering keluar angka 16 terus :(*/
        }
    }

    cout << "Maks: " << maks << endl;
    cout << "Min: " << minn << endl;

    return 0;
}
