#include<stdio.h>
#define ops 4
float add(float a,float b) {return (a+b);}
float sub(float a,float b) {return (a-b);}
float mul(float a,float b) {return (a*b);}
float divi(float a,float b) {return (a/b);}

int main()
{
    float (*ptr2func[ops])(float ,float) ={add,sub,mul,divi};
     int choice;
    float a,b,result;
    printf("Enter your choice :0 for addition ,1 for subtration ,2 for multiplication ,3 for division :\n");
    scanf("%d",&choice);
    printf("Enter the two numbers:\n");
    scanf("%f %f",&a,&b);
    printf("%f",ptr2func[choice](a,b));
    return 0;
}

