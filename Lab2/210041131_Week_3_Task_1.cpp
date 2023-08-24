#include<iostream>

using namespace std;

class Counter
{
   private:
       int count;
       int step;
   public:
       void setIncrementStep(int step_val){
           step = step_val;
       }
       int getCount(){
           return count;
       }
       void increment(){
           count += step;
       }
       void resetCount(){
           count = 0;
       }

};

int main()
{
    Counter c1;
    int _step;

    cout<<"Enter the value of step: "<<"\n";
    cin>>_step;

    c1.setIncrementStep(_step);
    c1.resetCount();


    cout<<"Current value: "<<"\n";
    cout<<c1.getCount()<<"\n";

    c1.increment();

    cout<<"Value after incrementing: "<<"\n";
    cout<<c1.getCount()<<"\n";

    cout<<"Incrementing 3 times: "<<"\n";

    int i=5;
    while(i>0){
        c1.increment();
        cout<<c1.getCount()<<"\n";
        i--;
    }
}
