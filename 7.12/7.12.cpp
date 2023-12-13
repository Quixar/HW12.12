#include <iostream>
using namespace std;

class Counter {
    int current = 0;
    int max = 0;
    int min = 0;
    int increase;
public:
    void SetCurrent(int cur) {
        current = cur;
    }

    int GetCurrent()
    {
        return current;
    }

    void SetMax(int mx)
    {
        max = mx;
    }

    int GetMax()
    {
        return max;
    }

    void SetMin(int mn)
    {
        min = mn;
    }

    int GetMin()
    {
        return min;
    }

    void SetIncrease(int inc)
    {
        increase = inc;
    }

    int GetIncrease()
    {
        return increase;
    }

    void IncreaseValue()
    {
        if (current + increase <= max)
        {
            current += increase;
        }
        else if(current + increase > max)
        {
            current = min;
        }
    }

    void Reset()
    {
        current = min;
    }

};

int main()
{
    Counter c;
    c.SetCurrent(99998);
    c.SetIncrease(1);
    c.SetMax(99999);
    c.SetMin(0);
    c.IncreaseValue();
    cout << c.GetCurrent() << "\n";
    c.Reset();
    cout << c.GetCurrent() << "\n";
}