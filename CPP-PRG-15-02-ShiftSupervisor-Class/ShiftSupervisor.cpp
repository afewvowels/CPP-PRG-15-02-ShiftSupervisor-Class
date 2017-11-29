//
//  ShiftSupervisor.cpp
//  CPP-PRG-15-02-ShiftSupervisor-Class
//
//  Created by Keith Smith on 11/29/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "ShiftSupervisor.hpp"

//ShiftSupervisor::ShiftSupervisor() : Employee()
//{
//
//}

void ShiftSupervisor::setSalary(double sal)
{
    salary = sal;
}

void ShiftSupervisor::addBonus(int multiplier)
{
    salaryBonus += multiplier * bonusAmount;
}

double ShiftSupervisor::getSalary() const
{
    return salary;
}

double ShiftSupervisor::getSalaryBonus() const
{
    return salaryBonus;
}

double ShiftSupervisor::getSalaryTotal() const
{
    return salaryBonus + salary;
}
