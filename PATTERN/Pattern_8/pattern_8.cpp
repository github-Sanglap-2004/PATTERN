#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of row" << endl;
    cin >> n ;

    int row =  1 ;

    while ( row <= n){
        int column = 1 ;
        while ( column <= row ){
            int value = row + column - 1 ; 
            cout << value << " "  ;
            value = value + 1 ;
            column = column + 1 ;
        }
        cout << endl ;
        row = row + 1 ;
    }
    return 0 ;
}


// OUTPUT:-

// Enter the number of row
// 5
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9