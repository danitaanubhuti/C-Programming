/*sizes andd ranges of various data tupes*/
#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
  printf("\nsize of char=%d, Max.value=%d, Min.value=%d",sizeof(char),CHAR_MAX,CHAR_MIN);
  printf("\nsize of unsigned char=%d, Max.value=%d",sizeof(unsigned char),UCHAR_MAX);
  printf("\nsize of int=%d, Max.value=%d, Min.value=%d",sizeof(int),INT_MAX,INT_MIN);
  printf("\nsize of unsigned int=%u, Max.value=%u",sizeof(unsigned int),UINT_MAX);
  printf("\nsize of short int=%d, Max.value=%d",sizeof(short int),USHRT_MAX);
  printf("\nsize of long int=%d, Max.value=%d,Min.value=%d",sizeof(long int),LONG_MAX,LONG_MIN);
  printf("\nsize of float=%f, Max.value=%f, Min.value=%f",sizeof(float),FLOAT_MAX,FLOAT_MIN);
  printf("\nsize of unsigned char=%d, Max.value=%d",sizeof(unsigned char),UCHAR_MAX);
  printf("\nsize of int=%d, Max.value=%d, Min.value=%d",sizeof(int),INT_MAX,INT_MIN);
  printf("\nsize of unsigned int=%u, Max.value=%u",sizeof(unsigned int),UINT_MAX);
  printf("\nsize of short int=%d, Max.value=%d",sizeof(short int),USHRT_MAX);
  printf("\nsize of long int=%d, Max.value=%d,Min.value=%d",sizeof(long int),LONG_MAX,LONG_MIN);
  return 0;
}

