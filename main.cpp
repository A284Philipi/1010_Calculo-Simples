#include <iostream>

using namespace std;

int main()
{
    int numerodepecas1, numerodepecas2, codigopeca1, codigopeca2;
    double valorpeca1, valorpeca2, total;
    cin >> codigopeca1;
    cin >> numerodepecas1;
    cin >> valorpeca1;
    cin >> codigopeca2;
    cin >> numerodepecas2;
    cin >> valorpeca2;
    total = (numerodepecas1*valorpeca1)+(numerodepecas2*valorpeca2);
    cout.precision(2);
    cout << fixed << "VALOR A PAGAR: R$ " << total <<endl;
    return 0;
}
