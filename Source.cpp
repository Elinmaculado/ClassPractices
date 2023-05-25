#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int askNumber(string question, int high, int low = 1);
//GUESS MY NUMBER
void guessMyNumber();
void vectorsPart1();
void vectorReserve();
void Iters();
void guessword();
void iterinventory();
void guessword2();
void goodSwap(int& a, int& b);
void badSwap(int &a, int &b);
void display(const vector<string>& vec);
void MatrixBox();

void TicTacToe();

void main()
{
    TicTacToe();
}

void TicTacToe()
{
    const int HEIGTH_WIDTH = 3;
    const int ROWS = 3;
    const int COLUMNS = 3;
    bool playing = true;
    int x;
    int o;

    //declaras la matriz
    char board[ROWS][COLUMNS] = {{ '0', '1', '2' }, 
                                 { '3', '4', '5' },
                                 { '6', '7', '8' }};
    
    char PlayBoard[ROWS][COLUMNS] = { { '.', '.', '.' },
                                      { '.', '.', '.' },
                                      { '.', '.', '.' } };

    cout << "TicTacToe" << endl;
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << PlayBoard[i][j];
        }
        cout << endl;
    }
    while (playing == true) {
        do {
            cout << "Jugador X, ingresa el numero del espacio que deseas ocupar" << endl;
            cin >> x;

            if (x == 0 && PlayBoard[0][0] == '.')
            {
                PlayBoard[0][0] = 'X';
            }
            else if (x == 1 && PlayBoard[0][1] == '.')
            {
                PlayBoard[0][1] = 'X';
            }
            else if (x == 2 && PlayBoard[0][2] == '.')
            {
                PlayBoard[0][2] = 'X';
            }
            else if (x == 3 && PlayBoard[1][0] == '.')
            {
                PlayBoard[1][0] = 'X';
            }
            else if (x == 4 && PlayBoard[1][1] == '.')
            {
                PlayBoard[1][1] = 'X';
            }
            else if (x == 5 && PlayBoard[1][2] == '.')
            {
                PlayBoard[1][2] = 'X';
            }
            else if (x == 6 && PlayBoard[2][0] == '.')
            {
                PlayBoard[2][0] = 'X';
            }
            else if (x == 7 && PlayBoard[2][1] == '.')
            {
                PlayBoard[2][1] = 'X';
            }
            else if (x == 8 && PlayBoard[2][2] == '.')
            {
                PlayBoard[2][2] = 'X';
            }
            else
            {
                cout << "elije una opcion valida" << endl;
            }
        } while (x < 0 || x > 8);
        system("pause");
        system("cls");

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << PlayBoard[i][j];
            }
            cout << endl;
        }

        do {
            cout << "Jugador O, ingresa el numero del espacio que deseas ocupar" << endl;
            cin >> o;


            if (o == 0 && PlayBoard[0][0] == '.')
            {
                PlayBoard[0][0] = 'O';
            }
            else if (o == 1 && PlayBoard[0][1] == '.')
            {
                PlayBoard[0][1] = 'O';
            }
            else if (o == 2 && PlayBoard[0][2] == '.')
            {
                PlayBoard[0][2] = 'O';
            }
            else if (o == 3 && PlayBoard[1][0] == '.')
            {
                PlayBoard[1][0] = 'O';
            }
            else if (o == 4 && PlayBoard[1][1] == '.')
            {
                PlayBoard[1][1] = 'O';
            }
            else if (o == 5 && PlayBoard[1][2] == '.')
            {
                PlayBoard[1][2] = 'O';
            }
            else if (o == 6 && PlayBoard[2][0] == '.')
            {
                PlayBoard[2][0] = 'O';
            }
            else if (o == 7 && PlayBoard[2][1] == '.')
            {
                PlayBoard[2][1] = 'O';
            }
            else if (o == 8 && PlayBoard[2][2] == '.')
            {
                PlayBoard[2][2] = 'O';
            }
            else
            {
                cout << "elije una opcion valida" << endl;
            }
        } while (o < 0 || o > 8);
        system("pause");
        system("cls");

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << PlayBoard[i][j];
            }
            cout << endl;
        }
    }
}


void MatrixBox()
{
    const int ROWS = 7;
    const int COLUMNS = 7;

    cout << "Caja" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        if (i == 0 || i == (ROWS - 1))
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << " 1 ";
            }
            cout << endl;
        }
        else
        {
            cout << " 1 ";
            for (int j = 1; j < (COLUMNS-1); j++)
            {
                cout << " 0 ";
            }
            cout << " 1 " << endl;
        }
    }

    cout << endl << "diagonales" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        if (i == 0 || i == (ROWS - 1))
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << " 1 ";
            }
            cout << endl;
        }
        else
        {
            cout << " 1 ";
            for (int j = 1; j < (COLUMNS - 1); j++)     //i+j == ROWS -1
            {
                if (i == j || COLUMNS -i -1 == j)
                {
                    cout << " 1 ";
                }

                else
                {
                    cout << " 0 ";
                }
            }
            cout << " 1 " << endl;
        }
        
    }
}

void display(const vector<string>& vec) 
{
    vector<string>::const_iterator iter;

    for (iter = vec.begin(); iter != vec.end(); iter++) 
    {
        cout << *iter << endl;
    }
}

void badSwap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void goodSwap(int& a, int& b) {


}

void guessword2()
{
    const int MAX_ATTEMPTS = 3;
    int attempts = 0;
    vector<string> words;

    words.push_back("COMPUTADORA");
    words.push_back("JUEGO");
    words.push_back("CODIGO");
    words.push_back("REFRIGERADOR");

    srand(time(NULL));
    int randNumber = rand();
    int wordRandomIndex = (randNumber % words.size());
    string wordSelected = words[wordRandomIndex];

    cout << wordSelected << endl;

    random_shuffle(wordSelected.begin(), wordSelected.end());
    cout << wordSelected << endl;

    string correctWord;

    do {
        cin >> correctWord;
        transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::toupper);
        cout << correctWord << endl;
    
        if (correctWord == words[wordRandomIndex])
        {
            cout << "Adiviniste la palabra" << endl;
            break;
        }
        else
        {
            attempts++;
            cout << "fallaste puto niño imbecil, te quedan " << MAX_ATTEMPTS - attempts << endl;
        }

    } while (attempts != MAX_ATTEMPTS);

    if (attempts == MAX_ATTEMPTS)
    {
        cout << "perdiste pinche niño meco" << endl;
        cout << "la palabra era:" << words[wordRandomIndex];
    }
    else
    {
        cout << "felicidades, ganaste en " << attempts + 1 << " intentos";
    }
}

void iterinventory()
{
    vector<string> inventory;
    inventory.push_back("Espada");
    inventory.push_back("Escudo");
    inventory.push_back("Martillo");
    inventory.push_back("Rifle");

    //iterador para cambiar datos
    vector<string>::iterator myiterator;
    //iterador para solo ver datos
    vector<string>::const_iterator iter;

    cout << "tus items" << endl;

    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    //intercambio
    cout << "intercambiaste tu " << inventory[2] << " por un arco";
    myiterator = inventory.begin() + 2;
    *myiterator = "arco";

    cout << "tu inventario" << endl;

    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    //size
    cout << "el nombre del item " << *myiterator << " tiene";
    cout << (*myiterator).size() << " letras" << endl;

    //insert
    cout << "el nombre del item " << *myiterator << " tiene";
    cout << (myiterator)->size() << " letras" << endl;

    iter = inventory.insert(inventory.begin() + 2, "bomba");
    cout << "tus items" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    //DELETE
    cout << "\nTu " << inventory[1] << " fue destruido en batalla.";
    inventory.erase(inventory.begin() + 1);
    cout << "\nTus Items: \n";
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
}

void guessword()
{
    //encontrar 
    vector<string> words = { "gato", "perro", "coche" };
    string w1 = words[0];
    string w2 = words[1];
    string w3 = words[2];
    int lifes = 5;
    string answer;

    random_shuffle(w1.begin(), w1.end());
    random_shuffle(w2.begin(), w2.end());
    random_shuffle(w3.begin(), w3.end());

    do {
        //srand(time(NULL));
        cout << "tienes " << lifes << " vidas" << endl;
        cout << "adivina cual es esta palabra: " << endl << w1 << endl;
        cin >> answer;

        if (answer != words[0])
        {
            lifes--;
        }
        system("pause");
        system("cls");
    } while (answer != words[0] && lifes > 0);

    do {
        if (lifes < 1)
        {
            return;
        }
        //srand(time(NULL));
        cout << "tienes " << lifes << " vidas" << endl;
        cout << "adivina cual es esta palabra: " << endl << w2 << endl;
        cin >> answer;

        if (answer != words[1])
        {
            lifes--;
        }
        system("pause");
        system("cls");
    } while (answer != words[1] && lifes > 0);

    do {
        if (lifes < 1)
        {
            return;
        }
        //srand(time(NULL));
        cout << "tienes " << lifes << " vidas" << endl;
        cout << "adivina cual es esta palabra: " << endl << w3 << endl;
        cin >> answer;

        if (answer != words[2])
        {
            lifes--;
        }
        system("pause");
        system("cls");
    } while (answer != words[2] && lifes > 0);

}

void Iters() {
    const int NUM_SCORES = 4;
    int score;

    vector<int>::const_iterator iter;
    vector<int> scores;
    string word = "programacion";

    for (int i = 0; i < NUM_SCORES; i++) {
        cout << "scores " << i + 1 << endl;
        cin >> score;
        scores.push_back(score);
    }

    cout << "puntajes" << endl;
    for (iter = scores.begin(); iter != scores.end(); iter++) {
        cout << *iter << endl;
    }

    cout << "buscar puntajes" << endl;
    cin >> score;

    //desde donde buscas, hasta donde y que buscas
    iter = find(scores.begin(), scores.end(), score);

    //si el iter llega al final, significa que nunca encontró el score
    if (iter != scores.end()) 
    {
        cout << endl << "Tu puntaje se encuentra en el vector " << endl;

    }
    else 
    {
        cout << endl << "No encontramos el puntaje que buscas" << endl;
    }

    srand(time(NULL));
    random_shuffle(scores.begin(), scores.end());

    /*Sort*/
    cout << endl << "cambiar en orden" << endl;
    sort(scores.begin(), scores.end());
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    cout << word << endl;
    srand(time(NULL));
    random_shuffle(word.begin(),word.end());
    cout << word << endl;
}

void vectorReserve() {

    vector<int> scores(10, 0);
    scores.reserve(12);
    cout << "Vector size is: " << scores.size() << endl;
    cout << "Vector capicity is: " << scores.capacity() << endl;

    scores.push_back(0);
    cout << "Vector size is: " << scores.size() << endl;
    cout << "Vector capicity is: " << scores.capacity() << endl;

    
}

void vectorsPart1()
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
