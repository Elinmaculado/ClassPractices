#include<iostream>
#include<vector>7
using namespace std;

int main() {
	//vector<string> mystuff = { "espada", "martillo", "bomba" }; //rellenar vector normal
	//vector<string> inventory(10);								//crear un vector de n espacios
	//vector<string> inventory(10, "vacio");						//Vector con n espacios rellenados con x
	//vector<string> inventory(mystuff);

	vector<string> inventory;

	inventory.push_back("espada");
	inventory.push_back("escudo");
	inventory.push_back("martillo");

	cout << "tienes " << inventory.size() << " items en tu inventario" << endl;

	for (unsigned int i = 0; i < inventory.size(); i++) {
		cout << "Objeto " << i+1 << " es " << inventory[i] << endl;

	}
}