#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the number of row " ;
    cin >> n ;

    int row = 1;
    while ( row <= n ){
        int column = 1 ;
        char ch = 'A' + n - row ;
        while (  column <= row ){ 
            cout << ch << " " ;
            ch = ch + 1 ;
            column = column + 1 ;
        }
        cout << endl;
        row = row + 1 ;
    }

        return 0 ;
    }



//     OUTPUT:= 

//     Enter the number of row 4
// D 
// C D
// B C D
// A B C D
