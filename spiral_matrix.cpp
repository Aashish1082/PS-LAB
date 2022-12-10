#include <iostream>
#define ROW 3
#define COL 6
using namespace std;
int array[ROW][COL] = {{1, 2, 3, 4, 5, 6},
   {7, 8, 9, 10, 11, 12},
   {13, 14, 15, 16, 17, 18}};
void dispSpiral(int m, int n){
   int i, currRow = 0, currCol = 0;
   while (currRow < ROW && currCol < COL){
      for (i = currCol; i < n; i++){ 
      cout << array[currRow][i]<<" ";
   }
   currRow++; 
   for (i = currRow; i < m; ++i){
      cout << array[i][n-1]<<" ";
   }
   n--; 
   if ( currRow < m){ 
      for (i = n-1; i >= currCol; --i)
      { 
         cout << array[m-1][i]<<" ";
      }
      m--; 
   }
   if (currCol < n){ 
      for (i = m-1; i >= currRow; --i){
         cout << array[i][currCol]<<" ";
      }
      currCol++;
      }
   }
}
int main(){
   dispSpiral(ROW, COL);
}