#include "unrestricted_set.hpp"
#include <cstdlib>
#include <cstdio>
#include <math.h>
#include <iostream>

//#include <stdlib.h> // for malloc and free
//void* operator new(size_t size) { return malloc(size); }
//void operator delete(void* ptr,  unsigned long size) { if (ptr) free(ptr); }
using namespace std; 

unrestricted_set::unrestricted_set() {
}

unrestricted_set::unrestricted_set(unrestricted_set& orig) {
}

unrestricted_set::~unrestricted_set() {    
}


int unrestricted_set::root_sequence_count(int zcz_config) {
    int i;  
    for (i=0; i<zcz_config; i++)
    {
       int Ncs = this->Zone_Config_Table0_3[zcz_config];
    cout<<"Mam Ncs : "<<Ncs <<" dla zcz_config: " << zcz_config<<endl; 
    int Max_Cv = this->Nzc0_3/Ncs - 1;
    cout << "Ilość preambuł dla konfuguracji: " << zcz_config<<"-tej , maxCv: "<<Max_Cv<<endl; 
    
    //ilość dodatkowych U potrzebnych do wygenerowania 64 preambuł
    int u_count = ceil(64.00/(double)Max_Cv);

    cout << "Ilość bazowych sekwencji U: "<< u_count<<" , dla konfiguracji nr: "<<zcz_config<<endl;
    
    
    return u_count;
    }
};
 

prach_info::~prach_info() 
{ 
   //cout<<"destruktor"<<endl;

} 
 