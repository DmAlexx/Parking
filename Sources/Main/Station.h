#pragma once
#include "Vehicle.h"
#include <vector>
#include <iostream>

class Station
{
public:
	Station() = default;
	Station(const Bus& bus);
	Station(const Truck& truck);
	Station(const Car& car);
	void entryCar(int number);
	void entryBus(int number);
	void entryTruck(int number);
	void departureCar(int number);
	void departureBus(int number);
	void departureTruck(int number);

	void checkPlaces();

private:
	std::vector<Bus> m_bus;
	std::vector<Car> m_car;
	std::vector<Truck> m_truck;
};

