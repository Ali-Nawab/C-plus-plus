#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Students{
            string name;
            string reg_no;
            int marks[3];
    };
int main(){
    Students stu[6];
    for(int i=1; i<6 ;i++){
    cout<<"Enter student " <<i<<" Name:(i-e Muhammad_Bilal)\n";
    cin>>stu[i].name;
    cout<<"Enter "<<stu[i].name<<" Reg NO:(i-e 20-Se-25)\n";
    cin>>stu[i].reg_no;
    cout<<"Enter "<<stu[i].name<<" marks in subject 1: ";
    cin>>stu[i].marks[0];
    cout<<"Enter "<<stu[i].name<<" marks in subject 2: ";
    cin>>stu[i].marks[1];
    cout<<"Enter "<<stu[i].name<<" marks in subject 3: ";
    cin>>stu[i].marks[2];}
for (int j = 0; j < 6; j++)
        {
        for (int i = 1; i < 5; i++)
        {
           if(stu[i].name[0]>stu[i+1].name[0])
           {swap(stu[i].name,stu[i+1].name);swap(stu[i].reg_no,stu[i+1].reg_no);swap(stu[i].marks[0],stu[i+1].marks[0]);swap(stu[i].marks[1],stu[i+1].marks[1]);swap(stu[i].marks[2],stu[i+1].marks[2]);}
        }
        }
         for(int i=1;i<6;i++)
    {
        cout<<"Name of Student : "<<stu[i].name<<"\n";
        cout<<"\nReg No of "<<stu[i].name<<" :"<<stu[i].reg_no<<"\n";
        cout<<stu[i].name<<" Marks in subject 1: "<<stu[i].marks[0]<<endl;
        cout<<stu[i].name<<" Marks in subject 2: "<<stu[i].marks[1]<<endl;
        cout<<stu[i].name<<" Marks in subject 3: "<<stu[i].marks[2]<<endl;
    }
        cout<<"\n\n";
int option;
cout<<"Choose a student to replace his marks\n"<<"1. "<<stu[1].name<<"\n"<<"2. "<<stu[2].name<<"\n"<<"3. "<<stu[3].name<<"\n"<<"4. "<<stu[4].name<<"\n"<<"5. "<<stu[5].name<<"\n";
cin>>option;
switch (option)
{
case 1:
    int choice;
    cout<<"Which subject marks do yo want to change\n"<<"Subject 1\n"<<"Subject 2\n"<<"Subject 3\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        int update1;
        cout<<"Enter number to update marks\n";
        cin>>stu[1].marks[0];
        cout<<"Marks updated plz check\n";
        goto display;
        break;

    case 2:
        int update2;
        cout<<"Enter number to update marks\n";
        cin>>stu[1].marks[1];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 3:
        int update3;
        cout<<"Enter number to update marks\n";
        cin>>stu[1].marks[2];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    default:
        cout<<"Enter valid subject\n";
        break;
    }
    break;
    case 2:
    int choice1;
    cout<<"Which subject marks do yo want to change\n"<<"Subject 1\n"<<"Subject 2\n"<<"Subject 3\n";
    cin>>choice1;
    switch (choice1)
    {
    case 1:
        int update1;
        cout<<"Enter number to update marks\n";
        cin>>stu[2].marks[0];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 2:
        int update2;
        cout<<"Enter number to update marks\n";
        cin>>stu[2].marks[1];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 3:
        int update3;
        cout<<"Enter number to update marks\n";
        cin>>stu[2].marks[2];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    default:
        cout<<"Enter valid subject\n";
        break;
    }
    case 3:
    int choice2;
    cout<<"Which subject marks do yo want to change\n"<<"Subject 1\n"<<"Subject 2\n"<<"Subject 3\n";
    cin>>choice2;
    switch (choice2)
    {
    case 1:
        int update1;
        cout<<"Enter number to update marks\n";
        cin>>stu[3].marks[0];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 2:
        int update2;
        cout<<"Enter number to update marks\n";
        cin>>stu[3].marks[1];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 3:
        int update3;
        cout<<"Enter number to update marks\n";
        cin>>stu[3].marks[2];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    default:
        cout<<"Enter valid subject\n";
        break;
    }
case 4:
    int choice3;
    cout<<"Which subject marks do yo want to change\n"<<"Subject 1\n"<<"Subject 2\n"<<"Subject 3\n";
    cin>>choice3;
    switch (choice3)
    {
    case 1:
        int update1;
        cout<<"Enter number to update marks\n";
        cin>>stu[4].marks[0];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 2:
        int update2;
        cout<<"Enter number to update marks\n";
        cin>>stu[4].marks[1];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 3:
        int update3;
        cout<<"Enter number to update marks\n";
        cin>>stu[4].marks[2];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    default:
        cout<<"Enter valid subject\n";
        break;
    }
case 5:
    int choice4;
    cout<<"Which subject marks do yo want to change\n"<<"Subject 1\n"<<"Subject 2\n"<<"Subject 3\n";
    cin>>choice4;
    switch (choice4)
    {
    case 1:
        int update1;
        cout<<"Enter number to update marks\n";
        cin>>stu[5].marks[0];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 2:
        int update2;
        cout<<"Enter number to update marks\n";
        cin>>stu[5].marks[1];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    case 3:
        int update3;
        cout<<"Enter number to update marks\n";
        cin>>stu[5].marks[2];
        cout<<"Marks updated plz check\n";
        goto display;
        break;
    default:
        cout<<"Enter valid subject\n";
        break;
    }

default:
    cout<<"Enter valid student\n";
    break;
}
display:
for(int i=1;i<6;i++)
    {
        cout<<"Name of Student : "<<stu[i].name<<"\n";
        cout<<"\nReg No of "<<stu[i].name<<" :"<<stu[i].reg_no<<"\n";
        cout<<stu[i].name<<" Marks in subject 1: "<<stu[i].marks[0]<<endl;
        cout<<stu[i].name<<" Marks in subject 2: "<<stu[i].marks[1]<<endl;
        cout<<stu[i].name<<" Marks in subject 3: "<<stu[i].marks[2]<<endl;
    }
        cout<<"\n\n";
        return 0;
}
