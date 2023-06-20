#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){
        
        // Print the space
        int space = n - row ;
        while ( space ){
            cout << " " << " ";
            space = space - 1 ;
        }

        // Print the star
        int column = 1 ;
        while( column <= row ){
            cout << "*" << " " ;
            column = column + 1 ;
        }
        cout << endl;
        row = row + 1 ;
    }
    return 0 ;
}


// OUTPUT:=

// Enter the number of 4
//       *
//     * *
//   * * *