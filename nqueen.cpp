/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int arr[5][5];

void display(int n)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }cout<<endl;
    cout<<endl;
    cout<<endl;
}
bool safe_place(int col,int row,int n)
{
    //check for same column
    for(int i=0;i<row;i++)
    {
        if(arr[i][col])
        {
            return false;
        }
    }
    //check for left diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(arr[i][j])
        {
            return false;
        }
    }
    
    //check for right diagonal
    for(int i=row,j=col;i>=0 && j<n;j++,i--)
    {
        if(arr[i][j])
        {
            return false;
        }
    }
    return true;
}

bool solve(int n,int row)
{
    //checks if all the queens are placed
    if(n==row)
    {
        display(n);
        return true;
    }
    bool result=false;
    for(int i=0;i<=n-1;i++)
    {
        if(safe_place(i,row,n)){
            arr[row][i]=1;
            result=solve(n,row+1)||result;
            arr[row][i]=0;
        }
    }
    return result;
    
    
    
}


int main()
{
    int n;
    cout<<"Enter the number of queens";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    bool result=solve(n,0);
    if(result==false)
    {
        cout<< -1 <<endl;
    }
    else
    {
        cout<<endl;
    }
    

    return 0;
}
/* This code finds the solution to the nqueen problem i.e, the number of ways in which n queens can be placed in an nxn matrix */