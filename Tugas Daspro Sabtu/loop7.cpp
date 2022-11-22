#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum = 0;


    while (x!=9999){
        cout << "Input Bilangan: ";
        cin >> x;
        cout << x << endl;
        if (x==9999){
            break;
        }
        sum = sum + x;
    }


    cout << "Jumlah Angka: " << sum;


    return 0;
}
