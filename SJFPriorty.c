#include<iostream>
using namespace std;
void SJF_Built_in()
{
     int temp,position,i,j;
    int process[3]={1,2,3};
    int Burst_Time[3]={7,4,2};
    int Finish_Time[3];
    int arrival_Time[3]={0,0,0};
    int Waiting_Time[3];
    int Turn_around_Time[3];
    for(i=0;i<3;i++)
    {
        position=i;
        for(j=i+1;j<3;j++)
        {
            if(Burst_Time[j]<Burst_Time[position])
            position=j;
        }
        temp=Burst_Time[i];
        Burst_Time[i]=Burst_Time[position];
        Burst_Time[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<3;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time "<<endl;
   for(int i=0;i<3;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<endl;
   }
}
void SjF_User_Defined_values()
{
    int temp,position,i,j,n;
    cout<<"Enter number of process : ";
    cin>>n;
    int process[n];
    int Burst_Time[n];
    int Finish_Time[n];
    int arrival_Time[n];
    int Waiting_Time[n];
    int Turn_around_Time[n];
    
    for(i=0;i<n;i++)
    {
        process[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Burst_Time of process "<<i+1<<" : ";
        cin>>Burst_Time[i];
        arrival_Time[i]=0;
    }
    for(i=0;i<n;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(Burst_Time[j]<Burst_Time[position])
            position=j;
        }
        temp=Burst_Time[i];
        Burst_Time[i]=Burst_Time[position];
        Burst_Time[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<n;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time "<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<endl;
   }
}
void Low_Number_High_Priorty()
{
    int temp,position,i,j;
    int process[3]={1,2,3};
    int priorty[3]={9,5,7};
    int Burst_Time[3]={7,4,2};
    int Finish_Time[3];
    int arrival_Time[3]={0,0,0};
    int Waiting_Time[3];
    int Turn_around_Time[3];
    for(i=0;i<3;i++)
    {
        position=i;
        for(j=i+1;j<3;j++)
        {
            if(priorty[j]<priorty[position])
            position=j;
        }
        temp=priorty[i];
        priorty[i]=priorty[position];
        priorty[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<3;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\n\n****** Low Number High Priorty ******"<<endl;
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time   Priorty "<<endl;
   for(int i=0;i<3;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<"\t\t"<<priorty[i]<<endl;
   }
}
void High_Number_High_Priorty()
{
    int temp,position,i,j;
    int process[3]={1,2,3};
    int priorty[3]={9,5,7};
    int Burst_Time[3]={7,4,2};
    int Finish_Time[3];
    int arrival_Time[3]={0,0,0};
    int Waiting_Time[3];
    int Turn_around_Time[3];
    for(i=0;i<3;i++)
    {
        position=i;
        for(j=i+1;j<3;j++)
        {
            if(priorty[j]>priorty[position])
            position=j;
        }
        temp=priorty[i];
        priorty[i]=priorty[position];
        priorty[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<3;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\n\n****** High Number High Priorty ******"<<endl;
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time   Priorty "<<endl;
   for(int i=0;i<3;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<"\t\t"<<priorty[i]<<endl;
   }
}
void Priorty_High_user()
{
    int temp,position,i,j,n;
    cout<<"Enter Number of process : ";
    cin>>n;
    int process[n];
    int priorty[n];
    int Burst_Time[n];
    int Finish_Time[n];
    int arrival_Time[n];
    int Waiting_Time[n];
    int Turn_around_Time[n];
    for(i=0;i<n;i++)
    {
       process[i]=i+1;
       arrival_Time[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter Priorty For Process "<<i+1<<" : ";
        cin>>priorty[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter Burst Time For Process "<<i+1<<" : ";
        cin>>Burst_Time[i];
    }
    for(i=0;i<n;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(priorty[j]>priorty[position])
            position=j;
        }
        temp=priorty[i];
        priorty[i]=priorty[position];
        priorty[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<n;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\n\n****** High Number High Priorty ******"<<endl;
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time   Priorty "<<endl;
   for(i=0;i<n;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<"\t\t"<<priorty[i]<<endl;
   }
}
void Priorty_Low_user()
{
    int temp,position,i,j,n;
    cout<<"Enter Number of process : ";
    cin>>n;
    int process[n];
    int priorty[n];
    int Burst_Time[n];
    int Finish_Time[n];
    int arrival_Time[n];
    int Waiting_Time[n];
    int Turn_around_Time[n];
    for(i=0;i<n;i++)
    {
       process[i]=i+1;
       arrival_Time[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter Priorty For Process "<<i+1<<" : ";
        cin>>priorty[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter Burst Time For Process "<<i+1<<" : ";
        cin>>Burst_Time[i];
    }
    for(i=0;i<n;i++)
    {
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(priorty[j]<priorty[position])
            position=j;
        }
        temp=priorty[i];
        priorty[i]=priorty[position];
        priorty[position]=temp;
        temp=process[i];
        process[i]=process[position];
        process[position]=temp;

    }
   int temp1=0;
   for(i=0;i<n;i++)
   {
       temp1=temp1+Burst_Time[i];
       Finish_Time[i]=temp1;
       Waiting_Time[i]=Finish_Time[i]-Burst_Time[i]-arrival_Time[i];
       Turn_around_Time[i]=Finish_Time[i]-arrival_Time[i];
   }
   cout<<"\n\n****** Low Number High Priorty ******"<<endl;
   cout<<"\nProcess   Arrival_Time   Burst_Time  Finish_Time   Waiting_Time   Turnaround_Time   Priorty "<<endl;
   for(i=0;i<n;i++)
   {
       cout<<process[i]<<"\t\t"<<arrival_Time[i]<<"\t\t"<<Burst_Time[i]<<"\t"<<Finish_Time[i]<<"\t\t"<<Waiting_Time[i]<<"\t\t"<<Turn_around_Time[i]<<"\t\t"<<priorty[i]<<endl;
   }
}
int main()
{
int choice;
cout<<"\n*********  Select the choice *******"<<endl;
cout<<" \npress 1 For Shortest Job First wit Built_in Values         : "<<endl;
cout<<" \npress 2 For Shortest Job First wit User_Defined Values     : "<<endl;
cout<<" \npress 3 For Low Number High Priorty with Built_in values   : "<<endl;
cout<<" \npress 4 For High Number High Priorty with Built_in values  : "<<endl;
cout<<" \npress 5 For Priorty Scheduling User_Defined Values         : "<<endl;
cout<<" \npress 0 For Exit                                           : "<<endl;
cout<<"\nEnter Choice : ";
cin>>choice;
while(choice!=0)
{
if(choice==1)
SJF_Built_in();
else if(choice==2)
SjF_User_Defined_values();
else if(choice==3)
Low_Number_High_Priorty();
else if(choice==4)
High_Number_High_Priorty();
else if(choice==5)
{
    int b;
    cout<<"Enter 1 for High Number High priorty : "<<endl;
    cout<<"Enter 2 for Low Number Low Priorty   : "<<endl;
    cout<<"Enter Number : ";
    cin>>b;
    if(b==1)
    Priorty_High_user();
    else if(b==2)
    Priorty_Low_user();
    else
    cout<<"\nInvalid Choice : "<<endl;
}
else
cout<<"\nInvalid Choice : \n"<<endl;
cout<<"\n*********  Select the choice *******"<<endl;
cout<<" \npress 1 For Shortest Job First wit Built_in Values         : "<<endl;
cout<<" \npress 2 For Shortest Job First wit User_Defined Values     : "<<endl;
cout<<" \npress 3 For Low Number High Priorty with Built_in values   : "<<endl;
cout<<" \npress 4 For High Number High Priorty with Built_in values  : "<<endl;
cout<<" \npress 5 For Priorty Scheduling User_Defined Values         : "<<endl;
cout<<" \npress 0 For Exit                                           : "<<endl;
cout<<"\nEnter Choice : ";
cin>>choice;
}
cout<<"\n\n **********   SEE You  *********** \n\n"<<endl;
}