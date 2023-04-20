#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");

int main(){
    int n, x, v[10];
    fin >> n;
    for(int i=1;i<=9;++i)
        v[i] = 0;

    for(int i=1;i<=n;++i){
        fin >> x;
        v[x]++;
    }
    x = 0;
    for(int i=9;i>=0;--i){
        while(v[i]!=0){
            x = x*10 + i;
            v[i]--;
        }
    }
    cout << x;
    return 0;
}