// implemente aqui seu programa ...

#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    int len, n;

    //cin >> text;
    getline(cin, text); //Usado para pegar a linha toda..
    len = text.length();
    if (len) {
        n =len - 1;

        for (int i = 0; i < (len/2) ; ++i) {
            swap(text[n],text[i]);
            n = n -1;
        }
        cout << text << endl;
    }

    return 0;

}