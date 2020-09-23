#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Insira um número maior que 0: ";
    cin >> n;
    
    
    if (n < 0) {
        cout << "Erro! Selvagem..." << endl << "Foda! Eu não disse a tu para botar um número maior que 0!!!!!!";
    } else {
        if (n == 0) {
            cout << "0! = 1" << endl << "O fatorial de 0 é igual a 1...";
        } else {
            int fatorial = n;
            int cont = (n-1);
            while (cont >= 1){
                
                fatorial = fatorial*cont;
                
                cont--;   
            }
            
            cout << n << "! = " << fatorial;
        }
    }
    return 0;
}

