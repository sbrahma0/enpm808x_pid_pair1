/*!
 *  @brief File including the class definition and stub
 *  @file   Header file - main.cpp
 *  @author part2: Achal Pragneshkumar Vyas(driver) Vamshi Kumar Bogoju(navigator)
 *  @copyright  Achal Pragneshkumar Vyas and Vamshi Kumar Bogoju
 *  
 */

#include <iostream>
#include "../include/pid_controller.hpp"
/**
 * @brief The main function
 */
int main() {
    double kp, ki, kd, dt, setValue, currentValue;
    std::cout << "Enter the kp, ki, kd parameters with spaces in "
"between- "<< std::endl;  // Initialize all the parameters by user
    std::cin >>  kp >> ki >> kd;
    std::cout << "Enter the time in ( non-negative)- " << std::endl;
    std::cin >> dt;  // Initialize dt
    std::cout << "Enter the set value- " << std::endl;
    std::cin >> setValue;  // Initialize the set value
    std::cout << "Enter the current value for trial- " << std::endl;
    std::cin >> currentValue;  // Initialize the current speed


    pidController pid(kp, ki, kd, dt);  // Object creation named pid
    double nv = pid.compute(setValue, currentValue);
    // new value from the function
    std::cout << "The new value is- " << nv << std::endl;
    // printing the new value
    return 0;
}
