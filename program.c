// #include<stdio.h>                    // Q1(a)

// int main () {
//     int length,breadth;
// length= 9;
// breadth=8;
// printf("Area of rectangle is %d\n", length*breadth);
//     return 0;
// }
// #include<stdio.h>                   //Q1(b)

// int main () {
//     int length,breadth;
//     printf("Enter length\n");
//     scanf("%d", &length);
//     printf("Enter breadth\n");
//     scanf("%d", &breadth);
//     printf("Area of rectangle is %d\n",length*breadth);
//     return 0;
// }


// #include<stdio.h>                       //Q2

// int main () {
//     int radius;
//     printf("Enter radius\n");
//     scanf("%d",&radius);
//     float pi=3.14;
//     printf("Area of circle is %f\n",pi*radius*radius);
//     int height;
//     printf("Enter height\n");
//     scanf("%d", &height);
//     printf("Volume of cylinder is %f",pi*radius*radius*height);
//     return 0;
// }


// #include<stdio.h>                      //Q3

// int main () {
//     float Celsius =37 , fahrenheit;
//     fahrenheit = (Celsius * 9 / 5) + 32;
//     printf("%f", fahrenheit);
//     return 0;
// }


// #include<stdio.h>                            //Q4

// int main () {
//     int Principal,Rate,Time;
//     printf("Enter Principal\n");
//     scanf("\t%d", &Principal);
//     printf("Enter Rate\n");
//     scanf("\t%d", &Rate);
//     printf("Enter Time\n");
//     scanf("\t%d", &Time);
//     printf("Value of Simple interest is %d",(Principal*Rate*Time)/100);
//     return 0;
// }




// #include<stdio.h>                  //Q(Multiplication table)                     

// int main () {
//     int multiplication,i;
//     printf("Enter the multiplication no\n");
//     scanf("%d", &multiplication);
//     printf("The multiplication of %d is\n",multiplication);
//     for (i=1; i<=10;i++)
//     {
//         printf("%dX%d=%d\n", multiplication, i, multiplication*i);
//     }
//     return 0;
// }




// #include<stdio.h>                //Q(Check whether the no. is divisible by 2 or not)

// int main () {
//     int x=2,y;
//     printf("Enter the no\n");
//     scanf("%d", &y);
//     if(y%2==0){
//        printf("The no is divisible by 2\n");
//  }
//     else{
//     printf("The no is not divisible by 2\n");
//     }
//     return 0;
// }




// #include<stdio.h>                //Q(Check whether the given no. is divisible by given no. or not)

// int main () {
//     int divisor,dividend;
//     printf("Enter the dividend\n");
//     scanf("%d", &dividend);
//     printf("Enter the divisor\n");
//     scanf("%d", &divisor);
//     if(dividend%divisor==0){
//        printf("The no is divisible by %d\n",divisor);
//  }
//     else{
//     printf("The no is not divisible by %d\n",divisor);
//     }
//     return 0;
// }



// #include<stdio.h>             Q(Check whether the student is pass or fail)

// int main () {
//     int physics,chemistry,maths;
//     printf("Enter physics marks\n");
//     scanf("%d", &physics);
//     printf("Enter chemistry marks\n");
//     scanf("%d", &chemistry);
//     printf("Enter maths marks\n");
//     scanf("%d", &maths);
//     if(physics<33|| chemistry<33 || maths<33 || physics+chemistry+maths<40){
//         printf("Student is fail\n");
//     }
//     else{
//         printf("Student is Pass\n");
//     }
//     return 0;
// }



// #include<stdio.h>                   // Q( Calculate Income tax)

// int main(){
//     float tax = 0, income;
//     printf("Enter your income\n");
//     scanf("%f", &income);

//     if(income>=250000 && income<=500000){
//         tax = tax + 0.05 * (income - 250000);
//     }
    
//     if (income >= 500000 && income <= 1000000)
//     {
//         tax = tax + 0.20 * (income - 500000);
//     }

//     if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 1000000);
//     }
    
//     printf("tax = %f\n", tax);

//     return 0;
// }



// #include<stdio.h>                          // Q(Check whether the year is leap year or not)

// int main () {
//     int year;
//     printf("Enter year\n");
//     scanf("%d", &year);
//     if(year%400==0){
//         printf("The year is leap year\n");
//     }
//     else if(year%100==0)
//     {
//         printf("The year is not leap year\n");
//     }
//     else if(year%4==0)
// {
//     printf("The year is leap year\n");
// }
// else
// {
// printf("The year is not leap year\n");
// }
//     return 0;
// }




// #include<stdio.h>                           // Q(Find the largest number between four number)

// int main () {
//     int num1,num2, num3, num4;
//     printf("Enter num1\n");
//     scanf("%d", &num1);
//     printf("Enter num2\n");
//     scanf("%d", &num2);
//     printf("Enter num3\n");
//     scanf("%d", &num3);
//     printf("Enter num4\n");
//     scanf("%d", &num4);
//     if(num1>num2 &&num1>num3 &&num1>num4)
//     {
//       printf("%d is the largest number\n", num1);   
//     }
//     else if(num2>num1 &&num2>num3 && num2>num4)
//     {
//         printf("%d is the largest number\n", num2);
//     }
//      else if(num3>num1 &&num3>num2 && num3>num4)
//     {
//         printf("%d is the largest number\n", num3);
//     }
//      else
//     {
//         printf("%d is the largest number\n", num4);
//     }
//     return 0;
// }





// #include<stdio.h>                      //Q(check the character is lowercase or uppercase)

// int main () {
//     char ch;
//     printf("Enter character\n");
//     scanf("%c", ch);
//     if(ch>=97 && ch<=122)
// {
//     printf("The character is lowercase\n");
// }
// else
// {
//     printf("The character is uppercasre\n");
// }
//     return 0;
// }




// #include<stdio.h>

// int main () {
//     int rating;
//     printf("Enter your rating betwen 1-5\n");
//     scanf("%d", &rating);
//     switch(rating)
//     {
//         case 1:
//         printf("Worst\n");
//         break;
//         case 2:
//         printf("Bad\n");
//         break;
//         case 3:
//         printf("Good\n");
//         break;
//         case 4:
//         printf("Very good\n");
//         break;
//         case 5:
//         printf("Excellent\n");
//         break;
//         default:
//         printf("Invalid rating\n");
//         break;
//     }
//     return 0;
// }




// #include<stdio.h>

// int main () {
//     int rating;
//      printf("Enter your rating betwen 1-5\n");
//      scanf("%d", &rating);
//      if(rating==1)
//      {
//         printf("Worst\n");
//      }
//         else if(rating==2)
//         {
//             printf("Bad\n");
//         }
//          else if(rating==3)
//         {
//             printf("Good\n");
//         }
//          else if(rating==4)
//         {
//             printf("Very good\n");
//         }
//          else if(rating==5)
//         {
//             printf("Excelent\n");
//         }
//         else{
//             printf("Invalid rating\n");
//         }
     
//     return 0;
// }





#include<stdio.h>

int main () {
    int grade;
    printf("Enter your grade\n");
    scanf("%d", &grade);
    switch(grade)
    {
        if(grade>=90 && grade<=100){
    case 1:
    printf("A\n");
        
    break;}
    else {
    case 2:
    printf("B\n");
    }
    break;
    }

    return 0;
}
