//
//  Employee.cpp
//  CPP-PRG-15-02-ShiftSupervisor-Class
//
//  Created by Keith Smith on 11/29/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee()
{
    
}

void Employee::setEmployeeName(std::string strName)
{
    strEmployeeName = strName;
}

void Employee::setEmployeeNumber(int intNum)
{
    intEmployeeNumber = intNum;
}

void Employee::setHireDate(std::string strDate)
{
    strHireDate = strDate;
}

std::string Employee::getEmployeeName() const
{
    return strEmployeeName;
}

int Employee::getEmployeeNumber() const
{
    return intEmployeeNumber;
}

std::string Employee::getHireDate() const
{
    return strHireDate;
}
