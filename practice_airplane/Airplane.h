#pragma once
#include <iostream>
#include <string>
using std::string;

enum class AirplaneType
{
	HELICOPTER,
	PRIVATE,
	CARGO,
	AIRLINER
};

class Airplane
{
private:
	AirplaneType type;
	size_t passengers;
	size_t MAX_PASSENGERS;
	static size_t counter;
public:
	Airplane() = default;
	Airplane(AirplaneType type, size_t passengers, size_t MAX_PASSENGERS);

	AirplaneType getType() const;
	size_t getPassengers() const;
	size_t getMAX_PESSENGERS() const;

	bool operator==(const Airplane& other) const;
	Airplane& operator++();
	Airplane& operator--();
	bool operator>(const Airplane& other) const;

	void print() const;

	static string TypeString(AirplaneType type);
};

inline AirplaneType Airplane::getType() const
{
	return type;
}

inline size_t Airplane::getPassengers() const
{
	return passengers;
}

inline size_t Airplane::getMAX_PESSENGERS() const
{
	return MAX_PASSENGERS;
}
