#include <stdio.h>

int main() {
  int max, a, b, c;
   scanf("%d%d%d", &a, &b, &c);
   max = a;
   if(b>max){
      max = b;
   }
   if(c>max){ 
      max = c;
   }
   printf("So lon nhat la %d", max);
  return 0;
}