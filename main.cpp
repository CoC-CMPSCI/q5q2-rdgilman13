#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    cout << N << " to power number: ";
    int power = 1;

    if (0 < N < 10;  1 <= M <= 10)
    {
        for (int i=0; i<N; i++)
        {
        power *= M;
        cout << power << " ";

        }
    }
    if (N<0||N>10; M<1||M>10)
    {    cout << "Invalid Entries" << endl;
    }
    // TODO

    cout << endl;

    return 0;
}
