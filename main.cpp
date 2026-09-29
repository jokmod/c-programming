#include <iostream>
#include <string>

using namespace std;

int main() {
    int id;
    string address;

    cout << "Hello world" << endl;
    cout << "!0kw0b"<< endl;

    cout << "Nhap id: ";
    cin >> id;

    cin.ignore();

    cout << "Dia chi: ";
    getline(cin, address);
    cout << "ID: " << id << "Dia chi: " << address << '/n';

    return 0;
    
}