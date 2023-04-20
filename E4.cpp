#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int max_cif(int x[], int n){
    int max=-100000;
    for(int i=1;i<=n;++i){
        if(x[i] < 1000 and x[i] > 99 and x[i] > max){
            max = x[i];
        }
    }
    if(max == -100000)
        return 0;
    else
        return max;
}

int main(){
    int x[101], n, max;
    fin >> n;
    x[0] = 0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            fin >> x[j];
        }
        max = max_cif(x,n);
        if(max != 0){
            x[0] = 1;
            cout << max;
        }
    }
    if(x[0]==0)
        cout << "0";
    return 0;
}