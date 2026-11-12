#include<stdio.h>
#include<conio.h>
void main()
{
//char name[300];
FILE*fp;
char name[300];
fp=fopen("cprorgamming.txt","w");
if(fp==NULL)
{
printf("File can't be opened");
}
fprintf(fp,"Feedback about C programming\n");
fprintf(fp,"C is a compiled programming language\n");
fprintf(fp,"C is a fundamental programming language\n");
fprintf(fp,"C is a high level language\n");
fprintf(fp,"C is easy to learn\n");
fprintf(fp,"C is used in multiple systems\n");

fclose(fp);

fp=fopen("cprogramming.txt","a");
if(fp==NULL)
{
printf("file can't be opened");
}
fprintf(fp,"Feedbacks about C trainer\n");
fprintf(fp,"He is kind\n");
fprintf(fp,"He is genuine\n");
fprintf(fp,"He is good at teaching\n");
fprintf(fp,"He teaches multiple times if we don't understand\n");

fclose(fp);

clrscr();
fp=fopen("cprogramming.txt","r");
if(fp==NULL)
{
printf("file can't be opened");
getch();
}
while(fgets(name,sizeof(name),fp)!=NULL)
{
printf("%s",name);
}
fclose(fp);

getch();
}