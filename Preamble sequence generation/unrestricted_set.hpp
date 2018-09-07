/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   unrestricted_set.hpp
 * Author: ola
 *
 * Created on 3 września 2018, 22:55
 */

#ifndef UNRESTRICTED_SET_HPP
#define UNRESTRICTED_SET_HPP


#include "prach_info.hpp"


class unrestricted_set : 
  public prach_info {
public:
    unrestricted_set();
    unrestricted_set(unrestricted_set& orig);
    virtual ~unrestricted_set();
    virtual int root_sequence_count(int zcz_config) override;
private:
    int Nzc0_3=839;
    int Nzc4=139;
    //Table 5.7.2-2 for getting Ncs value
   int Zone_Config_Table0_3[16] = {0,13,15,18,22,26,32,38,46,59,76,93,119,167,279,419};
    

};



#endif /* UNRESTRICTED_SET_HPP */

