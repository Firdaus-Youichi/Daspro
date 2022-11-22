#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int maks;
    int minn;


    while (true){
        cout << "Masukan Nilai Anda: ";
        cin >> a, b;


        if (a==-99){
            break;
        } else if (maks<a){
            maks = a;
        } else if(minn>a){
            minn = a;
        }
    }

    cout << "Maks: " << maks << endl;
    cout << "Min: " << minn << endl;

    return 0;
}
