#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double calculation;
	if (hours <= 40)
	{
		calculation = hours * hourly_rate;
	}
	else
	{
		calculation = hourly_rate * 40;
		calculation = calculation + ((hours - 40) * (hourly_rate * 1.5));
	}
	return calculation;
}
