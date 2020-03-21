#include <stdio.h>
#include <iostream>

using namespace std;

/**
 Napisać program realizujący zadanie obrane z menu użytkownika:

Menu

    Ze zbioru n - element-owego wartości losowych z przedziału <p,q> wybrać wartość największą i najmniejszą
    Obliczyć sumę wartości parzystych zawartych w zbiorze wartości losowych z przedziału <p,q>
    Koniec

 Uwaga:

           Program powinien być napisany zgodnie z paradygmatem proceduralnym, a więc w ramach realizacji programu utworzyć:

    funkcję „wyswietl” posiadającą argument będący wskaźnikiem na tablicę
    funkcję „suma” – zawierającą instrukcje wyszukujące ze zbioru przekazanego poprzez wskaźnik wartości parzyste oraz wyliczający sumę tych elementów
    funkcję „min_max” -  wyszukująca ze zbioru przekazanego poprzez wskaźnik wartości największej i najmniejszej
    funkcję „menu” zwracającą wartość wyboru przez użytkownika opcji

- wartości p,q oraz wielkość zbioru, podaje użytkownik
- zabezpieczyć program przed wprowadzaniem wartości błędnych
*/

int fajnaTablica[] = {2,3,4,5,6,7,8,9};


void menu();
void wyswietl(int*);
void suma(int*);
void min_max(int*);



int main(int argc, char const *argv[])
{
  menu();
  return 0;
}


void menu(){
  int wybor = 0;
  do {
    cout << "MENU: " << endl;
    cout << "(1) Wyswietl wszystkie elementy zbioru" << endl;
    cout << "(2) Licz sume wartosci parzystych elementow" << endl;
    cout << "(3) Wyswietl wartosc minimalna i maksymalna" << endl;
    cout << "(0) Wyjdz" << endl;
    cin >> wybor;
    int rok;
    switch (wybor)
    {
    case 1:
      wyswietl(&fajnaTablica[0]);
      break;
    case 2:
      suma(&fajnaTablica[0]);
      break;
    case 3:
      min_max(&fajnaTablica[0]);
      break;
    }
  } while (wybor != 0);
}


void wyswietl(int* in){
  for(int i = 0; i < 8; i++){
    cout << *in << " ";
    ++in;
  }
  cout << endl;
}
void suma(int* in){
  int suma = 0;
  for(int i = 0; i < 8; i++){
    if (*in % 2 == 0){
      suma += *in;
    }
    ++in;
  }
  cout << "Suma = " << suma << endl;
}
void min_max(int* in){
  int min = *in;
  int max = *in;
  for(int i = 0; i < 8; i++){
    if (*in < min){
      min = *in;
    }
    if (*in > max){
      max = *in;
    }
    ++in;
  }
  cout << "Min = " << min << endl;
  cout << "Max = " << max << endl;
}



 