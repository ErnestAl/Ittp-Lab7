#pragma once
#include "pugixml.hpp"
#include "Weather.h"
#include "Service.h"

class XMLService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XMLService() {};
};

