#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row and column" << " ";
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        int column = 1 ;
        char value = 'A' + row - 1 ;
         while ( column <= n ) {
            cout<< value << " " ;
            value = value + 1 ;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}


// OUTPUT:=

// Enter the number of row and column 4
// A B C D 
// B C D E
// C D E F
// D E F G