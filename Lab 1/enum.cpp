#include<iostream>

using namespace std;

int main()
{
    int _gender;
    enum gender{male, female};

    gender p1_gender;

    cin>>_gender;

    if(_gender == 0) {
        p1_gender = male;
    }
    else p1_gender = female;

    cout<< p1_gender;

    return 0;
}
