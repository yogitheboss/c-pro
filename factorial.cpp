#include<iostream>
#include<stdlib.h>        // FOR SYSTEM CLS;
using namespace std;
void factorial(int num)
{
 int fact=1;
    for(int i=num;i>0;i--)
    {
      fact*=i;
    }
      cout<<"\nThe factorial is ="<<fact;
}
int main()
{
    system("cls");
    int fact, num;
    cout<<"ENTER THE NUMBER YOU WANT TO GET FACTORIAL OF =";
    cin>>num;
    factorial(num);
    
}
