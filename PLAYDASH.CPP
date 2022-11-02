#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void dash(char z[])
{
for(int i=0;i<strlen(z);i++)
{
if(z[i]==' ')
cout<<"/ ";
if(isdigit(z[i]))
cout<<z[i];
if(z[i]=='a')
cout<<"a";
if(z[i]=='i')
cout<<"i";
if(z[i]=='o')
cout<<"o";
if(isalnum(z[i])==0)
cout<<z[i];
else if(z[i]!='a'&&z[i]!='i'&&z[i]!='o'&&z[i]!=' '&&isdigit(z[i])==0&&isalpha(z[i])&&isalnum(z[i])!=0)
cout<<"_ ";
}
}
void play()
{
ifstream z("c:/^school/csproj/pronew.txt");
if(!z) {cout<<"error\n"; return;}
randomize();
char q[50];
int a=random(3),b=random(4);
int i=0;
while(i<=(a+b))
{
z.getline(q,50);
i++;
}
puts(q);
dash(q);
z.close();
}
void main()
{
clrscr();
play();
getch();
}