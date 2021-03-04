//Digital stop watch project
/*this is a normal stop watch code. When we run this code, we'll get (e.g. 00:00:00) this type of time.
   This is a initial face of this watch. Then, if we click any type of key from keyboard, then our timer
   will be started. And when we again press any key from keyboard, then the timer will be stopped.
   And finally show the stopped time on display.*/
//Marzan Islam
//7th semester
//Computer Science of Engineering
//Dhaka International University

#include<bits/stdc++.h>
#include<iostream>  //input output stream header file
#include<iomanip>  //setprecision
#include<conio.h>  //for !_kbhit() function  //console input output header file
#include<Windows.h>  //sleep function library for windows device.
#define cycle 60

using namespace std;
int main()  //main program started from here
{

    system("cls");   //clear screen
    int h=0,m=0,s=0;  //h=hour, m=minute, s=second //initially all are zero(0)  //counter

    cout<<endl<<"\t\t   *** STOP_WATCH ***"<<endl<<endl;
    cout<<endl<<"\t\t hour : minute : second";
    cout<<endl;

    cout<<endl<<"\t\t|=======================|"<<endl;
    printf("  \n\t        |  %.2d :   %.2d   :   %.2d   |\n", h, m, s);
    cout<<endl<<"\t\t|=======================|"<<endl;
    cout<<"\n\t\t press any key to start";  //if we press this key, then the watch time started.
    getch();

    while(!_kbhit())  //used to determine if a key has been pressed or not
    {
        s++;  //second will be increased
        Sleep(1000);  //it'll count 1 second break.
        if(s==cycle)  //here, cycle time is 60 seconds. That means, time will be changing after 60 seconds continuously.
        {
            m++;  //minute increased
            s=0;  //second will be started again 0.
        }
        if(m==cycle)  //here, cycle time is 60 seconds. That means, time will be changing after 60 seconds continuously.
        {
            h++;  //hour will be increased
            m=0;  //minute will be started again 0.
        }

        system("cls");  //clear screen

        cout<<endl<<"\t\t   *** STOP_WATCH ***"<<endl<<endl;
        cout<<endl<<"\t\t hour : minute : second";
        cout<<endl;

        cout<<endl<<"\t\t|=======================|"<<endl;
        printf("  \n\t        |  %.2d :   %.2d   :   %.2d   |\n", h, m, s);
        cout<<endl<<"\t\t|=======================|"<<endl;

        cout<<"\n\t\t press any key to stop";  //if we press this key, then the watch time stopped.
    }

    getch();
    system("cls");   //clear screen

    cout<<endl;
    cout<<"\n\t\t the time after pausing is";
    cout<<endl;
    cout<<endl<<"\t\t ---------------------------";
    printf("  \n\t         |   %.2d  :   %.2d   :   %.2d   |\n", h, m, s);
    cout<<"\t\t ---------------------------"<<endl;

    cout<<endl<<"\t\t\tThank you!!"<<endl<<"\n\t\t H A P P Y   C O D I N G -_-"<<endl;
    getch();
    return 0;
}


