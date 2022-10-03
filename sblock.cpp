// To find all the details of any  s-block element.
#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <process.h>
using namespace std;
struct element
{
    short atomicno;
    char name[50];
    char ec[50];
    short group;
    short period;
    char block;
    float atomicw;
    float en;
    short atomicr;
    char origin[100];
    float meltp;
    float boilp;
    float density;
}
elem[14];
int main()
{
    int n, t, a, i;
     char name[50], c;
     // Displaying introduction.
     system("COLOR 8F");
     cout << "\n\n\n\n\n\n\n\n\n\n\n\t\tA PROGRAM FOR BEGINNEERS";
     Sleep(3000);
     system("cls");
     for (i = 1; i <= 100; ++i)
     {
          Sleep(5);
          system("cls");
          cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING " << i << "%";
          if (i == 100)
               Sleep(1000);
     }
     system("cls");
}