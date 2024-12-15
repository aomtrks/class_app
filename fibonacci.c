/* 
#include <stdio.h>
int fibonacci_for(int number);

int main(){
    int fibonacci_try = fibonacci_for(7);
    printf("Fibonacci : %d\n",fibonacci_try);
    return 0;
}
int fibonacci_for(int number){
    int first = 1, second = 2, result = 0;
    if (number == 1||number == 2){
        return 1;
    }
    for(int i=3;i< number;i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}

 */

/* 
#include <stdio.h>
int fibonacci_while(int number);

int main(){
    int fibonacci_try = fibonacci_while(8);
    printf("Fibonacci : %d\n",fibonacci_try);
    return 0;
}
int fibonacci_while(int number){
    int first = 1, second = 2, result = 0;
    if(number==1||number==2){
    return 1;
    }
    while(number>3){
    result = first + second;
    first = second;
    second = result;
    number--;
    }
    return result;
} 
*/

#include <stdio.h>
int fibonacci_recursive(int number);

int main(){
    int fibonacci_try = fibonacci_recursive(7);
    printf("Fibonacci : %d\n",fibonacci_try);
    return 0;
}
int fibonacci_recursive(int number){
    //Base Case
    if(number==1||number==2){
    return 1;
    }
    return fibonacci_recursive(number - 1) + fibonacci_recursive(number - 2);
}