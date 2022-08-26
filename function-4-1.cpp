#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int sum_middle_row_column(int **vals, int num_rows, int num_cols){
  
  int sum = 0;
  
  for (int i=0; i<num_rows; i++){
    for (int j=0; j<num_cols; j++){
      if (i == floor(num_rows/2) || j == floor(num_cols/2)){
        sum = sum + vals[i][j];
        if (i==j){
          sum = sum + vals[i][j];
        }
      }
    }
  }
  
  return sum;
}
