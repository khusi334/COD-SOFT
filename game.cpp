#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;          
    int num; 
  
  // Generating different random numbers each time game will run         
    srand(time(0));
  
  //Generating random numbers   
    num=rand()%51;
    cout<<"Guess a number between 1 and 50, only 5 turns will be allowed: ";
    for(i=0;i<5;i++)
    {
    cin>>n;
    if(num==n)
    {
      cout<<"\nCongrats, you have guessed the right number which is, "<<num;
      cout<<"\nNumber of turns you have used: "<<i+1;
      break;
    }
    else if(num>n)
    {
      cout<<"\nYour guess is lower than right number, Turns left: "<<5-(i+1);
      if(5-(i+1)>0)
      {
          cout<<"\nTry again, entering a number higher than previous: ";
        }
    }
    else if(num<n)
    {
      cout<<"\nYour guess is higher than right number, Turns left: "<<5-(i+1);
      if(5-(i+1)>0)
      {
          cout<<"\nTry again, entering a number lower than previous: ";
        }
    }
  }
  if(i==5)
  {
    cout<<"\n\nSorry, you failed to guess the right number.";
    cout<<"\nThe right answer is: "<<num;
  }
    return 0;
}

