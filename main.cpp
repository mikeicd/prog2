#include <iostream>
#include <string>

using namespace std;

int main() {
    int max = 100, min = 0, resultado = 0;
    for (int i = 1; i <= 7; ++i) {
        int resposta = 3;
        resultado = (max + min)/2;
        cout << "O numero é maior que ou é igual a " << resultado << "?" << endl << "0 - Não" << endl << "1 - Sim"  << endl << "2 - Se for igual" << endl;
        cin >> resposta;
        if (resposta == 1)
            min = resultado + 1;
        else if (resposta == 0)
            max = resultado - 1;
        else
            break;
       // if (i == 7 && resposta == 1)
        //    resultado++;
       // else if (i == 7 && resposta == 0)
       //     resultado--;
    }
    cout << "Numero escolhido: " << resultado;
  return 0;
}