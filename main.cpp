#include <iostream>

using namespace std;

void mapDraw(int heroPosX, int heroPosY, char map[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int p = 0; p < 5; p++)
        {
            if(i == heroPosY && p == heroPosX)
            {
                cout << 'H';
            }else
            {
                cout << map[p][i];
            }
        }
        cout << "" << endl;
    }
}

int main()
{
    char Input = ' ';
    int HeroPosX = 0;
    int HeroPosY = 0;
    char GameMap[5][5] =
    {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };
    bool IsGameOver = false;

   while(IsGameOver == false)
   {
        mapDraw(HeroPosX, HeroPosY, GameMap);
        cin >> Input;
        switch(Input)
        {
            case'd':
                HeroPosX++;
                break;
            case'a':
                HeroPosX--;
                break;
            case'w':
                HeroPosY--;
                break;
            case's':
                HeroPosY++;
                break;
            case'p':
                IsGameOver = true;
                break;
        }
   }
    return 0;
}
