#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void)
{
    char walk[N][N] = {{0}};
    generate_random_walk(walk);
    print_array(walk);    
    return 0;
}

void print_array(char walk[N][N])
{
  for(int i = 0; i < N; ++i)
  {
    for(int j = 0; j < N; ++j)
    {
      if(walk[i][j] == 0)
        printf("* ");
      else
        printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
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
        bool move_up = walk[x+1][y] == 0 && x+1 < N;
        bool move_right = walk[x][y+1] == 0 && y+1 < N;
        bool move_down = walk[x-1][y] == 0 && x > 0;
        bool move_left = walk[x][y-1] == 0 && y > 0;
        // Exit if there are no available moves
        if (!move_up && !move_right && !move_down && !move_left)
          return;
        bool need_move = true;
        while(need_move)
        {
          int next_move = rand() % 4;
          switch(next_move)
          {
            case 0:
              if(move_up)
              {
                x = x + 1;
                need_move = false;
              }
              break;
            case 1:
              if(move_right)
              {
                y = y + 1;
                need_move = false;
              }
              break;
            case 2:
              if(move_down)
              {
                x = x - 1;
                need_move = false;
              }
              break;
            case 3:
              if(move_left)
              {
                y = y -1;
                need_move = false;
              }
              break;
            default:
              printf("Nooooooooo!");
              break;
          }
        } 
    }while(ch <= 'Z' && legal_moves);
}
