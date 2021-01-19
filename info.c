#include<stdio.h>

char name1, name2, name3, name4;

int roll1, roll2, roll3, roll4;

float mark1, mark2, mark3, mark4;

int main(void)
{


printf("Enter your name ");
scanf("%c",&name1);
printf("Enter your roll ");
scanf("%d",&roll1);
printf("Enter your mark ");
scanf("%f",&mark1);

printf("Enter your name ");
scanf("%s",&name2);
printf("Enter your roll ");
scanf("%d",&roll2);
printf("Enter your mark ");
scanf("%f",&mark2);

printf("Enter your name ");
scanf("%s",&name3);
printf("Enter your roll ");
scanf("%d",&roll3);
printf("Enter your mark ");
scanf("%f",&mark3);

printf("Enter your name ");
scanf("%s",&name4);
printf("Enter your roll ");
scanf("%d",&roll4);
printf("Enter your mark ");
scanf("%f",&mark4);

printf("Student 1\n Name: %c Roll: %d Mark: %f ",name1,roll1,mark1);
printf("Student 2\n Name: %c Roll: %d Mark: %f ",name2,roll2,mark2);
printf("Student 3\n Name: %c Roll: %d Mark: %f ",name3,roll3,mark3);
printf("Student 4\n Name: %c Roll: %d Mark: %f ",name4,roll4,mark4);

return 0;
}
