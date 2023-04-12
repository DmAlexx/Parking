#include <iostream>
#include "Station.h"
#include "Vehicle.h"

void menu1();
void menu2(int choose, Station& station);


int main()
{
    Station station;
    int choose = 0;

    while (1)
    {
        std::cout << "Choose menu item\n";
        menu1();
        std::cin >> choose;
        if (choose == 0)
        {
            break;
        }
        else
        {
            menu2(choose, station);
        }
    }

    return 0;
}

void menu1()
{
    std::cout << "1. Check places on the station\n";
    std::cout << "2. Entry vehicles\n";
    std::cout << "3. Departure vehicles\n";
    std::cout << "0. Exit programm\n";
}

void menu2(int choose, Station& station)
{
    
    int number = 0;
    int numberOfVehicles = 0;
    switch (choose)
    {
	case 1:
        
        station.checkPlaces();
		break;
	case 2:
        std::cout << "Choose menu item\n";
        std::cout << "1. Entry car\n";
        std::cout << "2. Entry truck\n";
        std::cout << "3. Entry bus\n";
        std::cin >> number;
        std::cout << "Enter number of vehicles\n";
        std::cin >> numberOfVehicles;
        switch (number)
        {
        case 1:
            station.entryCar(numberOfVehicles);
            break;
        case 2:
            station.entryTruck(numberOfVehicles);
            break;
        case 3:
            station.entryBus(numberOfVehicles);
            break;
        }

		break;
	case 3:
        std::cout << "Choose menu item\n";
        std::cout << "1. Departure car\n";
        std::cout << "2. Departure truck\n";
        std::cout << "3. Departure bus\n";
        std::cin >> number;
        std::cout << "Enter number of vehicles\n";
        std::cin >> numberOfVehicles;
        switch (number)
        {
        case 1:
            station.departureCar(numberOfVehicles);
            break;
        case 2:
            station.departureTruck(numberOfVehicles);
            break;
        case 3:
            station.departureBus(numberOfVehicles);
            break;
        }
		break;
    }
}
