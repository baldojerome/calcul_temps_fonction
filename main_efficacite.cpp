#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;


void f1(int n)
{
    int somme = 0;
    for (int i = 0 ; i < n ; i ++)
    {
      somme ++;  
    }
}

void f2(int n)
{
    int somme = 0;
    for (int i = 0 ; i < n ; i ++)
    {
        for (int j = 0 ; j < n ; j ++)
        {
            somme ++;
        }
    }
}

void f3(int n)
{
    int somme = 0;
    for (int i = 0; i < n ; i ++)
    {
        for (int j = 0; j < n * n ; j ++)
        {
            somme ++;
        }
    }
}

void f4(int n)
{
    int somme = 0;
    for (int i = 0 ; i < n ; i ++)
    {
       for (int j = 0; j < i ; j ++)
       {
           somme ++;
       } 
    }
}

void f5(int n)
{
    int somme = 0;
    for (int i = 0; i < n ; i ++)
    {
        for (int j = 0; j < i * i ; j ++)
        {
           for (int k = 0; k < j ; k ++)
           {
               somme ++;
           } 
        }
    }
}

void f6(int n)
{
    int somme =0;
    for (int i = 1; i < n ; i ++)
    {
      for (int j = 1; j < i * i ; j ++)
      {
          if (j % i == 0)
          {
              for (int k = 0; k < j ; k ++)
              {
                  somme ++;
              }
          }
      }  
    }
}
int main()
{    
    int choixFonct = 0;
    int nFois = 0;
    
    cout << "Choisissez vore fonction" << endl;
    
    cout << "-1 f1(X)" << endl;
    cout << "-2 f2(X)" << endl;
    cout << "-3 f3(X)" << endl;
    cout << "-4 f4(X)" << endl;
    cout << "-5 f5(X)" << endl;
    cout << "-6 f6(X)" << endl;
    
    cout << "votre choix?";
    cin >> choixFonct;
    cout << "nombre a tester?10? 100? 1000? 10000?";
    cin >> nFois;
    
    
    LARGE_INTEGER freq, depart, fin;
	double duree=0;
	QueryPerformanceFrequency(&freq); // Obtient fr�quence
	QueryPerformanceCounter(&depart);

	/* 
		Mettre votre code ici 
	*/
    //saisie principale
    
    
    switch(choixFonct)
    {
        case 1:
            f1(nFois); 
            break;
        case 2:
            f2(nFois); 
            break;
        case 3:
            f3(nFois);
            break;
        case 4:
            f4(nFois); 
            break;    
        case 5:
            f5(nFois); 
            break;
        case 6:
            f6(nFois); 
            break;
        default :
            cout << "mauvaise entree" << endl;
            break;
	}
    QueryPerformanceCounter(&fin);

    duree = ((fin.QuadPart-depart.QuadPart)/(double)freq.QuadPart)*1000L;
    printf("Duree: %.4lf millisecondes\n", duree);

	system("pause");
    return 0;
}