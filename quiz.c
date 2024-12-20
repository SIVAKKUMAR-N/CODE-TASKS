#include<stdio.h>
int main(){
    int one,two,three,four ,five;int count=0;
printf("Q1: What is the capital of France?");
         printf("\n1. Berlin");
         printf ("\n2. Madrid");
         printf("\n3. Paris");
         printf("\n4. Rome");
printf("\nEnter your answer (1-4):");
scanf("%d",&one);
if(one==3){
    printf("correct answer");
    count++;
}
else{
    printf("wrong answer");
}
printf("\nQ2: What is the largest planet in our solar system?");
printf("\n1. Earth");
printf("\n2. Mars");
printf("\n3. Jupiter");
printf("\n4. Saturn");
printf("\nEnter your answer (1-4):");
scanf("%d",&two);
if(two==3){
    printf("correct answer");
    count++;
}
else{
    printf("wrong answer");
}
printf("\nQ3: What is the chemical symbol for water?");
printf("\n1. O2");
printf("\n2. CO2");
printf("\n3. H2O");
printf("\n4. NaCl");
printf("\nEnter your answer (1-4):");
scanf("%d",&three);
if(three==3){
    printf("correct answer");
    count++;
}
else{
    printf("wrong answer");
}
printf("\nQ4: Who wrote 'Romeo and Juliet'?");
printf("\n1. William Shakespeare");
printf("\n2. Charles Dickens");
printf("\n3. J.K. Rowling");
printf("\n4. Mark Twain");
printf("\nEnter your answer (1-4):");
scanf("%d",&four);
if(four==1){
    printf("correct answer");
    count++;
}
else{
    printf("wrong answer");
}
printf("\nQ4: Which is the most famous programming language");
printf("\n1. python");
printf("\n2. C#");
printf("\n3. C");
printf("\n4. java");
printf("\nEnter your answer (1-4):");
scanf("%d",&five);
if(five==1){
    printf("correct answer");
    count++;
}
else{
    printf("wrong answer");
}
printf("\n\nYour final score is:%d",count);
return 0;
}
