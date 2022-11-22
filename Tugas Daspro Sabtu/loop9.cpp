#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum;
    int i=0;

    while(x!=9999){
        cout << "Input Bilangan: ";
        cin >> x;
        if (x==9999){
            break;
        }
        cout << x << endl;
        sum=sum+x;
        i=i+1;
    }

    cout << "Jumlah Angka: " << sum << endl;
    cout << "Jumlah Cacah: " << i << endl;


    return 0;
}
