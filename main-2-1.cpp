#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
extern int tax_bracket_lookup(int income);

int main(void){
  cout << tax_bracket_lookup(100000) << endl;
}

