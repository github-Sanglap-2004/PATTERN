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
            cout << "*" << " "  ;
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
// * 
// * *
// * * *
// * * * *
// * * * * *