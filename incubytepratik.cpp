#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{
private:
    int x, y, z;    // Current position (x, y, z)
    char d; // Current direction (N, S, E, W, U, D)
    char orig;

public:

    // Declaring Constructor SpaceCraft with x,y,z co-ordinates and directon.
    Spacecraft(int &iX, int &iY, int &iZ, char &id, char orgn)
    {
        x = iX;
        y = iY;
        z = iZ;
        d = id;
        orig = orgn;
    }

    // Moving Backward SpaceCraft
    void Backward() // b
    {
        switch (d)
        {
        case 'N':
            y--;
            break;
        case 'S':
            y++;
            break;
        case 'E':
            x--;
            break;
        case 'W':
            x++;
            break;
        case 'U':
            z--;
            break;
        case 'D':
            z++;
            break;
        }
    }

    // Moving Forward SpaceCraft
    void Forward() // f
    {
        switch (d)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'U':
            z++;
            break;
        case 'D':
            z--;
            break;
        }
    }

    // Moving SpaceCraft left
    void takeLeft() // l
    {
        switch (d)
        {
        case 'N':
            d = 'W';
            orig = 'W';
            break;
        case 'S':
            d = 'E';
            orig = 'E';
            break;
        case 'E':
            d = 'N';
            orig = 'N';
            break;
        case 'W':
            d = 'S';
            orig = 'S';
            break;
        case 'D':
            if (orig == 'N')
            {
                d = 'W';
                orig = 'W';
                break;
            }
            else if (orig == 'S')
            {
                d = 'E';
                orig = 'E';
                break;
            }
            else if (orig == 'E')
            {
                d = 'N';
                orig = 'N';
                break;
            }
            else
            {
                d = 'S';
                orig = 'S';
                break;
            }
        case 'U':
            if (orig == 'N')
            {
                d = 'W';
                orig = 'W';
                break;
            }
            else if (orig == 'S')
            {
                d = 'E';
                orig = 'E';
                break;
            }
            else if (orig == 'E')
            {
                d = 'N';
                orig = 'N';
                break;
            }
            else
            {
                d = 'S';
                orig = 'S';
                break;
            }
        }
    }

    // Moving SpaceCraft Right
    void takeRight() // r
    {

        switch (d)
        {
        case 'N':
            d = 'E';
            orig = 'E';
            break;
        case 'S':
            d = 'W';
            orig = 'W';
            break;
        case 'E':
            d = 'S';
            orig = 'S';
            break;
        case 'W':
            d = 'N';
            orig = 'N';
            break;
        case 'D':
            if (orig == 'N')
            {
                d = 'E';
                orig = 'E';
                break;
            }
            else if (orig == 'S')
            {
                d = 'W';
                orig = 'W';
                break;
            }
            else if (orig == 'E')
            {
                d = 'S';
                orig = 'S';
                break;
            }
            else
            {
                d = 'N';
                orig = 'N';
                break;
            }
        case 'U':
            if (orig == 'N')
            {
                d = 'E';
                orig = 'E';
                break;
            }
            else if (orig == 'S')
            {
                d = 'W';
                orig = 'W';
                break;
            }
            else if (orig == 'E')
            {
                d = 'S';
                orig = 'S';
                break;
            }
            else
            {
                d = 'N';
                orig = 'N';
                break;
            }
        }
    }

    

    // Moving SpaceCraft Down
    void takeDown() // d
    {
        if (d != 'D')
        {
            d = 'D';
        }
    }

    

    // Printing x,y,z co-ordinates and direction
    void PrintPosition()
    {
        cout << "Current Position: (" << x << ", " << y << ", " << z << "), Direction: " << d << endl;
    }

    // Printing Final Position of SpaceCraft
    void FinalPosition()
    {
        cout << "Final Position: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Printing Final Direction of SpaceCraft
    void FinalDirection()
    {
        cout << "Final Direction: " << d << endl;
    }
};

int main()
{
    int t=0,a = 0, b = 0, c = 0;
    char dir = 'N';
    Spacecraft Chandrayaan3(a, b, c, dir, 'N');
    while(t<100)
    {
        t++;
    }
    string instruct;
    cin >> instruct;
    cout << endl;
    // Chandrayaan3.PrintPosition();
    for (int i = 0; i < instruct.length(); i++)
    {
        char c = instruct[i];
        switch (c)
        {
        case 'f':
            Chandrayaan3.Forward();
            Chandrayaan3.PrintPosition();
            break;
        case 'b':
            Chandrayaan3.Backward();
            Chandrayaan3.PrintPosition();
            break;
        case 'l':
            Chandrayaan3.takeLeft();
            Chandrayaan3.PrintPosition();
            break;
        case 'r':
            Chandrayaan3.takeRight();
            Chandrayaan3.PrintPosition();
            break;
        case 'u':
            Chandrayaan3.takeUp();
            Chandrayaan3.PrintPosition();
            break;
        case 'd':
            Chandrayaan3.takeDown();
            Chandrayaan3.PrintPosition();
            break;
        }
    }

    // Chandrayaan3.PrintPosition();
    cout << endl;

    Chandrayaan3.FinalPosition();
    cout << endl;

    Chandrayaan3.FinalDirection();
    cout << endl;
    return 0;
}
