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
    virtual int32_t root_sequence_count(int32_t zcz_config) override;
private:

};



#endif /* UNRESTRICTED_SET_HPP */

