#include "Vehicle.h"

Vehicle::Vehicle(std::string type)
	:m_type(type)
{
}

Vehicle::Vehicle(const Vehicle& right)
	:m_type(right.m_type)
{
}

Vehicle& Vehicle::operator=(const Vehicle& right)
{
	m_type = right.m_type;
	return *this;
}

/////////////////////////////////
//BUS
/////////////////////////////////

Bus::Bus()
	:Vehicle("Bus")
{
}

/////////////////////////////////
//TRUCK
/////////////////////////////////

Truck::Truck()
	:Vehicle("Truck")
{
}

/////////////////////////////////
//TRUCK
/////////////////////////////////

Car::Car()
	:Vehicle("Car")
{
}