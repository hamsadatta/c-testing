#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>




int add(int val1,int val2){
 int total=0;

  total=val1+val2;
  return total;

}


int sub(int val1,int val2){
 int total=0;

  total=val1-val2;
  return total;

}



int main(){
  assert (add(3,4)==7);
  assert (add(3,-4)==-1);
  assert (add(-3,4)==1);
  assert (add(-3,-4)==-7);
  printf("all test cases passed\n");

  assert (sub(3,4)==-1);
  assert (sub(3,-4)==7);
  assert (sub(-3,4)==-7);
  assert (sub(-3,-4)==1);
    printf("all test cases passed\n");

}
