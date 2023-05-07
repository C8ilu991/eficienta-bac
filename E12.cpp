#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.txt");

int verif(int x){
    while(x!=0){
        int cnt=0;
        int nr=x%1000;
        cout << nr;
        while(nr){
            if(nr%2==1)
                cnt++;
            else
                break;
        }
        if(cnt == 3)
            return 1;
        x/=1000;

    }

    return 0;
}

int main(){
    int n, x;
    fin >> n;
    for(int i=1;i<=n;++i){
        fin >> x;
        if(verif(x)==1)
            cout << x << " ";
    }
    return 0;
}