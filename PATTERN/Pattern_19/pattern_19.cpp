#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){
        int column = 1 ;
        int col = n - row + 1 ;
        while ( column <=col ){
            cout << "*" << " " ;
            column = column + 1 ;

        }
        cout << endl ;
        row = row + 1 ;
    }

    return 0;
}



// OUTPUT :=

// Enter the number of 4
// * * * * 
// * * *
// * *
// *