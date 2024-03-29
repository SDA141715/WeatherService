#include "JsonService.h"


Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    fin >> j;

    std::string city = j["name"].get<string>();
    double lon = j["coord"]["lon"].get<double>(); // 49.6601
    double lat = j["coord"]["lat"].get<double>(); // 58.5966
    double temperature = j["main"]["temp"].get<double>(); // 5.69
    std::string weather = j["weather"].get<vector<json>>()[0]["main"].get<string>(); // �����
    double windSpeed = j["wind"]["speed"].get<double>(); // 4.27
    int clouds = j["clouds"]["all"].get<int>(); // 100

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);

}