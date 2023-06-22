#include<iostream>
using namespace std;

struct st{
   int id ;
   string name;
   int SRCODE;
   string SECT;
   string SUBJ;

};

int main()
{
   st e[5];

   int temp=0;
   int x;

   for(int i=0; i<5; i++)
   {
      cout<<"Student no."<<i+1<<"\n";
      cout<<"SRCODE: ";
      cin>>e[i].id;
      cout<<"Name: ";
      cin>>e[i].name;
      cout<<"Section: ";
      cin>>e[i].SECT;
      cout<<"Subject: ";
      cin>>e[i].SUBJ;
    

   }

   cout<<"\nChoose SRCODE to display the informations: ";
   cin>>x;
   for(int i=0; i<5; i++)
   {
      if(x == e[i].id)
      {
         cout<<"\nName: "<<e[i].name;
         cout<<"\nInformations: "<<e[i].SECT<<", "<<e[i].SUBJ;
         temp = 1;
         break;
      }
   }

   if(temp == 0)
      cout<<"\n SRCODE does not exist.";

   cout<<endl;
   return 0;
}



