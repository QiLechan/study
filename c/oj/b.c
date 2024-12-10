#include <stdio.h>

int draw = 0;

int check(int arr[])
{
    int chessboard[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            chessboard[i][j] = arr[i * 5 + j];
        }
    }
    for (int i = 0; i < 5; i++)
    {

        //横排五连
        if (chessboard[i][0] == chessboard[i][1] && chessboard[i][1] == chessboard[i][2] && chessboard[i][2] == chessboard[i][3] && chessboard[i][3] == chessboard[i][4])
        {
            return 1;
        }

        //竖排五连
        if (chessboard[0][i] == chessboard[1][i] && chessboard[1][i] == chessboard[2][i] && chessboard[2][i] == chessboard[3][i] && chessboard[3][i] == chessboard[4][i])
        {
            return 1;
        }
    }

    //斜排五连
    if (chessboard[0][0] == chessboard[1][1] && chessboard[1][1] == chessboard[2][2] && chessboard[2][2] == chessboard[3][3] && chessboard[3][3] == chessboard[4][4])
    {
        return 1;
    }
    if (chessboard[0][4] == chessboard[1][3] && chessboard[1][3] == chessboard[2][2] && chessboard[2][2] == chessboard[3][1] && chessboard[3][1] == chessboard[4][0])
    {
        return 1;
    }

    //和棋
    return 0;
}

int generate(int arr[], int i, int count)
{

    // 1的个数
    if (count == 0)
    {
        if (check(arr) == 0)
        {
            draw++;
        }
    }

    // 等于数组长度时退出
    if (i == 25)
    {
        return 0;
    }

    // 如果改为0
    arr[i] = 0;
    generate(arr, i + 1, count);

    // 如果改为1
    arr[i] = 1;
    generate(arr, i + 1, count - 1);

    // 复原
    arr[i] = 0;
    return 0;
}

int main() 
{
    int arr[25];
    for (int i = 0; i < 25; i++)
    {
        arr[i] = 0;
    }
    generate(arr, 0, 12);
    printf("%d", draw);
    return 0;
}