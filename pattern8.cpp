#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    int row;
    while(row<=n)
    {
        int space = 1;
        while(space<=row)
        {
            cout<< " ";
            space = space + 1;
        }
        int col = n - row;
        while(col)
        {
            cout<< "*";
            col = col - 1;
        }
        cout<< endl;
        row = row + 1;
    }
}