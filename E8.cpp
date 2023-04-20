#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int main(){
    int n, x, v[10];
    fin >> n;
    for(int i=0;i<=9;++i)
        v[i] = 0;

    for(int i=1;i<=n;++i){
        fin >> x;
        while(x){
            v[x%10]++;
            x /= 10;
        }
    }
    for(int i=0;i<=9;++i){
        if(v[i]!=0)
            cout << i << " ";
    }
    return 0;
}
