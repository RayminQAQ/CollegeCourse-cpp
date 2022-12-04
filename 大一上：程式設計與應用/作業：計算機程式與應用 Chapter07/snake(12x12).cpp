/* 貪食蛇，輸入12x12的迷宮，輸出當前貪食蛇走過迷宮的路徑圖，直到結束 */
#include <iostream>

enum direction{
    up = 0, down, left, right
};

typedef struct Snake{
    enum direction m_head;
    int mx_axis;
    int my_axis;
}Snake;

int main(void){
// Input maze-> # ·
    char maze[12][12];
    for(int i = 0;i<12;i++){
        for(int j=0;j<12;j++){
            std::cin>>maze[i][j];
        }
    }

// Operation： 牆# 空格. 走過的路 X
    //1 找到起始點位置(先簡單劃設會在左側 12x第1 的牆)
    //2 從起始點位置出發，右側靠著牆 -> 紀錄右邊有沒有牆壁
    //3 走路方向優先權：右邊->直走->左轉->往回，可以用recursion?
    //4 停止條件：位置在 row:0、11；column:0、11 就停止
    // 座標設定：左上(0,0) 右下(11,11)，maze[y座標][x座標]
    // 小發現，迷宮最外圍會被牆圍住，所以如果走出外面的牆就是終點

//1
    Snake snake;
    for(int i=0;i<12;i++){
        if(maze[i][0] == '.'){
            maze[i][0] = 'X';
            snake.m_head = left;
            snake.my_axis = i;
            snake.mx_axis = 0;
            break;
        }
    }
//2-4
    do{
        // 根據當前的頭朝向去做分類，並同時更新maze
        switch(snake.m_head){
            case up:
            {// 走路方向優先權：右 直行 左 下
                if(maze[snake.my_axis][snake.mx_axis+1]!='#'){
                    // ? snake = {left,snake.mx_axis + 1,snake.my_axis};
                    maze[snake.my_axis][snake.mx_axis+1]='X';
                    snake.m_head = right;
                    snake.mx_axis += 1;
                }else if(maze[snake.my_axis-1][snake.mx_axis]!='#'){
                    maze[snake.my_axis-1][snake.mx_axis]='X';
                    snake.my_axis -= 1;
                }else if(maze[snake.my_axis][snake.mx_axis-1]!='#'){
                    maze[snake.my_axis][snake.mx_axis-1]='X';
                    snake.m_head = left;
                    snake.mx_axis -= 1;
                }else{
                    snake.m_head = down;
                    // snake.mx_axis;
                    snake.my_axis += 1;
                }
            }
            break;
            case down:
            {// 走路方向優先權：左下右上
                if(maze[snake.my_axis][snake.mx_axis-1]!='#'){
                    maze[snake.my_axis][snake.mx_axis-1]='X';
                    snake.m_head = left;
                    snake.mx_axis -= 1;
                }else if(maze[snake.my_axis+1][snake.mx_axis]!='#'){
                    maze[snake.my_axis+1][snake.mx_axis]='X';
                    snake.my_axis += 1;  
                }else if(maze[snake.my_axis][snake.mx_axis+1]!='#'){
                    maze[snake.my_axis][snake.mx_axis+1]='X';
                    snake.m_head = right;
                    snake.mx_axis +=1;
                }else{
                    snake.m_head = up;
                    snake.my_axis -=1;
                }
            }
            break;
            case right:
            {// 走路方向優先權：下右上左
                if(maze[snake.my_axis+1][snake.mx_axis]!='#'){
                    maze[snake.my_axis+1][snake.mx_axis]='X';
                    snake.m_head = down;
                    snake.my_axis +=1;
                }else if(maze[snake.my_axis][snake.mx_axis+1]!='#'){
                    maze[snake.my_axis][snake.mx_axis+1]='X';
                    snake.mx_axis +=1;
                }else if(maze[snake.my_axis-1][snake.mx_axis]!='#'){
                    maze[snake.my_axis-1][snake.mx_axis]='X';
                    snake.m_head = up;
                    snake.my_axis -=1;
                }else{
                    snake.m_head = left;
                    snake.mx_axis -=1;
                }
            }
            break;
            case left:
            {// 走路方向優先權：上左下右
                if(maze[snake.my_axis-1][snake.mx_axis]!='#'){
                    maze[snake.my_axis-1][snake.mx_axis]='X';
                    snake.m_head = up;
                    snake.my_axis -=1;
                }else if(maze[snake.my_axis][snake.mx_axis-1]!='#'){
                    maze[snake.my_axis][snake.mx_axis-1]='X';
                    snake.mx_axis -=1;
                }else if(maze[snake.my_axis+1][snake.mx_axis]!='#'){
                    maze[snake.my_axis+1][snake.mx_axis]='X';
                    snake.m_head = down;
                    snake.my_axis +=1;
                }else{
                    maze[snake.my_axis][snake.mx_axis+1]='X';
                    snake.mx_axis +=1;
                    snake.m_head = right;
                }
            }
            break;
        }
        // 印出當前 maze
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                std::cout<<maze[i][j];
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }while(snake.mx_axis!=11 && snake.my_axis!=11/*x座標不為11；且；y座標不為0、11*/);
}

/*
############
#...#......#
..#.#.####.#
###.#....#.#
#....###.#..
####.#.#.#.#
#..#.#.#.#.#
##.#.#.#.#.#
#........#.#
######.###.#
#......#...#
############

*/