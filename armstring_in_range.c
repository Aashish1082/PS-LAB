#include <math.h>
#include <stdio.h>
int main() {
   int a, b, i, num, rem, count = 0;
   int sum = 0;
   printf("Enter the range: ");
   scanf("%d %d", &a, &b);
   for (i = a+1; i < b; i++) 
   {
      num = i;
      while (num != 0) 
	  {
         num /= 10;
         count++;
      }
      num = i;
      while (num != 0) {
         rem = num % 10;
         sum += pow(rem, count);
         num /= 10;
      }
      if(sum == i) 
       {
         printf("%d ", i);
      }
      count = 0;
      sum = 0;
   }
   return 0;
}