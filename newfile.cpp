// C++ Templates 
 
 #include <iostream>
 using namespace std ;
 
 class vector 
 {
     public :
     int *arr ;
     int size ;
          vector (int m) 
          {
              size = m ;
              arr = new int [size ] ;
          }
          
          int dotproduct (vector &v) {
              int d = 0 ;
              for (int i =0 ; i<size ; i++)
              
              {
                  d+ = this -> arr[i] * v.arr[i] ;
              }
              return d ;
              
          }
 };
 int main ( )
 {
     
     vector v1(3) ; 
     v1.arr[0] = 4 ;
     v2.arr[1] = 5 ;
     v3.arr[2] = 2 ;
     
     vector v2(3) ;
     v2.arr[0] = 6 ;
     v2.arr[1] = 7 ;
     v3.arr[2] = 1 ;
     
    int a = v1.dotproduct (v2) 
    cout << a << endl ;
    return 0 ;
 }