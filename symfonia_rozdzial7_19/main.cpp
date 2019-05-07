#include <iostream>

using namespace std;

char A[10];
char Z[10];

int main()
{
    for(int i=0; i<10; )
    {
        A[i++] = Z[i++]; // operation on i may be undefined, i bedzie inkrementowane dwukrotnie
        cout << i << endl;
    }
    return 0;
}
