/* #include <stdio.h>
int main(){
    // this is a commant line
    /*
    those are coment
    lines 
    
    printf("hello wor\n");
    printf("selam word\n");
    
    int x;
    x= 123;
    int y= 321;
    int level= 87;

    float xp = 12.07;

    char server= 'A';
    char nick[] = "Ali";

    printf("Şu an %d levele sahipsin\n", level);
    printf("Merhaba %s\n",nick);
    printf("xp durumun %f\n",xp);
    printf("xp durmun %%%f\n", xp);
    printf("%c Sunucusunda oynuyorsun\n",server);
    return 0;
} */
/* #include <stdio.h>

// Function declaration
int multiply(int x, int y);

int main() {
    int result = multiply(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int multiply(int x, int y) {
    return x * y;
} */

/* #include <stdio.h>
int main(){
    const float pi = 3.14;
    double radius;
    printf("Please give the radius");
    scanf("%lf",&radius);
    double circumferance = pi* radius*2;
    double area = pi* radius* radius;
    printf("it\'s area is %lf and it\' circumferance is %lf\n",area,circumferance);
    return 0;
} */

#include <stdio.h>
int main(){
    int matrx[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3; i++){
        for(int j= 0; j<3 ; j++){
            printf("%d\t", matrx[i][j]);
        }
    printf("\n");
    }

    return 0;
}