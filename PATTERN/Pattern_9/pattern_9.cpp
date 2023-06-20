#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of row" << endl;
    cin >> n ;

    int row =  1 ;

    while ( row <= n){
        int column = 1 ;
        int value = row ;
        while ( column <= row ){  
            cout << value << " "  ;
            value = value - 1 ;
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
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1