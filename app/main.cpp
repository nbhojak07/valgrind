/**
 * Copyright 2020 Nidhi Bhojak
 * @file        main.cpp
 * @author      Nidhi Bhojak 
 * @date        10/04/2020
 * @version     1.0
 *
 * @brief       Displays average reading from sensor
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
