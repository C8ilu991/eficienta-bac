#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int main(){
    int x,n,v[100];
    fin >> n;
    for(int i=1;i<=n;++i)
        v[i] = 0;
    for(int i=1;i<=n;++i){
        fin >> x;
        v[x]++;
    }
    for(int i=1;i<=99;++i){
        if(v[i]==1)
            cout << i << " ";
    }
    return 0;
}