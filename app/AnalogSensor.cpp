/**
 * Copyright 2020 Nidhi Bhojak
 * @file        AnalogSensor.cpp
 * @author      Nidhi Bhojak 
 * @date        10/04/2020
 * @version     1.0
 *
 * @brief       Generates average reading from sensor
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate( readings->begin(), 
                readings->end(), 0.0 ) / readings->size();
    delete readings;
    return result;
}


