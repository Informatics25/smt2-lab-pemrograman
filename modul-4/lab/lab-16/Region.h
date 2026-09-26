#ifndef REGION_H
#define REGION_H

#include <string>
#include <iostream>

class Region {
protected:
    int code;
    std::string name;
    long population;
    double area_km2;
    double hdi;
    double povertyRate;

public:
    Region(int c, const std::string& n, long pop, double area, double h, double pov)
        : code(c), name(n), population(pop), area_km2(area), hdi(h), povertyRate(pov) {}

    Region() = default; // Penting untuk polimorfisme

    // Accessors umum
    int getCode() const { return code; }
    const std::string& getName() const { return name; }
    long getPopulation() const { return population; }
    double getArea() const { return area_km2; }
    double getHDI() const { return hdi; }
    double getPovertyRate() const { return povertyRate; }
    double getDensity() const { return population / area_km2; }

    // Fungsi polimorfik -- akan di-override di kelas turunan
    virtual void displayInfo() const {
        std::cout << "[" << code << "] " << name
                  << " | Pop=" << population
                  << " | HDI=" << hdi << "\n";
    }

    // Destruktor virtual wajib untuk kelas dasar polimorfik
    virtual ~Region() = default;
};

#endif