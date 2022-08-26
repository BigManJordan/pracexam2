//
//  function-1-1.cpp
//  pracexam2
//
//  Created by Jordan Le on 26/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int **pointer_array(int *vals, int len){
  
  int **pointers = new int*[len];
  
  for (int i=0; i<len; i++){
    pointers[i] = &vals[i];
  }
  
  return pointers;
}
