#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

/*
 *Program......: Math Tutor V3
 *Programmers..: Austin Hill, Eamon O'Gorman
 *Date.........: 2025.09.26
 *Github Repo..: https://github.com/eaogo01/MathTutorV3
 *Description..:
*/
using namespace std;

int main() {
    const int MAX_ATTEMPS = 3;
    const int LEVEL_CHANGE = 5; // how much to increase the range up and down

    enum MATHTYPE { MT_ADD = 1, MT_SUB = 2, MT_MUL = 3, MT_DIV = 4 };
    MATHTYPE mathType = MT_ADD; // random number
    string userName = "unknown";
    string userInput = "?";
    int userAnswer = 0;
    int leftNumber = 0;
    int rightNumber = 0;
    int temp = 0;
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
    cout << "********************************************************************************************************"
            << endl;
    cout << "*                          Welcome to the Silly Simple Math Tutor                                      *"
            << endl;
    cout << "********************************************************************************************************"
            << endl;
    cout << "Fun Math Facts " << endl;
    cout << endl;
    cout << "* Math teachers have problems. " << endl;
    cout << "* Math is the only subject that counts. " << endl;
    cout << "* If it seems easy, you're doing it wrong. " << endl;
    cout << "* It's all fun and games until someone divides by zero! " << endl;
    cout << endl;
    cout << "*******************************************************************************************************" <<
            endl;

    cout << endl;
    cout << "What is your name? ";
    getline(cin, userName);

    cout << "Welcome ";
    cout << userName;
    cout << " to the Silly Simple Math Tutor!";
    cout << endl;

    leftNumber = rand() % 10 + 1;
    rightNumber = rand() % 10 + 1;
    mathType = static_cast<MATHTYPE>(rand() % 4 + 1);

    switch (mathType) {
        case MT_ADD: //Addition
            mathSymbol = '+';
            correctAnswer = leftNumber + rightNumber;
            break;

        case MT_SUB: // Subtraction
            if (leftNumber < rightNumber) {
                temp = leftNumber;
                leftNumber = rightNumber;
                rightNumber = temp;
            }
            correctAnswer = leftNumber - rightNumber;
            mathSymbol = '-';
            break;

        case MT_MUL: // Mulitplication
            correctAnswer = leftNumber * rightNumber;
            mathSymbol = '*';
            break;

        case MT_DIV: // Division
            correctAnswer = leftNumber;
            leftNumber = rightNumber;
            mathSymbol = '/';
            break;

        default:
            cout << "Invalid math type: " << mathType << endl;
            cout << "Program ended with an error = -1" << endl;
            cout << "Please report this error to Christopher" << endl;
    }

    cout << "What is " << leftNumber << " " << mathSymbol << "" << rightNumber << "? ";
    while (!(cin >> userAnswer)) {
        cin.clear(); // clear the cin error flag
        // need to include the limits library to use numeric limits
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the max input, up to '\n'
        cout << "\tInvalid input!" << endl;
        cout << "\tPlease enter a number: ";
    } // end of get userAnswer while loop
    do {
        // put all code that needs to repeat inside this
    } while ("?" == "yes" || "?" == "y");
    cout << endl;
    getline(cin, userInput); // clearing the newline from the input buffer

    // validates y, yes, n ,no
    cout << "Do you want to continue (y-yes | n-no)? ";
    getline(cin, userInput);
    // to lower case the user's input
    for (int i = 0; i < userInput.size(); i++) {
    }
    userInput.at.(i) = tolower(userInput.at.(i)); // include ctype library for tolower}

    if ("?" == "y" || "?" == "yes" || "?" == "n" || "?" == "no") {
       ;
    }
    if (userAnswer == correctAnswer) {
        cout << "Congrats! It looks like you should play this game again." << endl;
    } else {
        cout << "Looks like you should play this game again. " << endl;
        cout << "The correct answer was " << correctAnswer << endl;
    }
    cout << "Thanks for playing," << userName << "! End of program." << endl;

    return 0;
}
