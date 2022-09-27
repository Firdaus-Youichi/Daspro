#include <iostream>

using namespace std;

int main(){
    //L = p x l
    //K = 2 x (p + l)
    double L, K, p, l;
    cout<< "masukan p : "; cin>>p;
    cout<< "masukan l : "; cin>>l;
    L = p * l;
    K = 2 * (p + l);
    cout<< "L = "<<L<<endl;
    cout<< "K = "<<K<<endl;
}
