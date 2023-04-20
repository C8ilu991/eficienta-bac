#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main(){
    int x, xAnterior, cnt=1;
    fin >> xAnterior;
    while(fin >> x){
        if(xAnterior == x){
            cnt++;
        }
        else{
            cout << xAnterior << " ";
            cout << cnt << " ";
            cnt = 1;
        }
        xAnterior = x;
    }
    cout << x << " " << cnt;

    return 0;
}