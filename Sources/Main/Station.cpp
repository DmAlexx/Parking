#include "Station.h"

Station::Station(const Bus& bus)
{
	if (m_bus.size() > 8)
	{
		std::cout << "There are no place for Bus\n";
	}
	else
	{
		m_bus.push_back(bus);
	}
}

Station::Station(const Truck& truck)
{
	if (m_truck.size() > 8)
	{
		std::cout << "There are no place for Truck\n";
	}
	else
	{
		m_truck.push_back(truck);
	}
}

Station::Station(const Car& car)
{
	if (m_truck.size() > 32)
	{
		std::cout << "There are no place for Car\n";
	}
	else
	{
		m_car.push_back(car);
	}
}

void Station::entryCar(int number)
{
	Car car;
	if (m_car.size() + number <= 32)
	{
		for (int i = 0; i < number; ++i)
		{
			m_car.push_back(car);
		}
	}
	else
	{
		std::cout << "Max numbers of cars on the station is 32\n";
	}
}

void Station::entryBus(int number)
{
	Bus bus;
	if (m_bus.size() + number <= 8)
	{
		for (int i = 0; i < number; ++i)
		{
			m_bus.push_back(bus);
		}
	}
	else
	{
		std::cout << "Max numbers of buses on the station is 8\n";
	}
}

void Station::entryTruck(int number)
{
	Truck truck;
	if (m_truck.size() + number <= 8)
	{
		for (int i = 0; i < number; ++i)
		{
			m_truck.push_back(truck);
		}
	}
	else
	{
		std::cout << "Max numbers of trucks on the station is 8\n";
	}
}

void Station::checkPlaces()
{
	std::cout << "There are " << m_bus.size() << " buses on station; " << "Free places for buses " << 8 - m_bus.size() << std::endl;
	std::cout << "There are " << m_truck.size() << " trucks on station; " << "Free places for trucks " << 8 - m_truck.size() << std::endl;
	std::cout << "There are " << m_car.size() << " cars on station; " << "Free places for cars " << 32 - m_car.size() << std::endl;
	std::cout << "There are " << m_bus.size() + m_car.size() + m_truck.size() << " occupied places on the station and " << 48 - m_bus.size() + m_car.size() + m_truck.size() << " free\n";
}

void Station::departureCar(int number)
{
	if (m_car.size() >= number)
	{
		for (int i = 0; i < number; ++i)
		{
			m_car.pop_back();
		}
		std::cout << "Cars departured\n";
	}
	else
	{
		std::cout << "There are no cars on the station\n";
	}
}

void Station::departureBus(int number)
{
	if (m_bus.size() >= number)
	{
		for (int i = 0; i < number; ++i)
		{
			m_bus.pop_back();
		}
		std::cout << "Buses departured\n";
	}
	else
	{
		std::cout << "There are no buses on the station\n";
	}
}

void Station::departureTruck(int number)
{
	if (m_truck.size() >= number)
	{
		for (int i = 0; i < number; ++i)
		{
			m_truck.pop_back();
		}
		std::cout << "Trucks departured\n";
	}
	else
	{
		std::cout << "There are no trucks on the station\n";
	}
}
