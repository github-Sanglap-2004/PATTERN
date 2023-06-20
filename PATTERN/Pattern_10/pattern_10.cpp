#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row and column" << " ";
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        int column = 1 ;
        int value = row ;

        while ( column <= n ) {
            char value = 'A' + row - 1 ;
            cout<< value << " " ;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}


// OUTPUT:-

// Enter the number of row and column5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E