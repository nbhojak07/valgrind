/**
 * Copyright 2020 Nidhi Bhojak
 * @file        AnalogSensor.hpp
 * @author      Nidhi Bhojak 
 * @date        10/04/2020
 * @version     1.0
 *
 * @brief       Header file for Analog sensor library
 */

#pragma once

#include <iostream>

class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
private:
    unsigned int mSamples;
};
