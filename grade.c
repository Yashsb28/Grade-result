#include<stdio.h>
int main()
{
  int n;
  printf("Enter your marks : \n");    //1. Enter the Marks
  scanf("%d", &n);
  if(n>=85)
  {
  	printf("Grade A");          //2. You will get grade according to your marks
  }
  else if(n>=70)
  {
  	printf("Grade B");
  }
  else if(n>=55)
  {
  	printf("Grade C");
  }
  else if(n>=40)
  {
  	printf("Grade D");
  }
  else 
  {
  	printf("Grade F");
  }
  return 0;
}
