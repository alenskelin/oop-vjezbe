//Napisati iterativnu funkciju za traženje najvećeg i najmanjeg broja u nizu.

#include<iostream>
#include <iomanip>
using namespace std;


void list_min_max(int list[], int n)
{
    int min, max;
    
    max = list[0];
    min = list[0];

    for(int i = 1; i < n; i++)
    {
        if(list[i] > max)
            max = list[i];
        
        else if(list[i] < min)
            min = list[i];
    }

    cout << "The highest number in the list is " << max << endl;
    cout << "The lowest number in the list is " << min << endl;

}


int main()
{
    int* list;
    int n;

    cout << "Input the number of elements you want in the list" << endl;
    cin >> n;
    list = new int[n];

    cout << "Populate the list" << endl;
    for(int i = 0; i < n; i++)
        cin >> list[i];

    list_min_max(list, n);

}