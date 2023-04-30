#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("produse.txt");

int main(){
    int tipulProdusului, cantitate, pret, sumaProduse[5];
    for(int i=1;i<=4;++i){
        sumaProduse[i] = 0;
    }
    while(fin >> tipulProdusului >> cantitate >> pret){
        sumaProduse[tipulProdusului] += cantitate*pret;
    }
    for(int i=1;i<=4;++i){
        if(sumaProduse[i]!=0)
            cout << i << " " << sumaProduse[i] << endl;
    }
    return 0;
}