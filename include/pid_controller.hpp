/*!
 *  \brief 		File including the class definition for stub implementation
 *  \file  		Header file - pid_controller
 *  \author 	part1: Sayan Brahma(driver) Akwashi a Obeng(navigator)
 *  \copyright  Sayan Brahma and Akwashi a Obeng
 *  \
 */


#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

class pidController {
	/**
	 *	@brief contains the private data members
	 */
 private:
    double kp = 0.0, ki = 0.0, kd = 0.0, dt = 1.0;  // default values
	/**
	 *	@brief contains all the public methods/functions
	 */
 public:
	/**
	 *	@brief constructor to initialize the default values
	 */
    pidController();
	/**
	 * @brief constructor to initialize the user input values
	 * @param kp proportional constant
	 * @param ki integral constant
	 * @param kd differentiation constant
	 * @param dt differential time
	 */
    pidController(double kp, double ki, double kd, double dt);
	/**
	 * @brief A destructor which is called after the constructor has been used
	 */
    ~pidController();
	/**
	 * @brief This function calculates the error and new velocity based on the setvalue and the current velocity
	 */
    double compute(double setValue, double currentValue);
};

#endif  // INCLUDE_PID_CONTROLLER_HPP_

