#include<iostream>

using namespace std;

class Time
{
   private:
       int hour;
       int minute;
       int second;

   public:
       int hours()
       {
           return hour;
       }
       int minutes()
       {
           return minute;
       }
       int seconds()
       {
           return second;
       }
       void reset(int h, int m, int s)
       {
           hour = h % 24;
           minute = m % 60;
           second = s % 60;
       }
       void advance(int h, int m, int s)
       {
           hour += h;
           minute += m;
           second += s;

           if(hour >= 24){
            hour = h % 24;
           }
           if(minute >= 60){
            minute += (m % 60);
            minute = minute % 60;
            hour++;
           }
           if(second >= 60){
            second += (s % 60);
            second = second % 60;
            minute++;
           }
       }
       void print()
       {
           cout<<"Hour: "<<hour<<":"<<"Minute: "<<minute<<":"<<"Second: "<<second<<"\n";
       }

};


int main()
{
    Time t1;

    int hr, mi, sec;

    cout<<"Enter your time (Hour:Minute:Second): ";
    cin>>hr>>mi>>sec;

    t1.reset(hr,mi,sec);

    cout<<"Current time: \n";
    t1.print();

    cout<<"Enter the amount of time you want to advance: \n";
    cin>>hr>>mi>>sec;
    t1.advance(hr,mi,sec);

    cout<<"Current advanced time: ";
    t1.print();


}
