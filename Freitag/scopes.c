#include <stdio.h>

// stehen außerhalb der main
int globalVariable = 42;

void incrementlocaleVariable(){
  //this will fail! localVariabale undeclared - uncomment to test
  //localVariabale++;
}

void incrementGlobalVariable(){
  globalVariable++;
}

int incrementAVariable(int variable){
  variable++;
  return variable;
}

void main() {
  printf("globalVariable: %i\n", globalVariable);  //42
  globalVariable++;
  printf("globalVariable: %i\n", globalVariable);  //43

  incrementGlobalVariable();
  printf("globalVariable: %i\n", globalVariable);  //44

  int localVariabale = 20;

  printf("localVariabale: %i\n", localVariabale);  //20
  localVariabale++;
  printf("localVariabale: %i\n", localVariabale);  //21

  incrementlocaleVariable(); //--> will fail

  // call by copy --> will not change value of localVariabale
  incrementlocaleVariable(localVariabale);
  printf("localVariabale: %i\n", localVariabale);  //21

  // this is the way you can change locale variables
  localVariabale = incrementAVariable(localVariabale);
  printf("localVariabale: %i\n", localVariabale);  //22
}
