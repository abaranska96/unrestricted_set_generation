#include "unrestricted_set.hpp"
#include <cstdlib>
#include <cstdio>
#include <math.h>

//#include <stdlib.h> // for malloc and free
//void* operator new(size_t size) { return malloc(size); }
//void operator delete(void* ptr,  unsigned long size) { if (ptr) free(ptr); }


unrestricted_set::unrestricted_set() {
}

unrestricted_set::unrestricted_set(unrestricted_set& orig) {
}

unrestricted_set::~unrestricted_set() {    
}


int32_t unrestricted_set::root_sequence_count(int32_t zcz_config) {
    int32_t Nzc; 
    int32_t Ncs; 
    int32_t U; 
    int32_t n;
    int32_t Cv;  
    auto v; 
    auto Xu;
    auto Xuv {Xu*(n+Cv%Nzc)}; 
    
    
};
 

prach_info::~prach_info() 
{ 
   //destruktor

} 