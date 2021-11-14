#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "vjezba_3.h"
using namespace std;


void print_vector(vector<int> &v) 
{
	vector<int> :: iterator it;

	for(it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
}


void vector_input(vector<int> &v, int n)
{
    int broj = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Insert a number " <<  endl;
        cin >> broj;
        v.push_back(broj);
    }
}


void vector_input_with_borders(vector<int> &v, int a, int b)
{
    int broj = a;
    while(broj >= a && broj <= b)
    {
        cout << "Insert a number " <<  endl;
		cin >> broj;
		v.push_back(broj);
	}

}


void vector_combining(vector<int> v1, vector<int> v2, vector<int> &v3)
{
	int flag = 0;
	vector<int>::iterator i;
	vector<int>::iterator j;

    for(i = v1.begin(); i != v1.end(); i++)
    {
        for(j = v2.begin(); j != v2.end(); j++)
        {
            if(*i == *j)
                flag = 1;
        }

        if(flag == 0)
            v3.push_back(*i);
        
        flag = 0;
    }

    print_vector(v3);
}


void sort_vector(vector<int> &v)
{
	int sum=0;
    vector<int> ::iterator it;

	sort(v.begin(), v.end());
	
    for(it = v.begin(); it != v.end(); it++)   
        sum += *it;
    
	v.insert(v.begin(), 0);
	v.push_back(sum);
    
	for(it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
}


void element_removal(vector<int> &v)
{
    int element;

    cout << "Which element do you want to remove from the vector " << endl;
    cin >> element;

    v.erase(v.begin() + element);

    print_vector(v);
}

void number_of_substring_occurences(string str)
{
    string substr = "o";
    size_t found = 0;
    int  number_of_occurences = 0;

    while(true)
    {
        found = str.find(substr, found);

        if(found == string::npos)
            break;
        
        number_of_occurences += 1;
        found += 1;
    }

    cout << "There was " << number_of_occurences << " number of occurences for the substring" << endl;
}

void string_vector_input(vector<string> &v, int n)
{
    string str = "";

    for(int i = 0; i < n; i++)
    {
        cout << "Insert a string " <<  endl;
        cin >> str;
        v.push_back(str);
    }
}

void reverse_string(vector<string> &v)
{
    for(int i = 0; i < v.size(); i++)   
        reverse(v[i].begin(), v[i].end());
}

void sort_vector_by_string(vector<string> &v)
{
	sort(v.begin(), v.end());
}

void print_vector_string(vector<string> &v) 
{
	vector<string> :: iterator it;

	for(it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
}