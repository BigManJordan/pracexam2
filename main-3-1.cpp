#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
extern int even_numbers_above(int vals[], int above, int length);

int main(void){
  
  int vals[]={1,2,3,4,5,6,7};
  int vals_length=7;
  int res=even_numbers_above(vals,0,vals_length);
  cout << res << endl;
  
}
