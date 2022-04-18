#include <iostream>
using namespace std;


void getloc(int puzzle[3][3], int &lx, int &ly)
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (puzzle[x][y] == 0)
            {
                lx=x;
                ly=y;
            }
        }
    }
}

bool whatIsValid(bool *ttable, int x, int y)
{
    if (y-1 >= 0 && y-1 <3)
    {
        ttable[0]=true;
    }
    if (y+1 >= 0 && y+1 <3)
    {
        ttable[1]=true;
    }
    if (x-1 >= 0 && x-1 <3)
    {
        ttable[2]=true;
    }
    if (x+1 >= 0 && x+1 <3)
    {
        ttable[3]=true;
    }
}
int main()
{
    int x = 0;
    int y = 0;
    int puzzle[3][3] =  {{1, 8, 2},
                        {0, 4, 3},  // Value 0 is used for empty space
                        {7, 6, 5}};
    
    bool udlr[4] = {false, false, false, false};

    getloc(puzzle, x, y);

    whatIsValid(udlr, x, y);

    

    return 0;
}