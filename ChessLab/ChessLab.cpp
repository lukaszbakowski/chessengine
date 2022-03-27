// ChessLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameBoard.h"

using namespace std;

void funct(int &test) {
    test *= test;
    int* supertest = &test;
    *supertest = 2;
}
void funct2(int* test) {
    *test += *test;
}
void funct3(int& test) {
    int &hehe = test;
    hehe += hehe;
    cout << hehe << endl;
}

int main()
{
    int x = 5;
    int& test = x;
    int* pointer = &x;
    *pointer -= 1; //operating on value

    funct(x);
    funct2(&x);
    funct3(x);

    cout << x << endl;
    cout << &x << endl;
    cout << test << endl;
    cout << &test << endl;
    cout << pointer << endl;
    cout << &pointer << endl;
    cout << *pointer << endl;



    cout << endl << endl;




    GameBoard gameBoard;
    gameBoard.GameStart();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
