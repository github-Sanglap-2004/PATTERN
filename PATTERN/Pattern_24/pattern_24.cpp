#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of row " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){
        int space = n - row ;
        while ( space ){
            cout << " " ;
            space = space - 1 ; 
        }
        int column = 1 ;
        while ( column <= row ){
            
            cout << column ;
            
            column = column + 1 ;
        }

        int start = row - 1 ;
        while ( start ){
            cout << start ;
            start = start - 1 ;
        }
        cout << endl ;
        row = row + 1 ;

    }
    
    return 0 ;
}




// OUTPUT:-

// Enter the number of row 4
//    1
//   121
//  12321
// 1234321