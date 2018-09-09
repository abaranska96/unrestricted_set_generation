#include "unrestricted_set.hpp"
#include <cstdlib>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdint.h>


using namespace std;

unrestricted_set::unrestricted_set() 
{

}

unrestricted_set::unrestricted_set(unrestricted_set& orig) 
{

}

unrestricted_set::~unrestricted_set() 
{

}

int32_t unrestricted_set::preambles_on_root_sequence(int32_t zcz_config) 
{
  int32_t max_cv0_3 = 0;
  if (zcz_config < 16) 
  {
    int32_t ncs0_3 = this->zone_config_table0_3[zcz_config];
    if (ncs0_3 != 0) 
    {
     max_cv0_3 = this->nzc0_3 / ncs0_3 - 1;
    }
  }
  else
  {
    return 0;
  }

  return max_cv0_3;
}

int32_t unrestricted_set::root_sequence_count(int32_t zcz_config) 
{
  int32_t max_cv0_3 = preambles_on_root_sequence(zcz_config);
  int32_t u_count0_3 = 0;
  if (max_cv0_3 != 0) 
  {
    u_count0_3 = ceil(64.00 / (double) max_cv0_3);
  }

  return u_count0_3;
}

int32_t unrestricted_set::root_sequence_index(int32_t preamble_index, int32_t zcz_config) 
{
  int32_t max_cv0_3 = preambles_on_root_sequence(zcz_config);
  int32_t root_index = 0;
  if (preamble_index < 64 && zcz_config < 16) 
  {
    while ((root_index * max_cv0_3) < preamble_index) 
    {
      root_index++;
    }
  }
return root_index;
}

prach_info::~prach_info() 
{
    
};

