#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
char z[50];
void dash()
{
ifstream a("c:/^school/csproj/pronew.txt");
if(!a) {cout<<"error\n"; return;}
a.getline(::z,50);
for(int i=0;i<strlen(::z);i++)
{
if(::z[i]==' ')
cout<<"/ ";
if(isdigit(::z[i]))
cout<<::z[i];
if(::z[i]=='a')
cout<<"a";
if(::z[i]=='i')
cout<<"i";
if(::z[i]=='o')
cout<<"o";
if(::z[i]=='e')
cout<<"e";
if(::z[i]=='u')
cout<<"u";
if(isalnum(::z[i])==0)
cout<<::z[i];
else if(::z[i]!='a'&&::z[i]!='e'&&::z[i]!='u'&&::z[i]!='i'&&::z[i]!='o'&&::z[i]!=' '&&isdigit(::z[i])==0&&isalpha(::z[i])&&isalnum(::z[i])!=0)
cout<<"_ ";
}
a.close();
}
void takein()
{
int c=8;
do
{
gotoxy(35,20);
cout<<"CHANCES LEFT:"<<c;
--c;
gotoxy(1,20);
char g;
cout<<"enter letter and press enter\n";
cin>>g;
gotoxy(1,1);
for(int i=0;i<strlen(z);i++)
{
if(::z[i]==g&&::z[i]!='a'&&::z[i]!='i'&&::z[i]!='o'&&::z[i]!='u'&&::z[i]!='i')
cout<<"\b"<<g;
}
}while(c>0);
}
void main()
{
clrscr();
dash();
takein();
getch();
}