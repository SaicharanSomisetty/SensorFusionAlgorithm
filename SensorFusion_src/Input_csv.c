#include<stdio.h>
#include<conio.h>
#include<String.h>
void getData(char *buff);
int main()
{
	FILE *fp = fopen("C:/Users/sai/Desktop/input.csv",'r');
    int count=0;
	do
	{
	 char buff[1024];
	 fgets(buff, 1024, (FILE*)fp);
	 count++;
	 if(count != 1)
	 {
	  printf(buff);
	  getData(buff);
	 }
	 getch();
	}while((getc(fp))!=EOF);


}
void getData(char buff[])
{
   char *token = strtok(buff,",");
   int counter=0;

   while( token != NULL )
   {
 counter++;
printf( " %s\n",token);
      token = strtok(NULL,",");
   }
}

