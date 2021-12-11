
#include "lib.h"
float MaxArray (const float num[],int dim){
  num[dim] ;
  float max= num[0];
  for (int i=0; i<dim; i++){
    if(max<num [i]){
      max=num[i];
    }
  }
  return max;
}
