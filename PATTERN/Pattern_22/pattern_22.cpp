#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){
        int space = row - 1 ;
        while ( space ){
            cout << " " ;
            space = space - 1 ;
        }
        int column = 1 ;
        int col = n - row + 1 ;
        while ( column <=col ){
            cout << row  ;
            column = column + 1 ;

        }
    
       
       
        cout << endl ;
        row = row + 1 ;
    }

    return 0;
}



// OUTPUT:=

// Enter the number of 4
// 1111
//  222
//   33
//    4