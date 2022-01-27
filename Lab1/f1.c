#include<stdio.h>
int main(){
   int s1, s2, s3;
      printf("Enter sides of triangle:");
      scanf("%d%d%d",&s1,&s2,&s3);

   if(s1 == s2 && s2 == s3)
      printf("Triangle is equilateral\n");
   else if(s1 == s2 || s2 == s3 || s3 == s1)
      printf("Triangle is isosceles\n");
   else
      printf("Triangle is scalene\n");
      
   return 0;
}


































miles = float(input())
gallons = float(input())

# 2. Process (Calculate stuff)
mpg = miles_driven / gallons_of_gas_used

# 3. Output Info
print('Miles per gallon =', mpg, end='\n\n') 
# Miles per Gallon = 89