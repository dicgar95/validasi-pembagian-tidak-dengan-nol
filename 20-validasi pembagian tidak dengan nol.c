#include <stdio.h>

int main(){
  int a,b,hasil;
  printf("Program pembagian tidak dengan nol\n\n");
  printf("Masukan bilangan yang akan dibagi :\n");
  scanf("%d",&a );
  printf("Masukan bilangan pembagi :\n");
  scanf("%d",&b );

  if (b==0) {
    /* code */printf("Bilangan pembagi tidak boleh nol\n");
  } else {
    /* code */hasil=a/b;
    printf("hasilnya adalah :%d",hasil );
  }
  return 0;
}
