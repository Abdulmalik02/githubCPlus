#include <iostream>

using namespace std;

//we pass in &timesRun, because it is easier to use in a recursive function
void hailstone(int n, int &timesRun)
{
    //cout statments allow us to print the sequence

    if(n == 1)
    {
        cout << n << endl;
        //break out of recursion
    }
    else
    {
        if((n % 2) == 0)
        {
            cout << n << endl;
            hailstone((n / 2), timesRun);
            timesRun++;
        }
        else
        {
            cout << n << endl;
            hailstone(((n * 3) + 1), timesRun);
            timesRun++;
        }
    }
}

int main()
{

    int initialNum;
    int numRun = 0;

    cout << "Enter an initial hailstone integer: ";
    cin >> initialNum;

    hailstone(initialNum, numRun);

    cout << "Ran " << numRun << " times.";


}

