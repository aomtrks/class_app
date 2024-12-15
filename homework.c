#include <stdio.h>
// #include <string.h>
int main(){
   /*  for(int myVar = 0; myVar<=100; myVar++){
        printf("\n");
        printf("software engineering!"); 
         } */
/*     for(int i = 0; i<= 100; i +=2){
        printf(" x = %d\n", i);
    }
    for(int k = 1; k<=100; k+=2){
        printf("%d\n",k);
    }
    
    for(int i = 0; i<=100; i++){
    if(i % 2 == 0){
        continue;
    }
    printf("%d\n",i);

    }
*/
/* char name[25];
printf("\n adiniz ne");
fgets(name, 25, stdin);
name[strlen(name)-1] = '\0';

while (strlen(name)==0)
{
    printf("herhangi isim girmedin.");
    printf("\n adiniz ne");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
}
printf("Merhaba %s \n",name); */
/* int num = 0;
while (num <=10)
{
    if(num % 2 ==0){
        continue;
    }
    printf("number: %d\n",num);
    num = num + 1;
}
printf("number %d\n",num); */
/* char car[25];
printf("Do you have a car: ");
scanf("%s",&car);

int how_much;
printf("How much money in your bank account: ");
scanf("%d", &how_much);

int real_estate;
printf("How many house do you heve in Kotekli: ");
scanf("%d", &real_estate);

if(how_much>= 1000000){
    if(real_estate>=10){
        if(car == "yes"){
            printf("You do not have to all day work.");
        }
        else{
            printf("you should buy a car");
        }
    }
    else{
        printf("You have to work in a week!");
    }
}
else{
    printf("You are so poor you have to work until ex");
}
 
 */
    /* int hp;
    printf("How many hp does you have: ");
    scanf("%d",&hp);

    if(hp> 60 && hp <= 75){
        printf("Your car price is 200.000\n");
    }
    else if(hp >75 && hp <= 90){
        printf("Your car price is 350.000\n");
    }
    else if(hp >90 && hp <=110){
        printf("Your car price is 500.000\n");  
    }
    else if(hp >110 && hp <=150){
        printf("Your car price is 700.000\n");
    }
    else if(hp >150 && hp <=200){
        printf("Your car price is 1.200.000\n");
    }
    else if(hp >200){
        printf("Your car price is 2.000.000\n");
    }
    else if(hp<60){
         printf("There is no car that have hp like that.");
    }
 */
    return 0;
}