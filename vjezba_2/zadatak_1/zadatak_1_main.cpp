
#include <iostream>
using namespace std;

void list_min_max(int* list, int& min, int& max, int n) 
{
    cout << "Populate the list" << endl;
    for(int i = 0; i < n; i++)
        cin >> list[i];

    min = list[0];
    max = list[0];

    for(int i = 1; i < n; i++) 
    {
        if(list[i] > max)
            max = list[i];

        else if(list[i] < min)
            min = list[i];
    }
}


int main()
{
    int min, max, n;

    cout << "Input the number of elements you want in the list" << endl;
    cin >> n;
    int* list = new int[n];

    list_min_max(list, min, max, n);

    cout << "The highest number in the list is " << max << endl;
    cout << "The lowest number in the list is " << min << endl;
}
