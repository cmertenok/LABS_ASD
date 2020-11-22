
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define START_1I 0
#define START_1J 79
#define END_1I 11
#define END_1J 79

#define START_2I 23
#define START_2J 0
#define END_2I 12
#define END_2J 0

int mtx[24][80] = { 0 };

void gotoXY(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void printMtx(int i, int j) {
    gotoXY(j, i);
    putchar('0');
}

int main() {
    int cur_1i = START_1I;
    int cur_1j = START_1J;
    int cur_2i = START_2I;
    int cur_2j = START_2J;
    while ((cur_1i != END_1I || cur_1j != END_1J) && (cur_2i != END_2I || cur_2j != END_2J)) {
        if (cur_1i % 2 == 0) {
            if (cur_1j != 0) {
                printMtx(cur_1i, cur_1j);
                cur_1j--;
                printMtx(cur_2i, cur_2j);
                cur_2j++;
            }
            else {                
                cur_1i++;            
                cur_2i--;
            }
        }
        else {
            if (cur_1j != 79) {               
                cur_1j++;              
                cur_2j--;
            }
            else {                
                cur_1i++;               
                cur_2i--;
            }
        }
        mtx[cur_1i][cur_1j] = 1;
        mtx[cur_2i][cur_2j] = 1;
        printMtx(cur_1i, cur_1j);
        printMtx(cur_2i, cur_2j);
        Sleep(7);
    }
    getchar();
    return 0;
}

