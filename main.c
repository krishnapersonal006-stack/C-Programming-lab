#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num1,num2,sum,diff,product,div;
  printf("Enter your 1st number");
  scanf("%f",&num1);
  printf("Enter your 2nd number");
  scanf("%f",&num2);
  sum=num1+num2;
  printf("sum is %f \n",sum);
  diff=num1-num2;
  printf("diff is %f \n",diff);
  product=num1*num2;
  printf("product is %f \n",product);
  if(num2==0){
  printf("you can't divide by zero");
  }
  else{
    div=num1/num2;
  printf("division is %f \n",div);
  }
  return 0;
}
