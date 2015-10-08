#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string name;
int questionsasked = 1;
int randomnum;
string answer;
int totalright = 0;
int repeated[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int startquiz()
{
    srand(time(NULL)); Sleep(100);
    if(questionsasked <= 5)
    {
        srand(time(NULL)); Sleep(1000);
        randomnum = (rand() % 10 + 1);

        if(randomnum == 1 and repeated[0] != 99) // If never asked before
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[0] = 99;
            cout << "What is the name of the NC's Empire-Specific Fighter?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "Reaver" or answer == "reaver" or answer == "Reaver")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Reaver" << endl;
                srand(time(NULL)); Sleep(1000);
                startquiz();
            }
        }
        else if(randomnum == 1 and repeated[0] == 99) // If already asked
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 2 and repeated[1] != 99) //if never asked before
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[1] = 99;
            cout << "What is the name of the Corporation who sells arms to all three factions?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "ns" or answer == "NS" or answer == "Nanite" or answer == "Nanite Systems" or answer == "Nanites" or answer == "nanitesystems")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct answer: Nanite Systems" << endl;
                startquiz();
            }
        }
        else if(randomnum == 2 and repeated[1] == 99) // If already asked
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 3 and repeated[2] != 99) // etc
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[2] = 99;
            cout << "Which faction has the motto, 'Liberty or Death!'?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "nc" or answer == "newconglomerate" or answer == "NC" or answer == "new conglomerate" or answer == "New Conglomerate" or answer == "NewConglomerate")
            {
                cout << endl << "Correct!" << endl;
                totalright = totalright + 1;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct answer: New Conglomerate" << endl;
                startquiz();
            }
        }
        else if(randomnum == 3 and repeated[2] == 99) // etc
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 4 and repeated[3] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[3] = 99;
            cout << "Which faction believes that technology is the future of Auraxis?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "vs" or answer == "VS" or answer == "vanu" or answer == "vanu sovereignty" or answer == "Vanu")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Vanu Sovereignty" << endl;
                startquiz();
            }
        }
        else if(randomnum == 4 and repeated[3] == 99)
        {

            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 5 and repeated[4] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[4] = 99;
            cout << "Which faction looks to restore 'Unity'?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "tr" or answer == "terran republic" or answer == "TR" or answer == "Terran Republic")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Terran Republic" << endl;
                startquiz();
            }
        }
        else if(randomnum == 5 and repeated[4] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 6 and repeated[5] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[5] = 99;
            cout << "What is the name of the northernmost continent, which is covered in snow?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "Esamir" or answer == "esamir")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Esamir" << endl;
                startquiz();
            }
        }
        else if(randomnum == 6 and repeated[5] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 7 and repeated[6] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[6] = 99;
            cout << "What is the name of the largest continent?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "hossin" or answer == "Hossin")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Hossin" << endl;
                startquiz();
            }
        }
        else if(randomnum == 7 and repeated[6] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 8 and repeated[7] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[7] = 99;
            cout << "What is the name of the TR's starter carbine?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "trac5" or answer == "Trac 5" or answer == "TRAC 5" or answer == "trac-5" or answer == "TRAC-5" or answer == "Trac-5")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: TRAC-5" << endl;
                startquiz();
            }
        }
        else if(randomnum == 8 and repeated[7] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 9 and repeated[8] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[8] = 99;
            cout << "What is the name of the desert-like continent?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "indar" or answer == "Indar" or answer == "INDAR")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Indar" << endl;
                startquiz();
            }
        }
        else if(randomnum == 9 and repeated[8] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }

        else if(randomnum == 10 and repeated[9] != 99)
        {
            cout << endl << "Question " << questionsasked << ": " << endl << endl;
            questionsasked++;
            repeated[9] = 99;
            cout << "What is the name of the Vanu Sovereignty's starter carbine?" << endl << "Answer: ";
            cin >> answer;
            if(answer == "Solstice VE3" or answer == "Solstice ve3" or answer == "SOLSTICE VE3" or answer == "solstice" or answer == "solstice ve3" or answer == "solsticeve3")
            {
                cout << endl << "Correct!" << endl;
                totalright++;
                startquiz();
            }
            else
            {
                cout << endl << "Sorry! That's incorrect. Correct Answer: Solstice VE3" << endl;
                startquiz();
            }
        }
        else if(randomnum == 10 and repeated[9] == 99)
        {
            srand(time(NULL)); Sleep(1000);
            startquiz();
        }
    }
    else if(questionsasked > 5)
    {
        cout << endl << "You finished the quiz, " << name << "! :)";
        if(totalright == 5)
        {
            cout << endl << "Congratulations, " << name << "! You scored a perfect 5/5!" << endl;
        }
        else if(totalright == 0)
        {
            cout << endl << "Wow... You missed all of them... Better luck next time?" << endl;
        }
        else
        {
            cout << endl << "You Scored: " << totalright << "/5.";
        }
        Sleep(2500);
        cout << endl << endl << "Do you want to take the quiz again? (The questions will be different.)" << endl << "Play again? ";
        cin >> answer;
        if(answer == "yes" or answer == "y" or answer == "Yes" or answer == "YES" or answer == "Y")
        {
            repeated[0] = 0; repeated[1] = 0; repeated[2] = 0; repeated[3] = 0; repeated[4] = 0; repeated[5] = 0; repeated[6] = 0; repeated[7] = 0;
            repeated[8] = 0; repeated[9] = 0;
            cout << endl;
            int main();
        }
        else
        {
            cout << endl << "Thanks for taking the quiz! :)";
            Sleep(2000);
            return 0;
        }
        return 0;
    }
    else
    {
        cout << endl << endl << endl << endl << "ERROR ERROR ERROR ERROR ERROR ERROR ERROR";
        return 0;
    }
}

int main()
{
    cout << "Welcome to the officially unofficial Planetside 2 quiz!" << endl << "Created By [WWPK] Wiyrkomi Wolf Pack" << endl << endl;
    Sleep(500);
    cout << "What is your name, Auraxian?" << endl << "Name: ";
    cin >> name;
    cout << endl << "Greetings, " << name << "!" << endl << "This quiz is made up of five randomly chosen questions.";
    cout << endl << endl << "Due to my limited programming abilities, please enter" << endl << "your answer in all lowercase, without dashes/spaces. Thanks!";
    Sleep(1000);
    cout << endl << endl << "The quiz will begin in 5 seconds." << endl;
    Sleep(4900);
    startquiz();
    return 0;
}
