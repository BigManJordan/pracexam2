#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int tax_bracket_lookup(int income){
  
  int percentage;
  
  if (income <= 10000){
    return percentage = 0;
  } else if (income <= 20000){
    return percentage = 10;
  } else if (income <= 50000){
    return percentage = 15;
  } else if (income <= 100000){
    return percentage = 20;
  } else if (income > 100000){
    return percentage = 30;
  }
  
  return percentage = -1;
}
