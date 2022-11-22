#include <iostream>

using namespace std;

int main()
{
    double a=0;

    for (int i=1; i<=20; i++){
        cout << i << endl;
        a=a+i;
    }
    cout << endl;
    cout << "jumlah= " << a << endl;
    cout << "rata-rata= " << a/20;
    cout << endl;



    return 0;
}
