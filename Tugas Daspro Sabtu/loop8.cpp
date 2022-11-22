#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;

    while (x!=9999){
        cout << "Input Bilangan: ";
        cin >> x;
        if (x==9999){
            break;
        }
        i=i+1;
        cout << x << endl;
    }

    cout << i << endl;


    return 0;
}
