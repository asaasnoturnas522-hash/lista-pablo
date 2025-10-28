#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int num) {
    int cont = 0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(matriz[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4] = {
        {1,2,3,4},
        {5,1,6,1},
        {7,8,1,9},
        {1,0,2,1}
    };
    int num;
    cout << "Digite o numero para buscar: ";
    cin >> num;
    cout << "O numero " << num << " aparece " << contarOcorrencias(matriz, num) << " vezes.";
}
