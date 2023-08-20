 #include<iostream>
 using namespace std;
 int main(){
    int row, column,n;
    cin>> n;
    row=1;
    int count=1;
   
    while(row<=n){
         column=1;
        while(column<=row){
            cout<<count;
            column++;
            count++;

        }
        cout<<endl;
        row++;
    }
 }