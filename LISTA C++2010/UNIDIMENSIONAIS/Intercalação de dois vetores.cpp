#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[10];
    cout << "Digite 5 numeros para o primeiro vetor:\n";
    for(int i=0;i<5;i++) cin >> A[i];
    cout << "Digite 5 numeros para o segundo vetor:\n";
    for(int i=0;i<5;i++) cin >> B[i];

    for(int i=0;i<5;i++) {
        C[i*2] = A[i];
        C[i*2+1] = B[i];
    }

    cout << "Vetor intercalado:\n";
    for(int i=0;i<10;i++)
        cout << C[i] << " ";
}
