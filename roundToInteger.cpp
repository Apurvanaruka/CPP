#include <iostream>
using namespace std;
class Round
{
    double num;

public:
    Round(double x)
    {
        num = x;
    }
    int roundTointerger()
    {
        int n = num;
        float f = ((n * 2 + 1) / 2.0);
        if (f <= num)
        {
            return num + 1;
        }
        else
            return num;
    }

    double roundToTenths()
    {
        int rem = num*10;
        return rem/10.0;
    }
    double roundToHundredths()
    {
         int rem = num*100;
        return rem/100.0;
    }

    double roundToThousandths()
    {
         int rem = num*1000;
        return rem/1000.0;
    }
};

int main(void)
{
    double num;
    cout << "Enter a round number : ";
    cin >> num;
    Round R1(num);
    cout <<"interger = " << R1.roundTointerger() << endl;   
    cout <<"tenths = "<< R1.roundToTenths() << endl;   
    cout <<"hundredths = "<< R1.roundToHundredths() << endl;   
    cout <<"thousandths = "<< R1.roundToThousandths() << endl;   
    return 0;

}