#include "input.hpp"

namespace input
{
    using namespace std;

    void _start(void);

    void start(void)
    {
        thread t(_start);
        t.detach();
    }

    void _start(void)
    {
        string s;
        while(1)
        {
            cin >> s;
            cout << "Got input :" << s << endl;
        }
    }
} //namespace input