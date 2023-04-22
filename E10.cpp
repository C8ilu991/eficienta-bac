#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int main(){
    int n, v[100],x;
    fin >> n;
    for(int i=0;i<=99; i++){
        v[i] = 0;
    }
    for(int i=1;i<=n;++i){
        fin >> x;
        v[x]++;
    }
    for(int i=1;i<=99;++i){
        while(v[i]!=0){
            cout << i << " ";
            v[i]--;
        }
    }
    return 0;
}