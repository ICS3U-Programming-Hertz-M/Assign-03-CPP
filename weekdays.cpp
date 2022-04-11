// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// Created on: Apr 1st, 2022
// This is a programs compares the user number to the 7 days of the week

#include <iostream>

int main() {
  // declare variable
  int userWeekDays;
  // ask the user for a month number
  std::cout << "Enter a number reprisenting a day of the week:";
  std::cin >>  userWeekDays;

  // state the month selected as a string
  switch (userWeekDays) {
    case 1 :
    std::cout << userWeekDays << " \033[1;32;38mrepresents monday.\n";
    break;

    case 2 :
    std::cout <<   userWeekDays << " \033[1;32;38mrepresents tuesday.\n";
    break;

    case 3 :
    std::cout <<  userWeekDays<< " \033[1;32;38mrepresents wednesday.\n";
    break;

    case 4 :
    std::cout <<   userWeekDays << " \033[1;32;38mrepresents Thursday\n";
    break;

    case 5 :
    std::cout <<   userWeekDays<< " \033[1;32;38mrepresents friday.\n";
    break;

    case 6 :
    std::cout <<  userWeekDays << " \033[1;32;38mrepresents suturday.\n";
    break;

    case 7 :
    std::cout <<  userWeekDays << " \033[1;32;38mrepresents sunday.\n";
    break;

    // handle the error case
    default :
    std::cout << "\033[1;33mError, " <<  userWeekDays;
    << " is not a day of the week number.\n";
    }
}
