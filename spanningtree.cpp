#include <iostream>
using namespace std;
class Edges
{
    int v1;
    int v2;
    int d;
    Edges arr[];

public:
    Edges(int v1, int v2, int d)
    {
        this->v1 = v1;
        this->v2 = v2;
        this->d = d;
    }
};

int main()
{
    Edges e1(1, 2, 3);
    int arr[8][8] = {}, i, j;
    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}