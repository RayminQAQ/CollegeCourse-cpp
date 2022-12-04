#include <iostream>

typedef struct currentSnake
{
    char maze[12][12];
    int row;
    int col;
    enum direction front;
}currentSnake;

enum direction{
    top = 0, down, right, left,
}

int main(void){
    currentSnake snake;
    for(int i = 0;i<12;i++){
        for(int j=0;j<12;j++){
            std::cin>>snake.maze[i][j];
        }
    }
// Operation： 牆# 空格· 走過的路 X
    //1 找到起始點位置(先簡單劃設會在右側)
    //2 從起始點位置出發，右側靠著牆 -> 紀錄右邊有沒有牆壁
    //3 走路方向優先權：右邊->直走->左轉->往回，可以用recursion?
    //4 停止條件：位置在 row:0、11；column:0、11 就停止
//1
    for(int i=0;i<12;i++){
        if(snake.maze[i][0] == '·'){
            snake.maze[i][0] = 'X';
            snake.row = i;
            snake.col = 0;
            snake.front = right;
        }
    }
//2
    while()
}
