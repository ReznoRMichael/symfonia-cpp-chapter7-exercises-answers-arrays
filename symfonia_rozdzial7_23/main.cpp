#include <iostream>

using namespace std;

char tab_p[256] = "Original String.";
char tab_d[256] = "String being appended to original.";

/****************************************************/
// Function to append a string to another string
/****************************************************/

void appendString(char tab_p1[], int sizetab, char tab_d1[])
{
    int s; // to store the ending string array number

    // first find out where the first string is ending
    for(int i=0; ; i++)
    {
        if(tab_p1[i] == 0)
        {
            s = i; // save the ending array index
            break;
        }
    }

    // then append the second string to the end of the first string
    for(int j=0; ; j++)
    {
        tab_p1[s] = tab_d1[j];
        s++;
        // when the string array ends or the second string ends, break and add an ending 0 to the array
        if(s >= sizetab-1 || tab_d1[j] == 0)
        {
            tab_p1[s] = 0; // add an ending 0 to the array
            break;
        }
    }
}

/****************************************************/

int main()
{
    for(int i=0; ; i++)
    {
        cout << tab_p[i];
        if(tab_p[i] == 0)
        {
            cout << endl << endl;
            break;
        }
    }

    // use the function
    appendString(tab_p, 256, tab_d);

    for(int i=0; ; i++)
    {
        cout << tab_p[i];
        if(tab_p[i] == 0)
        {
            cout << endl << endl;
            break;
        }
    }

    return 0;
}
