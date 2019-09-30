#include <iostream>
#include <unistd.h>
#include "keyprint.h"

using namespace std;

void keyprint(string input)
{
    //cout << "\033[2J\033[1;1H";

    string s(input);

    int i;
    for (i = 0; i < s.length(); i++) {
        cout << s[i] << flush;
        usleep(60000);
    }
    //cout << endl;
    usleep(750000);
}
