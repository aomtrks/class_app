/* #include <stdio.h>
int main(){ */
    
    //int number = 10;
    /*int nuber2 = 2*/;
 /*    int number1 = 10, number2 = 3;
    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Sumation : %d, and Modulo : %d\n",sum,modulo);
    printf("Adress : %d\n" , &sum);
    printf("Adress : %x\n" , &sum);
 */
    /* int number1, number2 ;
    printf("please give me Number 1 :");
    scanf("%d", &number1);
    printf("please give me Number 2 :");
    scanf("%d", &number2);

    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("Sumation : %d, and Modulo : %d\n",sum,mod); */

 /*    int a = 5;
    printf("a: %d\n",a);
    int b = a++;
    int c = ++a;
    
    printf("b: %d\n",b);
    printf("c: %d\n",c); */
 /*    
    for(int myVar = 0; myVar<=10; myVar++){
        printf("MyVar : %d\n", myVar);
        printf("MyVar : %d\n", myVar);
    } */
 /*    int age;
    printf("Please give me an age: ");
    scanf("%d",age);

    if (age >= 18){
        printf("You are an adult.\n");
     }
    else if (age <16){
        printf("You cannot get moto DL\n ");
     }
    else;{
        printf("you are a minor.");
     } */
    

 /*   int myVar =0;
   while (myVar <10) {
        if(myVar % 2 == 1){
        printf("MyVar : %d\n",myVar);
        }else{
            break;
        }
        myVar++;
   }
printf("MyVar : %d\n",myVar); 


    return 0;
*/
/* }

#include <stdio.h>


int multiply(int x, int y);

int main() {
    int result = multiply(5, 3);
    printf("Result: %d\n", result);
    return 0;
}
 */
/* int multiply(int x, int y) {
    return x * y;
}

#include <stdio.h>

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    float result = divide(10, 3);
    printf("Division result: %.2f\n", result);
    return 0;
}
 */

/* #include <stdio.h>

int globalVar = 10;  // Global variable

int main() {
    int localVar = 5;  // Local variable
    printf("Global: %d, Local: %d\n", globalVar, localVar);
    return 0;
} */

/* #include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int result = factorial(5);
    printf("Factorial: %d\n", result);
    return 0;
}
 */
/* 
void perfectSquares(int start, int end){
   for(int i = 0; i<end;i++){
      if(i*i>start && i*i < end){
         printf("%d\n",i*i);
      }
   }
} */
#include <stdio.h>
void append(int array[] , int size, int element);
void prettyPrint(int array[], int size);
int main(){
   /*
   int myArray[10];

   myArray[5] = 5;
   for (int i=0; i<10 ; i++){
      printf("%d",myArray[i]);
   }
   int multiArray[3][4];
   for(int i=0; i<3; i++)[
      printf("%d\n",multiArray[i][0]);
   ]
   int matrix[3][3]={
      {1,2,3},
      {4,5,6},
      {7,8,9}
   };
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
         if(j!=2){
            printf("%d,", matrix[i][j]);
         }
         else{
            printf("%d", );
         }
         printf("%d,", matrix[i][j]);
      }
      printf("\n");
   } */
   int example[10] = {};
   for(int i=1; i<15; i++){
      prettyPrint(example,10);
      append(example,10,i);
   }
   return 0;
}

void append(int array[],int size, int element){
   for(int i = 0; i<size; i++){
      if(array[i]==0){
         array[i]=element;
         break;
      }
   }
}
void prettyPrint(int array[], int size){
   for(int i=0; i<size; i++){
      printf("%d", array[i]);
   }
   printf("\n");
}