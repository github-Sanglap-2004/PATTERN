#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << " Enter the number of row " ;
    cin >> n ;

    int row = 1 ;
    while ( row <= n ){

        // Print first triangale 
        int column1 = 1 ;
        while ( column1 <= n - row + 1  ){
            
            cout << column1   ;
            column1 = column1 + 1 ;
        }
        
        // Print second trianla ( half of star)
        int star1 = row - 1 ;
        while ( star1 ){
            cout << "*" ;
            star1 = star1 - 1 ;
        }

        // Print third triangle ( Rest of the star)
        int star2 = row - 1 ;
        while ( star2 ){
            cout << "*" ;
            star2 = star2 - 1 ;
        }

        // Print fourth star 
        int column2 = 1;
        while ( column2 <= n - row + 1 ){
            cout << column2 ;
            column2 = column2 + 1 ;
        }

        cout << endl ;
        row = row + 1 ;
    }
    return 0 ;
}



// OUTPUT:=

// Enter the number of row 4
// 12341234
// 123**123
// 12****12
// 1******1