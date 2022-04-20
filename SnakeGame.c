#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz Wed Apr 20 15:27:48 2022

// SnakeGame

int field[80][23] = {0};
int k,l;
int queueColumn[300];
int queueRow[300];


void gotoxy(short x, short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_Pos = {x-1, y-1};

    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}



void frame(int x1, int y1, int x2, int y2, int tip)
{
    int i;
    for(i = x1; i <= x2; i++)
    {
        field[i][y1] = tip;
        field[i][y2] = tip;
    }
    for(i = y1; i<= y2; i++)
    {
        field[x1][i] = tip;
        field[x2][i] = tip;
    }
}



void screenWrite()
{
    int x,y;
    for(x = 0; x < 80; x++)
    {
        for(y = 0; y < 23; y++)
        {
            gotoxy(x+1, y+1);
            if(field[x][y] == 2)
            {
                printf("%c",176);
            }
        }
    }
}



int randomAta()
{
    srand(time(NULL));
    k = 4 + rand()%65;
    l = 4 + rand()%15;

}



void main()
{
    randomAta();
    frame(0,0,79,22,2);
    screenWrite();
    int sx = 40,sy = 12;
    unsigned char key;
    int dy = 0;
    int dx = 0;
    int a = 0;
    int i;
    int gameProcess = 1;



    do{

    if(kbhit())
    {
         key = getch();
         if(key == 224)
         {
             key = getch();
             switch(key)
             {
                 case 72: dy = -1; dx = 0;
                    break;
                case 80: dy = 1; dx = 0;
                    break;
                case 77: dx = 1; dy = 0;
                    break;
                case 75: dx = -1; dy = 0;

             }
         }

    }
    sx += dx;
    sy += dy;

    if(sx > 78)
        sx = 2;
    if(sx < 2)
        sx = 78;
    if(sy > 22)
        sy = 2;
    if(sy < 2)
        sy = 22;



    queueColumn[0] = sx;
    queueRow[0] = sy;



    for(i = 1; i <= a; i++)
    {
        if(sx == queueColumn[i] && sy == queueRow[i])
        {
            gotoxy(sx,sy);printf("---FAILED---");
            getch();
            gameProcess = 0;
        }
    }



    gotoxy(sx,sy); printf("*");
    for(i = 0; i <= a; i++)
    {
        gotoxy(queueColumn[i],queueRow[i]);printf("*");
    }


    if(sx == k && sy == l)
    {
        randomAta();
        a ++;
        gotoxy(2,2);printf("Score: %d",a);
    }



    gotoxy(k,l);printf("B");

    Sleep(60);
    gotoxy(sx, sy); printf(" ");


    for(i = 0; i <= a; i++)
    {
        gotoxy(queueColumn[i],queueRow[i]);printf(" ");
    }



    for(i = a; i > 0; i--)
    {
        queueColumn[i] = queueColumn[i-1];
        queueRow[i] = queueRow[i-1];
    }

    }
    while(gameProcess);

}
