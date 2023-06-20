#include <iostream>
using namespace std ;
int main() {
    int n;
    cout << "Enter the number of row and column" ;
    cin >> n;

    int row = 1 ;
    while ( row <= n) {
        int column = 1 ;
        int value = 1 ;
        while ( column <= n ){
            cout << value << " " ;
            value  = value + 1 ;
            column = column + 1 ;
        }
        cout << endl ;
        row = row + 1 ;
    }
}




// OUTPUT :-

// Enter the number of row and column5
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
