#include <stdio.h>

int main() {
  int distance, order_value, fee;
  scanf("%d %d", &distance, &order_value);

if (distance <= 0 || order_value < 0) {
    printf("INVALID");
} else if (order_value >= 500000 && distance <= 15) {
    fee = 0;
    printf("%d", fee);
} else {
    if (distance <= 5) {
        fee = 15000;
    } else if (distance <= 15) {
        fee = 25000;
    } else {
        fee = 40000;
    }

    printf("%d", fee);
}
  return 0;
}