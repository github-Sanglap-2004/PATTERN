#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row and column" << " ";
    cin >> n;
    int row = 1;;
    char value = 'A' ;
    while ( row <= n ) {
        int column = 1 ;
         while ( column <= n ) {
            cout<< value << " " ;
            value = value + 1 ;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}



// OUTPUT:-

// Enter the number of row and column 5
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y