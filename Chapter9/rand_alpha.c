#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N N

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void)
{
    
    return 0;
}

void generate_random_walk(char walk[N][N])
{
    srand((unsigned) time(NULL));
    char ch = 'A';
    bool legal_moves = true;
    int x = rand() % N, y = rand() % N;
    do{
        walk[x][y] = ch;
        ++ch;
        if(walk[x+1][y] == 0 || walk[x-1][y] == 0 || walk[x][y+1] == 0 || walk[x][y-1] == 0)
            legal_moves = false;
        else

    }while(ch <= 'Z' && legal_moves);
}
