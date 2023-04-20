#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main(){
    int x,min1=100,min2=100;
    while(fin >> x){
        if(x < 0){
            if( x > -100 and x < min1){
                min2 = min1;
                min1 = x;
            }
            else
                if(x > -100 and x < min2){
                    min2 = x;
                }
        }
        else if(x > 9){
            if(x < 100 and x < min1){
                min2 = min1;
                min1 = x;
            }
            else{
                if(x > -100 and x < min2)
                     min2 = x;
            }
        }
    }
    cout << min1 << " " << min2;
    return 0;
}