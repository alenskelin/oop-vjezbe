#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;


typedef struct tocka
{
    int x;
    int y;
}tocka;


typedef struct pravokutnik
{
    tocka tocke[1];
}pravokutnik;


typedef struct kruznica 
{
	int r;
	tocka ishodiste;
}kruznica;


void unos_pravokutnika(pravokutnik* rectangle, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Unesite koordinate prve točke pravokutnika " << endl;
        cin  >> rectangle[i].tocke[0].x;
        cin  >> rectangle[i].tocke[0].y;

        cout << "Unesite koordinate druge točke pravokutnika " << endl;
        cin  >> rectangle[i].tocke[1].x;
        cin  >> rectangle[i].tocke[1].y;
    }
}

void unos_kruznice(kruznica& circle)
{
    cout << "Unesite ishodiste kruznice " << endl;
    cin >> circle.ishodiste.x;
    cin >> circle.ishodiste.y;

    cout << "Unesite radijus kruznice " << endl;
    cin >> circle.r;
}


int formula_kruznice(int tocka1x, int tocka1y, int tocka2x, int tocka2y) 
{
    return sqrt((tocka1x - tocka2x) * (tocka1x - tocka2x) + (tocka1y - tocka2y) * (tocka1y - tocka2y));
}


int broj_pravokutnika_koje_sijece_kruznica(const pravokutnik* rectangle, const kruznica& circle, int n)
{
    int br = 0;
    int sijece = 0;
    for (int i = 0; i < n; i++) 
    {
        br = 0;
        for(int j = 0; j <= 1; j++)
        { 
            if ((formula_kruznice(rectangle[i].tocke[j].x, rectangle[i].tocke[j].y, circle.ishodiste.x, circle.ishodiste.y) < circle.r))
                br++;
        }
        if(br == 1)
            sijece++;
    }
    return sijece;
}


int main()
{
    int n;

    cout << "Unesite broj pravokutnika " << endl;
    cin >> n;

    pravokutnik rectangle[n];
    unos_pravokutnika(rectangle, n);

    kruznica circle;
    unos_kruznice(circle);

    cout << "Sijece " << broj_pravokutnika_koje_sijece_kruznica(rectangle, circle, n) << endl;

}

