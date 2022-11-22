#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;

    cout << "-----------------------------" << endl;
    cout << "|Celcius       |  Fahrenheit|" << endl;
    cout << "-----------------------------" << endl;

    for(x=0; x<=100; x++){
            y=(x*(1.8))+32.0;
        if (x<=9){
            cout << x << "              |      " << y << endl;
        } else if (x<=99){
            cout << x << "             |      " << y << endl;
        } else if (x==100){
            cout << x << "            |      " << y << endl;
        }
    }

    cout << "-----------------------------" << endl;



    return 0;
}
