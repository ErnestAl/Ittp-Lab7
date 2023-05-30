#include <fstream>
#include <exception>
#include "JsonService.h"

using nlohmann::json;

Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("error");

    json j = json::parse(fin);
    std::string city = j["name"].get<std::string>();
    double lon = j["coord"]["lon"].get<double>();
    double lat = j["coord"]["lat"].get<double>();
    double temperature = j["main"]["temp"].get<double>();

    std::vector<json> jWeather = j["weather"].get <std::vector<json>>();
    std::string weather = jWeather[0]["description"].get<std::string>();

    double windSpeed = j["wind"]["speed"].get<double>();
    int clouds = j["clouds"]["all"].get<int>();


    fin.close();
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
