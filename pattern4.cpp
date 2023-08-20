#include <iostream>
using namespace std;
int main()
{
    int row, col;
    row = 1;
    int n;

    cin >> n;
    while (row <= n)
    {
        col = 1;
         int value=row;
        while (col <= row)
        {
           
            cout<<value<<"    ";
            value--;  //++ baradr increasing order baratt
            col++;
        }
        cout<<endl;
        row++;
    }
}