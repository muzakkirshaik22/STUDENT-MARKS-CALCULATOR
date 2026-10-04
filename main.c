/*students marks calculator
 let a,b,c are 3 subjects*/

#include<stdio.h>
int main()
{
char name[25];
int a,b,c,total;
float percentage;

printf("Enter your Name : ");
scanf("24%s",name);

printf("Enter marks in a : ");
scanf("%d",&a);

printf("Enter marks in b : ");
scanf("%d",&b);

printf("Enter marks in c : ");
scanf("%d",&c);   {

if(a>100 || a<0 || b>100 || b<0 || c>100 ||c<0 )

printf("\n invalid number ");

return 0;    }

total = a+b+c;
percentage = total/3.00 ;

printf("\n.... Student Result ....\n");
    printf(" Name       : %s\n", name);
    printf(" Total      : %d / 300\n", total);
    printf(" Percentage : %.2f%%\n", percentage);

if( a>35 && b>35 && c>35 )
{

printf(" RESULT :: PASS ");

if(percentage >95 )
printf(" GRADE :: A+ ");
else if(percentage >= 90 )
printf(" GRADE :: A ");
else if(persentage >=75 )
printf("GRADE :: B ");
else if(percentage >=65)
printf(" GRADE :: C");
else 
printf(" GRADE :: D");
}
else
{
printf("...FAIL....");
}

return 0;


}
