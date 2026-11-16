#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char*argv)
{
int tam,eng,mat,c,jap,total;
float average;
char name[30];
if(argc!=7)
  printf("invalid statement");
return 0;
}
strcpy(name,argv[1]);
tam=atoi(argv[2]);
eng=atoi(argv[3]);
mat=atoi(argv[4]);
c=atoi(argv[5]);
jap=atoi(argv[6]);
total=tam+eng+mat+c+jap;
average=total/5.0;
printf("\n____STUDENT MARKSHEET____\n");
printf("Tamil: %d\n",tam);
printf("English: %d\n",eng);
printf("Maths: %d\n",mat);
printf("C programming: %d\n",c);
printf("Total: %d\n",total);
printf("Average: %d\n",average);
if(tam<=35 || eng<=35 || mat<=35 || c<=35 || jap<=35 )
  printf("FAIL");
else
  printf("PASS");

return 0;
}