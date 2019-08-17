#include <iostream>
#include "pendu_f.hpp"

int main()
{
    char *mot;
    char *result;
    int tries = 8;
    char t;
    string l,p;

    mot = (char*)malloc(1024 * sizeof(char));
    result = (char*)malloc(1024 * sizeof(char));
    cout << "Bienvenue sur un jeux de pendu programmer en C++\n";
    cout << "Choisissez votre mot: ";
    cin >> mot;
    result = create_result(mot);
    l = string(mot);
    while(l != p && tries > 0)
    {
        cout << "================================\n";
        cout << "Vous avez trouver: ";
        for(int j = 0; j <= 0 ; j++)
            cout << "\"" << result << "\"" << endl << endl;
        cout << "A vous de jouer(il vous reste " << tries << " essais): ";
        cin >> t;
        system("CLS");
        if(check_t(t, mot) == 1)
        {
            result = add_result(t, mot, result);
            cout << endl << "!!! Bien jouer !!!" << endl << endl;
        }
        else
        {
            tries--;
            cout << endl << "/!\\ Perdu /!\\" << endl << endl;
        }
        p = string(result);
    }
    if(l == p)
    {
        cout << "================================\n";
        cout << "Vous avez trouver: ";
        cout << "\"" << result << "\"" << endl << endl;
    }
    system("Pause");
    cout << "Quitting..." << endl;
    free(mot);
    free(result);
}