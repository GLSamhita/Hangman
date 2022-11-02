#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//kinda works. should check randomize function.does'nt change the number that often.
void play()
{
ifstream z("c:/^school/csproj/pronew.txt");
if(!z) {cout<<"error\n"; return;}
randomize();
char q[50];
int a=random(5);
int i=0;
while(i<=a)
{
z.getline(q,50);
i++;
}
puts(q);
z.close();
}
void main()
{
clrscr();
play();
getch();
}
