#pragma once
#include<string>

class Vehicle
{
public:
	Vehicle(std::string type);
	Vehicle(const Vehicle& right);
	Vehicle& operator=(const Vehicle& right);
	virtual std::string getTypeVehicle() = 0;
protected:
	std::string m_type;
};

class Bus :public Vehicle
{
public:
	Bus();
	std::string getTypeVehicle() override { return m_type; }
};

class Truck : public Vehicle
{
public:
	Truck();
	std::string getTypeVehicle() override { return m_type; }
};

class Car :public Vehicle
{
public:
	Car();
	std::string getTypeVehicle() override { return m_type; }
};