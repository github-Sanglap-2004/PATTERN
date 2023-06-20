#include <iostream>
using namespace std ;
int main() {
    int n;
    cout << "Enter the number of row and column" ;
    cin >> n;

    int row = 1 ;
    while ( row <= n) {
        int column = 1 ;
        while ( column <= n ){
            cout << row << " ";
            column = column + 1 ;
        }
        cout << endl ;
        row = row + 1;
    }
        
        return 0;
    }



//     OUTPUT :-

//     Enter the number of row and column5
// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5