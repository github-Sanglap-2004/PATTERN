#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enetr the enumber of row" << " " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){
        int column = 1 ;
        while ( column <= row ){
            char ch = 'A' + row - 1 ;
            cout << ch << " " ;
            column = column + 1 ;
        }
        cout << endl ;
        row = row + 1 ;
    }
        return 0 ;
    }



//     OUTPUT:=

//     Enetr the enumber of row 4
// A 
// B B
// C C C
// D D D D

