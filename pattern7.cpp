#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>> n;

    int row = 0;
    while(row<=n)
    {
        int col = n - row ;
        while(col)
        {
            cout<< "*" ;
            col = col - 1;
        }
        cout<< endl;
        row = row + 1;
    }
}