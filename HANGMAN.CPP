int display()
{
int op=0;
gotoxy(35,3);
cout<<"!!HANGMAN!!";
cout<<"\nRULES-\n1.No hints will be provided\n";
cout<<"2.The entire game should be played only using lowercase letters\n";
cout<<"3.The letters 'a','i','o',digits and special characters will be shown\n";
cout<<"4.The spaces between words are shown by'/'\n";
cout<<"There are 2 categories - 1.Proverbs 2.Movies\nPick your category(enter the number shown)\n";
cin>>op;
return op;
}
