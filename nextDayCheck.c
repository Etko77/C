#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    int leap;
    printf("The year is:");
    scanf("%d",&year);
    //printf("%d",400%4);
    if(year % 400 == 0 ){
        printf("Leap year\n");
        leap = 4;
    }else if(year % 100 == 0){
        printf("Not a leap year\n");
        leap = 1;
    }else if(year% 4 == 0){
        printf("Leap year\n");
        leap = 4;
    }else{
        printf("Not a leap year\n");
        leap = 1;
    }
    int day, month, all_days;
    printf("Choose month 1-12: ");
    scanf("%d",&month);

    switch(month){
        case 1:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 2:
            if (leap == 4){
                all_days = 29;
            }else{
                all_days = 28;
            }
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 3:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 4:
            all_days = 30;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 5:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 6:
            all_days = 30;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 7:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 8:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 9:
            all_days = 30;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 10:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 11:
            all_days = 30;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month+1),year);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
        case 12:
            all_days = 31;
            printf("Choose a day");
            scanf("%d",&day);
            if(day == all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day - all_days +1 ,(month-11),year+1);
            }else if(day < all_days){
                printf("Current day - %d/%d/%d\n",day,month,year);
                printf("Tomorrow - %d/%d/%d\n",day +1 ,month,year);
            }else{
                printf("You exceeded the date range");
            }

            break;
    }


    return 0;
}