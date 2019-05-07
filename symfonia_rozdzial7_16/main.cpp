#include <iostream>

using namespace std;

char tabl[10] = { "ABCD" };

int main()
{
    tabl[6] = 'm'; // poprawne
    tabl[10] = { "GGGG" }; // niepoprawne
    tabl[0] = { "GGGG" }; // niepoprawne
    tabl[5] = "a"; // niepoprawne
    tabl[] = 'a'; // niepoprawne
    tabl = '7'; // niepoprawne
    tabl = "7"; // niepoprawne

    for(int i=0; i<10; i++)
    {
        cout << tabl[i];
    }
    return 0;
}
