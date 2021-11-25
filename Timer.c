#include <stdio.h>
#include <windows.h> //Including windows header file is very important to use sleep and clear commands
int Timer()
{
    int m=0,s=0,ms=0; 
    while(1){  //This will give us a infinite loop so that the timer can go on...
        ms++;
        if(ms>59){
            s++;
            ms=0;
        }
        if(s>59){
            m++;
            s=0;
        }
        if(m>60){
            m=1;
        }
        printf("\n Timer :");
        printf("\n %02d:%02d:%02d",m,s,ms);
        Sleep(1); // This command is used to sleep the program for 1ms
        system ("cls"); // This command is here to clear the terminal/page 
    }
}
int main()
{
    printf("Welcome to the Timer");
    // This program will be able to work as a Timer just as in our mobiles
    Timer();
    return 0;
}