/* by ssy2306 */

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool isSafe(int board[4][4], int row, int col)
{
    int i,j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (i = row, j = col; j >= 0 && i < 4; i++, j--)
        if (board[i][j])
            return false;
  
    return true;
}
bool nQueen(int board[4][4],int row)
{
    if(row==4)
        return true;
    for (int i= 0; i<4; i++)
    {
        if(isSafe(board,row,i))
        {
            board[row][i]=1;
            if(nQueen(board,row+1))
            return true;
            board[row][i]=0;
        }
    }
    return false;
}

void printSolution(int board[4][4])
{
     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << " " << board[i][j] << " ";
        printf("\n");
    }
}

void fun()
{
    int board[4][4];
    for(int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            board[i][j]=0;
        }
        
    }
    nQueen(board,0);
    printSolution(board);
}

//------------------MAIN------------------/
int main()
{
    fun();   
}
