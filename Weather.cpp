#include "Weather.h"
Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {

    this->city = city;
    this->lon = lon;
    this->lat = lat;
    this->temperature = temperature;
    this->weather = weather;
    this->windSpeed = windSpeed;
    this->clouds = clouds;

}

void Weather::getData() {

    cout << city << ": lon(" << lon << "), lat(" << lat << "), t(" << temperature << "), weather(" << weather << "), wind speed(" << windSpeed << "), clouds(" << clouds << ")\n";

}

std::ostream& operator<<(std::ostream& out, Weather weatherrr)
{
    out << weatherrr.city << ": \nlon(" << weatherrr.lon << "); \nlat(" << weatherrr.lat << "); \nt(" << weatherrr.temperature << "); \nweather(" << weatherrr.weather << "); \nwind speed(" << weatherrr.windSpeed << "); \nclouds(" << weatherrr.clouds << ")\n";
    return out;
}