#include "pugixml.hpp"
#include "XMLService.h"

int main()
{
	XMLService xs;
	Weather w = xs.getWeather("weather.xml");
}

