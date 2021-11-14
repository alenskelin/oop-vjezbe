//Napisati rekurzivnu funkciju za traženje najvećeg i najmanjeg broja u nizu.

#include<iostream>
#include <iomanip>
using namespace std;


void list_min_max_recursive(int list[], int n, int& min, int& max)
{
    if(n == 0)
        return;
    else
    {
        if(list[n - 1] > max)
            max = list[n - 1];
        
        else if(list[n - 1] < min)
            min = list[n - 1];
        
        return list_min_max_recursive(list, n - 1, min, max);
    }
}


int main()
{
    int* list;
    int n;
    int min, max;

    cout << "Input the number of elements you want in the list" << endl;
    cin >> n;
    list = new int[n];

    cout << "Populate the list" << endl;
    for(int i = 0; i < n; i++)
        cin >> list[i];

    min = list[0];
    max = list[0];

    list_min_max_recursive(list, n, min, max);

    cout << "The highest number in the list is " << max << endl;
    cout << "The lowest number in the list is " << min << endl;


}