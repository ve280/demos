#include "MaxIntSet.h"

// Only works if data members of IntSet are protected
int MaxIntSet::max() const{
   int m = elts[0];
   for (int i=1; i<numElts; i++){
      if (elts[i] > m)
         m = elts[i];
   }
   return m;
}
