#include<iostream>
#include<string.h>
using namespace std;
class p1
{
    public :
     void manu ();
    void  stationlist();
    void timetable();
    void bookingsystem();
    void  contact_us ();


};


        void p1::manu()
        {
             cout<<"_______________________________________________WELLCOME TO DHAKA METRO RAIL______________________________________________________"<<endl;


        int x;
        cout<<"1. Here is the station list."<<endl<<"(If You want to see Please press 1)"<<endl;
        cout<<"2. Here is the timetable."<<endl<<"(If You want to see Please press 2)"<<endl;
        cout<<"3. Here is the ticket booking process."<<endl<<"(If You want to see Please press 3)"<<endl;
        cout<<"4. Here is the contact system."<<endl<<"(If You want to see Please press 4)"<<endl;
        cin>>x;

        switch(x)
        {
            case 1:

            stationlist();
            break;
            case 2:
                timetable();
                break;
            case 3:

            bookingsystem();
            break;

            case 4:

            contact_us();
            break;

            default:

                cout<<"You have to choose 1 to 4 number"<<endl<<"try again"<<endl;
                manu();

            break;

        }
        }

        void p1::stationlist()
        {
             cout<<"_______________________________________________WELLCOME TO DHAKA METRO STATIONLIST______________________________________________________"<<endl;;
            cout << "1.Uttara north "<< endl
                 << "2.Uttara centre " << endl
                 << "3.Uttara south \n4.Pallabi \n5.Mirpur 10\n 5.Mirpur 11\n6.Pallabi \n7.Kazipara \n8.Shawrapara \n9.Agargao\n10.Farmgate \n"<< endl;
               int  a;
cout<<"Do you want back home?(1=YES OR 0= NO)"<<endl;
cin>>a;
if (a==1)
{
    manu();
}
else
{
    cout<<"__________________________THANKS FOR VISITING______________________"<<endl;
}
        }

void p1::timetable()
{
     cout<<"_________________________________________WELLCOME TO DHAKA METRO TIMETABLE______________________________________________________"<<endl;
   cout<<"FREQUENCY TO TRAIN : 10 MINITES"<<endl;
   cout<<"OFF PACK FREQUENCY : 15 MINITES"<<endl;
   cout<<"SERVICE TIME  : 8 am (morning) TO 8pm (night)\n OFF DAY : FRIDAY"<<endl;
   cout<<"STATION STOPPING TIME  : 30 SECOUND"<<endl;
   cout<<"TRAVEL TIME FROM UTTARA NORTH TO FARMGATE : 45 MINITES"<<endl;
      int  a;
cout<<"Do you want back home?(1=YES OR 0= NO)"<<endl;
cin>>a;
if (a==1)
{
    manu();
}
else
{
    cout<<"__________________________THANKS FOR VISITING______________________"<<endl;
}
}
void p1::bookingsystem(){
     cout<<"_____________________________________WELCOME TO METRO TICKET BOOKING SYSTEM______________________________________________________"<<endl;
      cout << "1.Uttara north "<< endl
                 << "2.Uttara centre " << endl
                 << "3.Uttara south \n4.Pallabi \n5.Mirpur 10\n6.Mirpur 11\n7.Pallabi \n8.Kazipara \n9.Shawrapara \n10.Agargao\n11.Farmgate \n"<< endl;
     int from,to,no,type,price,s1;
     cout<<"FROM : ";
     cin>>from;
     cout<<"\n TO : ";
     cin>>to;
     cout<<"\n NUMBER OF TICKET : ";
     cin>>no;
     cout<<"\n TYPE(one way or two way) : ";
     cin>>type;
     if (from>to)
     {
        s1=from-to;
     }
     else
     {
        s1=to-from;
     }

     price=(10*no*type*s1);
        cout<<"------------------------------ TICKET------------------"<<endl;
     cout<<"YOUR TICKET PRICE IS "<<price<<endl;
     int b;
     cout<<endl;
     cout<<"DO YOU WANT BUY TICKET?(1=YES OR 0= NO)"<<endl;
     cin>>b;

     if(b==1)
     {
        cout<<endl<<"____Please check the printer_____"<<endl;
        cout<<"__________________________THANKS FOR VISITING______________________"<<endl;
     }
    else {

    int  a;
cout<<"Do you want back home?(1=YES OR 0= NO)"<<endl;
cin>>a;
if (a==1)
{
    manu();
}
else
{
    cout<<"__________________________THANKS FOR VISITING______________________"<<endl;
}


}
}
void p1::contact_us()
{
     cout<<"_____________________________________WELLCOME TO DHAKA METRO CONTACT______________________________________________________"<<endl;
    cout<<"COUNTACT NUMBER : +880-2-811100"<<endl;
    cout<<"EMAIL : me.quaere@gmail.com."<<endl;
    cout<<"ADDRESS :Dia Bari Rd, Dhaka, Bangladesh"<<endl;
     int  a;
cout<<"Do you want back home?(1=YES OR 0= NO)"<<endl;
cin>>a;
if (a==1)
{
    manu();
}
else
{
    cout<<"__________________________THANKS FOR VISITING______________________"<<endl;
}
}

int main ()
{
    p1 alam;
    alam.manu();
    return 0;
}

