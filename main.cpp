#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

/*
 *Program......: Math Tutor V3
 *Programmers..: Austin Hill, Eamon O'Gorman
 *Date.........: 2025.09.26
 *Github Repo..: https://github.com/eaogo01/MathTutorV3
 *Description..:
*/
using namespace std;
int main() {
    string userName = "unknown";
    int userAnswer = 0;
    int leftNumber = 0;
    int rightNumber = 0;
    int temp = 0;
    int mathType = 0;
    int correctAnswer = 0;
    char mathSymbol = '?';

    srand(time(0));

    cout << R"(

                  __  __       _   _       _____      _
                 |  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __
                 | |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
                 | |  | | (_| | |_| | | |   | || |_| | || (_) | |
                 |_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|

)" << endl;
    cout << "********************************************************************************************************" << endl;
    cout << "*                          Welcome to the Silly Simple Math Tutor                                      *" << endl;
    cout << "********************************************************************************************************" << endl;
    cout << "Fun Math Facts " << endl;
    cout << endl;
    cout << "* Math teachers have problems. " << endl;
    cout << "* Math is the only subject that counts. " << endl;
    cout << "* If it seems easy, you're doing it wrong. " << endl;
    cout << "* It's all fun and games until someone divides by zero! " << endl;
    cout << endl;
    cout << "*******************************************************************************************************" << endl;

    cout << endl;
    cout << "What is your name? ";
    getline(cin, userName);

    cout << "Welcome ";
    cout << userName;
    cout << " to the Silly Simple Math Tutor!";
    cout << endl;

    leftNumber = rand() % 10 + 1;
    rightNumber = rand() % 10 + 1;
    mathType = rand() % 4 + 1;

    switch (mathType) {
        case 1: //Addition
            mathSymbol = '+';
            correctAnswer = leftNumber + rightNumber;
            break;

        case 2: // Subtraction
            if (leftNumber < rightNumber) {
                temp = leftNumber;
                leftNumber = rightNumber;
                rightNumber = temp;
            }
            correctAnswer = leftNumber - rightNumber;
            mathSymbol = '-';
            break;

        case 3: // Mulitplication
            correctAnswer = leftNumber * rightNumber;
            mathSymbol = '*';
            break;

        case 4: // Division
            correctAnswer = leftNumber;
            leftNumber *= rightNumber;
            mathSymbol = '/';
            break;

        default:
            cout << "Invalid math type: " << mathType << endl;
            cout << "Program ended with an error = -1" << endl;
            cout << "Please report this error to Christopher" << endl;
    }

    cout << "What is " << leftNumber << " " << mathSymbol << "" << rightNumber << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Congrats! It looks like you should play this game again." << endl;
    } else {
    cout << "Looks like you should play this game again. " << endl;
    cout << "The correct answer was " << correctAnswer << endl;
}
    cout << "Thanks for playing," << userName << "! End of program." << endl;

        return 0;
}
