#include "Pascaltriangle.h"
#include <iostream>

using namespace std;

Pascaltriangle::Pascaltriangle(int ni)
{
	n = ni;
}

void Pascaltriangle::wypisz()
{
    for (int line = 1; line <= n; line++)
    {
        int C = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << "\n";
    }
}
