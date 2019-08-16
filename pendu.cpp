#include <iostream>
#include "pendu_f.hpp"

int main()
{
    char *mot;
    char *result;
    int tries = 8;
    char t;

    mot = (char*)malloc(1024 * sizeof(char));
    result = (char*)malloc(1024 * sizeof(char));
    cout << "Bienvenue sur un jeux de pendu programmer en C++\n";
    cout << "Choisissez votre mot: ";
    cin >> mot;
    result = create_result(mot);
    while(result != mot && tries > 0)
    {
        cout << "===================\n";
        cout << "Vous avez trouver: ";
        for(int j = 0; j <= 0 ; j++)
            cout << "\"" << result << "\"" << endl << endl;
        cout << "A vous de jouer(il vous reste " << tries << " essais): ";
        cin >> t;
        if(check_t(t, mot))
        {
            result = add_result(t, mot, result);
            cout << "!!! Bien jouer !!!" << endl;
        }
        else
        {
            tries--;
            cout << "/!\\ Perdu /!\\" << endl;
        }
    }
    free(mot);
    free(result);
}