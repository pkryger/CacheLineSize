#include <stdio.h>
#include "CacheLineSize.h"

int main(const int argc, const char** argv)
{
  printf("%zu\n", CacheLineSize());
  return 0;
}
