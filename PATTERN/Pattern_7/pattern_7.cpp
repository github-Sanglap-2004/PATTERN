#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of row" << endl;
    cin >> n ;

    int value = 1 ;
    int row =  1 ;

    while ( row <= n){
        int column = 1 ; 
        while ( column <= row ){
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
// 6

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
