#include<stdio.h>
#include<time.h>
int main(){
int red,yellow,green;
printf("enter the red light duration:");
scanf("%d",&red);
printf("enter the green light duration:");
scanf("%d",&yellow);
printf("enter the yellow light duration:");
scanf("%d",&green);
int i,j;
for(j=0;j<3;j++){    
printf("\nTraffic Light:RED");
for(i=red;i>0;i--){
    printf("\nTime remaining: %d seconds",i);
    sleep(1);
}
printf("\nTraffic Light:YELLOW");
for(i=yellow;i>0;i--){
    printf("\nTime remaining: %d seconds",i);
    sleep(1);
}
printf("\nTraffic Light:GREEN");
for(i=green;i>0;i--){
    printf("\nTime remaining: %d seconds",i);
    sleep(1);
}
}    
return 0;
}
