#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>> n;
    
    int row;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<col ;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
}


/*print 
        1234
        1234
        1234
        1234
*/