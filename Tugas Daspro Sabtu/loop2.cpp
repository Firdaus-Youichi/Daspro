#include <iostream>

using namespace std;

int main()
{
    for (int i=100; i>=1; i--){
        if (i%2==1){
            continue;
        } else {cout << "Nilai Genapnya adalah " << i << endl;}
    }


    return 0;
}
