#include <stdio.h>
#include <stdlib.h>

int main(){
    int seconds;
    int hours,minutes,remaining_seconds;
    scanf("%d",&seconds);
    hours = seconds/3600;
    //minutes = (hours * 60 - seconds/60)*-1;
    minutes = (seconds - hours*3600)/60;
    remaining_seconds = (seconds - hours*3600)% 60;
    /*
    remaining_seconds = seconds%100;
    if (remaining_seconds >= 60){
        remaining_seconds = remaining_seconds - 60;
    }
    printf("%d\n",remaining_seconds);
    */

    if (remaining_seconds < 10 && minutes < 10 && hours < 10){
       printf("0%d:0%d:0%d",hours,minutes,remaining_seconds); 

    }else if(remaining_seconds < 10 && minutes < 10){
        printf("%d:0%d:0%d",hours,minutes,remaining_seconds); 

    }else if(remaining_seconds < 10 && hours < 10){
        printf("0%d:%d:0%d",hours,minutes,remaining_seconds); 

    }else if(hours < 10 && minutes < 10){
        printf("0%d:0%d:%d",hours,minutes,remaining_seconds); 

    }else if(remaining_seconds < 10 ){
        printf("%d:%d:0%d",hours,minutes,remaining_seconds); 

    }else if(minutes < 10){
        printf("%d:0%d:%d",hours,minutes,remaining_seconds); 

    }else if(hours< 10){
        printf("0%d:%d:%d",hours,minutes,remaining_seconds); 

    }else{
        printf("%d:%d:%d",hours,minutes,remaining_seconds); 

    }
    
}