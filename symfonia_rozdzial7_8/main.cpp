#include <iostream>

using namespace std;

enum ruch { w_przod, w_tyl, stop };

ruch tabl[15] = { w_przod, w_tyl, w_przod, w_tyl, stop };

int main()
{
    for(int i=0; i<15; i++)
    {
        cout << tabl[i] << endl;
    }

    return 0;
}
