/*

This is a hanged man codded in C++ by Charles C
This language still pretty new for me so if you have any tip that can improve the code or even make it lighter. 
Fact that i have included pretty much nothing else iostream to try make that the most harder way.
Good game

*/

#include <iostream>
#include "thehangedman_f.hpp"

int main()
{
    char *mot;
    char *result;
    int tries = 8;
    char t;
    string l,p;

    mot = (char*)malloc(lenght(mot) * sizeof(char));
    result = (char*)malloc(lenght(mot)* sizeof(char));
    cout << "Welcome to a hanged man game codded in C++ by Charles C\n";
    cout << "Choose a word: ";
    cin >> mot;
    result = create_result(mot);
    l = string(mot);
    while(l != p && tries > 0)
    {
        cout << "================================\n";
        cout << "You have fould: ";
        for(int j = 0; j <= 0 ; j++)
            cout << "\"" << result << "\"" << endl << endl;
        cout << "It's your turn (you have " << tries << " tries left): ";
        cin >> t;
        #ifdef __unix__ 
            system("clear");
        #else
            system("CLS");
        #endif
        if(check_t(t, mot) == 1)
        {
            result = add_result(t, mot, result);
            cout << endl << "!!! NICE JOB !!!" << endl << endl;
        }
        else
        {
            tries--;
            cout << endl << "/!\\ WRONG /!\\" << endl << endl;
        }
        p = string(result);
    }
    if(l == p)
    {
        cout << "================================\n";
        cout << "You have found: ";
        cout << "\"" << result << "\"" << endl << endl;
    }
    system("Pause");
    cout << "Quitting..." << endl;
    free(mot);
    free(result);
}