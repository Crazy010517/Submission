#include <iostream>

#include "pid.hpp"


int main()
{
    double desiredHeight;

    while(true){
   	 std::cout << "Desired Height: ";
  	 std::cin >> desiredHeight;
	 setThrust((desiredHeight - getHeight())*kp*ki*kd);
    }
}
