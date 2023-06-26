#include <iostream>
#include <vector>
using namespace std;

int main() {

    int cantidadVector;

    cout << endl;

    cout << "Cuantos elemtos tendra el vector: " << endl;
    cin >> cantidadVector;

    cout << endl;

    vector<int> records(cantidadVector);

    cout << "---------------------------------------------" << endl;
    cout << "escribe los " << cantidadVector << " numeros" << endl;
    cout << "---------------------------------------------" << endl;

    cout << endl;

    for (int i = 0; i < records.size(); ++i) {

        cout << "indica el elemento " << i+1 << endl;
        cin >> records[i];

    }

    cout << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "Los numeros ingresados son: " << endl;
    for (int j = 0; j < records.size(); ++j) {

        cout << records[j] << " ";
    }
    cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

    cout << endl;

    return 0;
}
