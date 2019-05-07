#include <iostream>

using namespace std;

char dlugi[] = "Mamy tablice znakow, w ktorej znajduje sie dlugi C-string bedacy tekstem skladajacym sie z kilkunastu wyrazow. Napisz funkcje, ktora przekopiuje ten C-string do dwoch innych tablic.";
char parzyste[255];
char nieparzyste[255];

void segregacja(char zrodlo[], char parz[], char niep[] )
{
    int z = 0;
    int s = 0;
    int p = 0;
    int n = 0;
    while(zrodlo[z])
    {
        if(zrodlo[z] == ' ') s++;

        if(s % 2)
        {
            parz[p] = zrodlo[z];
            if(zrodlo[z] == ' ')
            {
                p++;
                parz[p] = ' ';
            }
            else p++;
        }
        else
        {
            niep[n] = zrodlo[z];
            if(zrodlo[z] == ' ')
            {
                n++;
                niep[n] = ' ';
            }
            else n++;
        }
        z++;
    }
}

int main()
{
    segregacja(dlugi, parzyste, nieparzyste);

    int i = 0;
    while(parzyste[i])
    {
        cout << parzyste[i];
        i++;
    }
    i = 0;
    cout << endl << endl;
    while(nieparzyste[i])
    {
        cout << nieparzyste[i];
        i++;
    }

    return 0;
}
