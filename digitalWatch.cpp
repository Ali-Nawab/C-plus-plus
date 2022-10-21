#include <iostream>
#include<stdlib.h>
#include<unistd.h>
#include<iomanip>
using namespace std;

int main()
{
    char ch;
    int h1,m1,s1;
    cout<<"ARE YOU WANT TO SET AN ALARM , IF YES ENTER THE y \n";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"ENTER THE NUMEBR\n";
        cin>>h1>>m1>>s1;
    }
    char z;
    int h2,m2,s2;
    cout<<"ARE YOU WANT TO STOP THE WATCH AT ANY TIME THEN PRESS Z \n: ";
    cin>>z;
    if(z=='Z')
    {
        cout<<"ENTER THE NUMBER\n";
        cin>>h2>>m2>>s2;
    }
       // start:
        int sec=55,  min=59,  hr=23;
    while(true)
    {
        system("cls");
        if(hr==h1 && min==m1 && sec==s1)
        {
            cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
        }

        cout<<endl<<endl<<setw(50)<<hr<<":"<<min<<":"<<sec;
        sec++;

        if(sec==60)
        {
            min++;
            sec=0;
            if(min==60)
            {
                hr++;
                min=0;
                if(hr==24)
                {

                   // hr=0;
                   // min=0;
                   // sec=0;
                }
            }
        }
        if(hr>=12)
         {cout<<" PM\n";}
        else
            {cout<<" AM\n";}
         //   if(hr==24)
          //  {
             //   goto start;
          //  }
           if(hr==h2 && min==m2 && sec==s2)
        {
        cout<<endl<<setw(50)<<hr<<":"<<min<<":"<<sec;
        break;
        }

        sleep(1);
    }
    return 0;
}
