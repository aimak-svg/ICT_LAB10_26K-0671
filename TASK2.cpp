#include <iostream>
#include <string>
using namespace std;

class Fan
{
    public:
        int speed;
        string color;

        Fan()
        {
            speed=1;
            color="White";
        }

        void showFan()
        {
            cout<<"Fan Speed: "<<speed<<endl;
            cout<<"Fan Color: "<<color<<endl;
        }
};

int main()
{
    Fan fan1;

    fan1.showFan();
}