#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row and column" << " ";
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        int column = 1 ;
         while ( column <= n ) {
            char value = 'A' + row + column - 2 ;
            cout<< value << " " ;
            value = value + 1 ;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}



// OUTPUT:-

// Enter the number of row and column 3
// A B C 
// B C D
// C D E