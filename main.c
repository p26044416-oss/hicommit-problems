#include <stdio.h>

int main() {
  int distance, order_value;
    scanf("%d%d", &distance, &order_value);
    if(distance <= 0 || order_value <= 0){
      printf("INVALID");
      }
    else if(distance <=15 && order_value >= 500000){
      printf("0");
      }
    if(distance <= 5){
      printf("15000");      
      }
    if(distance > 15){
      printf("40000");
    }
  return 0;
}