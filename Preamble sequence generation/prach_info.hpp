/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   prach_info.hpp
 * Author: ola
 *
 * Created on 4 września 2018, 09:40
 */

#ifndef PRACH_INFO_HPP
#define PRACH_INFO_HPP

class prach_info
{
public:
    /**
    * calculate number of root sequences
    * @param zcz_config zero autocorrelation zone config
    * @return number of root sequences in a given zcz_config needed to represent 64 preambles
    */
    virtual int root_sequence_count(int zcz_config) = 0; 
    /**
    * calculate number of preambles on a root sequence
    * @param zcz_config zero autocorrelation zone config
    * @return number of cyclic shifts per root sequence in a given zcz_config
    */
    //virtual int preambles_on_root_sequence(int zcz_config) = 0;
    /**
    * calculate zero based root sequence index on which the preamble resides
    * @param zcz_config zero autocorrelation zone config
    * @return root sequence index
    */
    //virtual int root_sequence_index(int preamble_index, int zcz_config) = 0;
    virtual ~prach_info();
};

//zcz_config - zero correlation zone config
//preamble_index - zero based preamble index (0-63)

#endif /* PRACH_INFO_HPP */


