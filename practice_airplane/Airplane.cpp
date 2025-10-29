#include "Airplane.h"
using std::cout;
using std::endl;

size_t Airplane::counter = 0;

Airplane::Airplane(AirplaneType type, size_t passengers, size_t MAX_PASSENGERS)
{
	this->type = type;
	this->passengers = passengers;
	this->MAX_PASSENGERS = MAX_PASSENGERS;
}

bool Airplane::operator==(const Airplane& other) const
{
	return this->type == other.type;
}

Airplane& Airplane::operator++()
{
	if (passengers < MAX_PASSENGERS)
		++passengers;
	return *this;
}

Airplane& Airplane::operator--()
{
	if (passengers > 0)
		--passengers;
	return *this;
}

bool Airplane::operator>(const Airplane& other) const
{
	return this->MAX_PASSENGERS > other.MAX_PASSENGERS;
}

void Airplane::print() const
{
	cout << "Plane #" << ++counter << endl;
	cout << "Type            :: " << TypeString(type) << endl;
	cout << "Passengers      :: " << passengers << endl;
	cout << "Max passengers  :: " << MAX_PASSENGERS << endl;
}

string Airplane::TypeString(AirplaneType type)
{
	switch (type)
	{
	case AirplaneType::AIRLINER: return "Airliner";
	case AirplaneType::CARGO: return "Cargo";
	case AirplaneType::HELICOPTER: return "Helicopter";
	case AirplaneType::PRIVATE: return "Private";
	}
}
