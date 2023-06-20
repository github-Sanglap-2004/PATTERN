    #include <iostream>
    using namespace std ;

    int main(){
        int n ;
        cout << "Enter the number of row" << " " ;
        cin >> n ;

        
        int row = 1;
         while (row <= n ){

         int column = 1 ;

         while ( column <= row ){
            char ch = 'A' + column + row  - 2 ;
            cout << ch <<" " ;
             
             column = column + 1 ;
         }
         cout << endl ;
         row = row + 1 ;
         }
    }


// OUTPUT:=
//     Enter the number of row 4
// A 
// B C
// C D E
// D E F G