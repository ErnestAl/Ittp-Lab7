#include <iostream>
#include "json.hpp"
#include "Weather.h"
#include "JsonService.h"

int main()
{
	JsonService js;

	Weather w = js.getWeather("weather.json");
}