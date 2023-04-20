#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main(){
    int x, v[10], n;
    fin >> n;
    for(int i=0;i<=9;++i){
        v[i] = 0;
    }
    for(int i=1;i<=n;++i){
        fin >> x;
        v[x]++;
    }
    for(int i=9;i>=0;--i){
        if(v[i] != 0){
            cout << i << " " << v[i];
            break;
        }
    }
    return 0;
}