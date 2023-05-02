#include <iostream>
#include <string>
#include <vector>

using namespace std;

int askNumber(string question, int high, int low = 1);
//GUESS MY NUMBER
void guessMyNumber();

int main()
{
    //vector<string> myStuff = { "espada", "martillo", "bomba" }; Vector con espacios con esos elementos
    //vector<string> inventory(10);                               vector con 10 espacios vacios
    //vector<string> inventory(10, " Vacio ");                    vector con 10 espacios, todos dicen vacio
    //vector<string> inventory(myStuff);                          vector dentro de un vector

    vector<string> inventory;
    vector<string> newinventory(5);

    inventory.push_back("Espada"); //sintaxis para agregar elemento al final del vector
    inventory.push_back("Escudo");
    inventory.push_back("Martillo");

    cout << "Tienes " << inventory.size() << " items en tu inventario" << endl;

    //Iteration FOR
    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nCambiaste tu " << inventory[0] << " por una Bomba.";
    inventory[0] = "Bomba";

    cout << "\n";

    //Iteration DO-WHILE
    int i = 0;
    do {
        cout << inventory[i] << endl;
        i++;
    } while (i < inventory.size());

    cout << inventory[0] << " tiene " << inventory[0].size() << " letras en el" << endl;

    cout << "Perdiste un item en la ultima batalla :(" << endl;

    inventory.pop_back();

    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "Un enemigo ha robado todas tus armas" << endl;
    inventory.clear();

    if (inventory.empty()) {
        cout << "No tienes nada..." << endl;
    }
    else {
        for (unsigned int i = 0; i < inventory.size(); i++)
        {
            cout << inventory[i] << endl;
        }
    }
    
    for (unsigned int i = 0; i < newinventory.size(); i++)
    {
        cout << "puedes introducir " <<  newinventory.size() - i << " items:" << endl;
        cin >> newinventory[i];
       
        cout << "tu nuevo inventario es: " << endl;
        for (unsigned int j = 0; j <= i; j++)
        {
            cout << newinventory[j] << endl;
            
        }
        system("pause");
        system("cls");
    }
}

int askNumber(string question, int high, int low)
{
    int number = 0;

    do {
        cout << question << "entre " << low << " y " << high << endl;
        cin >> number;
    } while (number > high || number < low);

    return number;
}

void guessMyNumber()
{
    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int guess;
    int tries = 0;
    int veryClose;


    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {

        guess = askNumber("\nIngresa un número ", 300);

        tries++;

        veryClose = secretNumber - guess;


        if (veryClose <= 5 && veryClose >= -5 && veryClose != 0)
        {
            cout << "Muy cerca!!\n";
        }

        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";
        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}