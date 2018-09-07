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
#include <stdint.h>

class unrestricted_set :
public prach_info 
{
public:
    unrestricted_set();
    unrestricted_set(unrestricted_set& orig);
    virtual ~unrestricted_set();
    virtual int32_t root_sequence_count(int32_t zcz_config) override;
    virtual int32_t preambles_on_root_sequence(int32_t zcz_config) override;
    virtual int32_t root_sequence_index(int32_t preamble_index, int32_t zcz_config) override; 
private:
    int32_t nzc0_3 = 839;
    int32_t nzc4 = 139;
    int32_t zone_config_table0_3[16] = {0, 13, 15, 18, 22, 26, 32, 38, 46, 59, 76, 93, 119, 167, 279, 419};
    int32_t zone_config_table4[7] = {2, 4, 6, 8, 10, 12, 15};

};



#endif /* UNRESTRICTED_SET_HPP */

