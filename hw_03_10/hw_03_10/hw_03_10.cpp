#include <iostream>
#include <Windows.h>

using namespace std;

void reverseArray(double arrRever[], int sizeRever)
{
    for (int y = 0; y < sizeRever / 2; y++)
    {
        double temp = arrRever[y];
        arrRever[y] = arrRever[sizeRever - 1 - y];
        arrRever[sizeRever - 1 - y] = temp;
    }
}

void reverseArray(double arrRever[], int start, int end)
{
    while (start < end)
    {
        double temp = arrRever[start];
        arrRever[start] = arrRever[end];
        arrRever[end] = temp;
        start++;
        end--;
    }
}


void reverseArray(double arrRever[], int sizeRever, bool reverseCompletely)
{
    if (reverseCompletely)
    {
        for (int y = 0; y < sizeRever / 2; y++)
        {
            double temp = arrRever[y];
            arrRever[y] = arrRever[sizeRever - 1 - y];
            arrRever[sizeRever - 1 - y] = temp;
        }
    }
}

int main()
{
    const int arrSize = 5;

    double arrRever1[arrSize] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    reverseArray(arrRever1, 1, 3);  

    double arrRever2[arrSize] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    reverseArray(arrRever2, arrSize, false);

    Sleep(INFINITE);
}