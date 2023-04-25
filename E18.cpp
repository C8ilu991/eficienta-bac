#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int main(){
    int n, secventaMax=0, contorSecventa=0,numarSecventa, x, xAnterior;
    fin >> n;
    fin >> xAnterior;
    contorSecventa = 1;
    numarSecventa = xAnterior;
    secventaMax = 1;
    for(int i=2;i<=n;++i){
        fin >> x;
        if(xAnterior == x){
            contorSecventa++;
            if(contorSecventa > secventaMax){
                secventaMax = contorSecventa;
                numarSecventa = x;
            }
        }
        else{
            contorSecventa = 1;
        }
        xAnterior = x;
    }
    cout << numarSecventa << " " << secventaMax;
    return 0;
}