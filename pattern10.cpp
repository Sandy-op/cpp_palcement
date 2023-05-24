#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>> n;

    int row ;
    while(row<=n)
    {
        int space = n - row ;
        while(space)
        {
            cout<< " ";
            space = space - 1;
        }
        int col = 1;
        while(col<=row)
        {
            cout<<"*";
            col = col + 1;
        }
        int star = 0 ;
        while(star<=row)
        {
            cout<< "*";
            star = star + 1;
        }
        cout<< endl;
        row = row + 1 ;
    }
}