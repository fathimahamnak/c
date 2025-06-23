/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int voters;
 int i,vote;
 int candidate_A=0;
 int candidate_B=0;
 int candidate_C=0;
 int spoiled=0;
 printf("Enter number of voters:");
 scanf("%d",&voters);
 for(i=1;i<=voters;i++){
     printf("Vote %d(1=A,2=B,3=C):",i);
     scanf("%d",&vote);
     if(vote==1){
         candidate_A++;
         }
     else if(vote==2){
         candidate_B++;
         }
     else if(vote==3){
         candidate_C++;
         }
     else{
         spoiled++;
     }
 }
     printf("Vote for A:%d\n",candidate_A);
     printf("Vote for B:%d\n",candidate_B);
     printf("Vote for C:%d\n",candidate_C);
     printf("Spoiled votes:%d\n",spoiled);
     
    if(candidate_A>candidate_B && candidate_A>candidate_C){
        printf("Winner:candidate A");
    }
    else if(candidate_B>candidate_C && candidate_B>candidate_A){
        printf("Winner:candidate B");
    }
    else if(candidate_C>candidate_A && candidate_C>candidate_B){
        printf("Winner:candidate C");
    }
    else{
        printf("No Winner");
    }
 
 
 

    return 0;
}