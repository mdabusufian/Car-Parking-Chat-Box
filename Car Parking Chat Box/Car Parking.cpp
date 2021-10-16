#include <iostream>
#include<string>
#include<windows.h>

using namespace std;

int main()
{
    int time,i,j;
    int car_number;
    char info,inp,company,A,B,Y,N,a,b;
    char w[]="Welcome To CAR PARKING SYSTEM";
    string type,gtkey;
    system("color 4");
    cout<<"\n\t\t";
    for(i=0; i<strlen(w); i++)
    {
        cout <<w[i];
        Sleep(100);
    }
    cout<<"\n\n\t Project Manager: Your Name \t\tID No:00-00000-0\n\n\n\n\n";
    cout<<"To continue the program type 'Y' and End type 'N' - \n";
    cout<<"--> ";
    cin>>inp;

    if(inp=='y'||inp=='Y'||inp=='Yes'||inp=='YES'||inp=='yes')
    {
        cout<<"\n Welcome To CAR PARKING SYSTEM";
    }
    else
    {
        cout<<"\n Thanks For Coming ";
        return 0;
    }
    system("cls");
    system("color A");

    if(gtkey!="bi")
    {
        {
            cout<<"\t HELLO SIR \n";
            cout<<"\t--> ";
            cin>>gtkey;
        }

        cout<<"\n\t Do you want to park your car?\n\t(Yes=y/No=n) \n";
        cout<<"\t--> ";
        cin>>info;
        system("cls");
        if(info=='y'||info=='Y'||info=='Yes'||info=='YES'||info=='yes')
        {
            {
                cout<<"\n\t What is your car type?(Micro/Private) \n";
                cout<<"\t--> ";
                cin>>type;
            }
            cout<<endl;
            cout<<endl;

            cout<<"\n\tWhich company do you want to park the car in? \n"<<endl;
            cout<<"\t"<<endl<<"\t(a) Andy Car Paking \n\t(b) Ford Car Parking"<<endl;
            cout<<"\t--> ";
            cin>>company;
            system("cls");
            cout<<"\n\tEnter Your Car Number:";
            cin>>car_number;
            if(company=='a'||company=='A')
            {
                cout<<"\n Parking Company: Andy Car Parking "<<endl;
                cout<<"\nNow we are checking your information."<<endl;
                cout<<"\n";
                char l[]="Loading...........";
                for(i=0; i<strlen(l); i++)
                {
                    cout <<l[i];
                    Sleep(200);
                }
                system("cls");
                cout<<"\n\n\n\t\tVerification complete."<<endl;
                for(i=0; i<20; i++)
                {
                    Sleep(80);
                }

            }
            if(company=='b'||company=='B')
            {
                cout<<"\nParking Company: Ford Car Parking"<<endl;
                cout<<"\nNow we are checking your information."<<endl;
                cout<<"\n\t";
                char l[]="Loading...........";
                for(i=0; i<strlen(l); i++)
                {
                    cout <<l[i];
                    Sleep(200);
                }
                system("cls");
                cout<<"\n\n\t\tVerification complete."<<endl;
                for(i=0; i<20; i++)
                {
                    Sleep(80);
                }
            }
            system("cls");

            cout<<"\n Please Select Parking Time"<<endl;
            cout<<"\n Choose an option :"<<endl;
            cout<<"(1)For 1 Hour\n(2)For 2 hour\n(3)For 3 Hour\n(4)For 4 Hour\n(5)No Time Limit "<<endl;
            cout<<"--> ";
            cin>>time;
            system("cls");
            if(time==1)
            {
                cout<<"\n Thank You. Please park Your car in row number:20A-45"<<endl;
            }

            if(time==2)
            {
                cout<<"\n Sorry !!!! Not Enough Space For Parking 2 hour."<<endl;
            }

            if(time==3)
            {
                cout<<"\n Thank You. Please park Your car in row number:20A-54"<<endl;
            }
            if(time==4)
            {
                cout<<"\n Sorry !!!! Not Enough Space For Parking 4 hour."<<endl;
            }

            if(time==5)
            {
                cout<<"\nSorry !!!! Not Enough Space For Parking."<<endl;
                return 0;
            }

            cout<<endl;
            cout<<endl;
            cout<<"\n Thanks for being with us. Have a good day."<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;

            cout<<" CAR TYPE       :  "<<type      <<endl;
            cout<<" CAR No         :  "<<car_number <<endl;

            system("PAUSE");
        }
    }
}
