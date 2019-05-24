#include <iostream>

using namespace std;

double tab[10][5][30];

/********************************************/
// function for zeroing a multi-dimensional array (or putting the same value in it)
/********************************************/

void zeroArray(double arr[][5][30])
{
    int a;
    int b;
    int c;

    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            for(c=0; c<30; c++)
            {
                arr[a][b][c] = 0.0;
            }
            c = 0;
        }
        b = 0;
    }
}

/********************************************/

int main()
{
    zeroArray(tab);

    int a, b, c;

    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            for(c=0; c<30; c++)
            {
                cout << tab[a][b][c] << "\t";
            }
            cout << "end tab[" << a << "][" << b << "]" << endl;
            c = 0;
        }
        cout << "end tab[" << a << "]" << endl;
        b = 0;
    }
    return 0;
}
