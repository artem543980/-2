/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void casual() {
int a = rand ()% 6 + 1;
int b = rand ()% 6 + 1;

cout « a « endl;
cout « b « endl;
cout « a + b « endl;
}

int main()
{
srand(time(0));
casual();
system("pause");

return 0;
}


