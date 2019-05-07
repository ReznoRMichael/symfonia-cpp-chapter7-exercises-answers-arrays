#include <iostream>

using namespace std;

char tablica_zrodlo[9] = { "instytut" };
char tablica_cel[9];

void stringcopy( char zrodlo[], char cel[] ) // funkcja do kopiowania co drugiej litery C-stringu
{
    int z = 0;
    int c = 0;
    while( (cel[c] = zrodlo[z]) )
    {
        c++;
        z+=2;
    }
}

int main()
{
    stringcopy(tablica_zrodlo, tablica_cel);

    for(int i=0; i<9; i++)
    {
        cout << tablica_cel[i];
    }

    return 0;
}
