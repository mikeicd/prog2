
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    string text, findText;
    int pos;
    getline(cin, text);

    pos = text.find(argv[1]);
    cout << pos << endl;
    return 0;
}