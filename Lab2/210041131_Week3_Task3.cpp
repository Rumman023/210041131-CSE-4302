#include<iostream>
#include<string.h>

using namespace std;

class Medicine
{
    private:
        char Name[100];
        char GenericName[100];
        double DiscountPercent;
        double UnitPrice;

    public:
        void assignName(char name[], char genericName[])
        {
            strcpy(Name, name);
            strcpy(GenericName, genericName);
        }
        void assignPrice(double price)
        {

            if(price < 0)
            {
                cout<<"[Error] Price needs to be Positive.\n";
                UnitPrice = 0.00;
            }
            else
            UnitPrice = price;
        }
        void setDiscountPercent(double percent)
        {
            if(percent > 45.00 or percent < 0.00){
                cout<<"[Error]Discount price must be between 0-45%.\n";
                percent = 5.00;
            }
             DiscountPercent = percent;
        }
        double getSellingPrice(int nos)
        {
            double dis_price = UnitPrice - ((UnitPrice*DiscountPercent) / 100.00);
            dis_price *= nos;
            return dis_price;
        }
        void display()
        {
            cout<<Name<<"("<<GenericName<<") has a unit price BDT "<<UnitPrice<<" Current discount "<<DiscountPercent<<"%\n";
        }

};

int main()
{
     Medicine m1;

     char name[100];
     char genericName[100];
     double price;
     double percent;
     int nos;

     cout<<"Enter medicine name: ";
     cin>>name;
     cout<<"Enter generic name: ";
     cin>>genericName;

     m1.assignName(name, genericName);

     cout<<"Enter the price of the medicine: ";
     cin>>price;
     m1.assignPrice(price);

     cout<<"Enter the discount percent: ";
     cin>>percent;
     m1.setDiscountPercent(percent);
     m1.display();

     cout<<"Enter units: ";
     cin>>nos;

     cout<<"Your net price is "<<m1.getSellingPrice(nos)<<" BDT\n";
}
