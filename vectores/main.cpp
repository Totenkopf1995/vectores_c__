#include <iostream>
#include <vector>
using namespace std;

int main() {

    int cantidadVector;

    cout << "Cuantos elemtos tendra el vector: " << endl;
    cin >> cantidadVector;

    vector<int> records(cantidadVector);

    cout << "escribe los " << cantidadVector << " numeros" << endl;


    for (int i = 0; i < records.size(); ++i) {

        cin >> records[i];

    }

    cout << "Los numeros ingresados son: " << endl;
    for (int j = 0; j < records.size(); ++j) {

        cout << records[j] << " ";
    }

    cout << endl;

    return 0;
}
