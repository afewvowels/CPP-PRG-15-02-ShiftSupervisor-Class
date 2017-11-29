//
//  ShiftSupervisor.hpp
//  CPP-PRG-15-02-ShiftSupervisor-Class
//
//  Created by Keith Smith on 11/29/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef ShiftSupervisor_hpp
#define ShiftSupervisor_hpp
#include "Employee.hpp"

#include <stdio.h>

class ShiftSupervisor : public Employee
{
private:
    double salary;
    double salaryBonus;
    double salaryTotal;
    const double bonusAmount = 1500.0;
public:
    void setSalary(double);
    void addBonus(int);
    
    double getSalary() const;
    double getSalaryBonus() const;
    double getSalaryTotal() const;
    
    ShiftSupervisor() : Employee()
    {
        
    }
};

#endif /* ShiftSupervisor_hpp */
