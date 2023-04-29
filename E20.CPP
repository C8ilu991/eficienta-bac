#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main(){
    int x, v[1000];
    for(int i=100;i<=999;++i)
        v[i] = 0;
    while(fin >> x){
        if(x > 99 and x < 1000)
            v[x] = 1;
    }
    int afisari = 0;
    for(int i=999;i>=100;--i){
        if(v[i]==0){
            cout << i << " ";
            afisari++;
        }
        if(afisari == 2)
            break;
    }
    if(afisari==0)
        cout << "0";
    return 0;
}