#include <iostream>
using namespace std;

int main(){
    int n,m,a[101],b[101], ultimulNumarAfisat;
    cin >> n >> m;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    for(int i=1;i<=m;++i)
        cin >> b[i];

    for(int i=1;i<=n;++i){
        if(i==1){
            ultimulNumarAfisat = b[1];
            cout << a[1] << " " << b[1] << " ";
        }
        else{
            if(ultimulNumarAfisat%2==0 and ultimulNumarAfisat < b[i] and i <=m){
                cout << b[i] << " ";
                ultimulNumarAfisat = b[i];
                }
            else if(ultimulNumarAfisat%2==1 and ultimulNumarAfisat < a[i] and i <= n){
                cout << a[i] << " ";
                ultimulNumarAfisat = a[i];
                }

        }
    }
    return 0;
}