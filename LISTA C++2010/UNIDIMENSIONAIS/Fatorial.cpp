#include <iostream>
using namespace std;

int main() {
    int n, fat = 1;
    cout << "Digite um numero: ";
    cin >> n;
    for(int i=1;i<=n;i++)
        fat *= i;
    cout << "Fatorial de " << n << " = " << fat;
}
