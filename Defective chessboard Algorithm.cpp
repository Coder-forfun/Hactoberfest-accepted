#include<iostream>
#include<iomanip>
using namespace std;
int board[10][10],tile=1;
void tileBoard(int trow,int tcol, int drow,int dcol,int size)
{
    if(size==1)
        return;
    int tileNum=tile++;
    int qsize=size/2;
    /*First Quadrant*/
    if(drow<trow+qsize && dcol<tcol+qsize)
        tileBoard(trow,tcol,drow,dcol,qsize);
    else
    {
        board[trow+qsize-1][tcol+qsize-1]=tileNum;
        tileBoard(trow,tcol,trow+qsize-1,tcol+qsize-1,qsize);
    }
    /*Second Quadrant*/
    if(drow<trow+qsize && dcol>=tcol+qsize)
    {
        tileBoard(trow,tcol+qsize,drow,dcol,qsize);
    }
    else
    {
        board[trow+qsize-1][tcol+qsize]=tileNum;
        tileBoard(trow,tcol+qsize,trow+qsize-1,tcol+qsize,qsize);
    }
    /*Third Quadrant*/
    if(drow>=trow+qsize && dcol<tcol+qsize)
    {
        tileBoard(trow+qsize,tcol,drow,dcol,qsize);
    }
    else
    {
        board[trow+qsize][tcol+qsize-1]=tileNum;
        tileBoard(trow+qsize,tcol,trow+qsize,tcol+qsize-1,qsize);
    }
    /*Fourth Quadrant*/
    if(drow>=trow+qsize && dcol>=tcol+qsize)
    {
        tileBoard(trow+qsize,tcol+qsize,drow,dcol,qsize);
    }
    else
    {
        board[trow+qsize][tcol+qsize]=tileNum;
        tileBoard(trow+qsize,tcol+qsize,trow+qsize,tcol+qsize,qsize);
    }
}
void display(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(5)<<board[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    int n,dr,dc;
    cout<<"Enter board size ( nxn ):";
    cin>>n;
    cout<<"Enter the defective row and column:";
    cin>>dr>>dc;
    tileBoard(0,0,dr,dc,n);
    display(n);

}
