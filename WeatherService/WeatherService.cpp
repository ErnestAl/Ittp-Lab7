<<<<<<< HEAD
#include <iostream>
#include "json.hpp"
#include "Weather.h"
#include "JsonService.h"
#include "pugixml.hpp"
#include "XMLService.h"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");

	XMLService xs;
	Weather w = xs.getWeather("weather.xml");
}
=======
>>>>>>> feature-xml
