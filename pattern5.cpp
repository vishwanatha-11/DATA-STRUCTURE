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
         //int value=row;
         char value='A';
        while (col <= n)
        {
           //char ch='A'+col-1;  //illi row hakidra same row baratt
            cout<< value<<"    ";
             
            col++;
             value++;
        }
       
        cout<<endl;
        row++;
    }
}