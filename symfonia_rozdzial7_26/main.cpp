#include <iostream>

using namespace std;

int a = 3;
int b = 10;
int c = 0;

int natural[3][10]; // natural[3][10]

int main()
{
    for(int i=0; i<b; i++)
    {
        natural[c][i] = i;
        natural[c+1][i] = i*i;
        natural[c+2][i] = i*i*i;
    }

    for(int i=0; i<b; i++)
    {
        cout << natural[c][i] << "\t";
        cout << natural[c+1][i] << "\t";
        cout << natural[c+2][i] << "\t";
        cout << endl;
    }

    return 0;
}
