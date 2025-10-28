#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {2,4,8,1},
        {7,5,3,9},
        {6,10,12,11},
        {15,13,14,0}
    };
    int maior = matriz[0][0];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
    cout << "Maior elemento: " << maior;
}
