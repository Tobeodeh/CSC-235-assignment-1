#include<math.h>
#include<stdio.h>
#include<complex.h>
#undef I
//#include<conio.h>
int main(){
  float a,b,c,discri,r1, r2,real_num, comp_num;
  printf("Enter  the values a,b,c rezpectively: ");
  scanf("%f %f %f", &a, &b, &c);
  
  discri= b*b - 4*a*c;
  
  if(discri > 0)
  {
        r1 = -b +sqrt(discri) / (2 * a);
        r2 = -b - sqrt(discri) / (2 * a);
        printf("The first root is =  %f and  The second root is = %f", r1, r2);
    }

    //finding real and equal roots
    else if(discri == 0) 
    {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("The roots are equal %f %f", r1,r2);
    }

    //Finding for the two roots are unreal
    else 
    {
    	
        real_num = -b / (2 * a);
        comp_num = sqrt(-discri) / (2 * a);
        
      
        printf("The first root is =  %f+%fiand The second root is =  %f-%fi", real_num,comp_num,real_num,comp_num);
    }

    return 0;
}
