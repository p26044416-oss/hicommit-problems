#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f%f", &dtb, &drl);
  if(dtb>=9.0 && drl>=90){
    printf("XUAT_SAC");
    printf("HOC_BONG_XUAT_SAC");
  }else if(8.0<=dtb<9.0 && 80<=drl<90 || drl>=90 || dtb>=9.0 && 80<=drl<90){
    printf("TOT");
    printf("HOC_BONG_GIOI");
  }else if(7.0<=dtb<8.0 && 70<=drl<80 || 80<=drl<90 || drl>=90 || 8.0<=dtb<9.0 && 70<=drl<80 || dtb>=9.0 && 70<=drl<80){
    printf("KHA");
    printf("HOC_BONG_KHA");
  }else{
    printf("KHONG_DAT");
  }
  
  return 0;
}