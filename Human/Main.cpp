#include <iostream>
#include "human.h"

using namespace std;

int main()
{
    Human h1("Valera", "Lisiy", 17);
    h1.Print();

    h1.Input();
    h1.Print();

}