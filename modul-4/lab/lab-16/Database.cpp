#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include "Region.h"
#include "Kabupaten.h"
#include "Kota.h"

std::vector<Region*> loadFromCSV(const std::string& filename) {
    std::vector<Region*> records;
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Gagal membuka " << filename << "\n";
        return records;
    }

    std::string line;
    std::getline(file, line); // Buang baris header

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string field;
        std::vector<std::string> fields;

        while (std::getline(ss, field, ',')) {
            fields.push_back(field);
        }

        if (fields.size() < 8) continue; // Lewati baris yang rusak/tidak lengkap

        int code = std::stoi(fields[0]);
        std::string type = fields[1];
        std::string name = fields[2];
        std::string prov = fields[3];
        long pop = std::stol(fields[4]);
        double area = std::stod(fields[5]);
        double hdi = std::stod(fields[6]);
        double pov = std::stod(fields[7]);

        // Instansiasi objek turunan berdasarkan tipe
        if (type == "Kabupaten") {
            records.push_back(new Kabupaten(code, name, prov, pop, area, hdi, pov));
        } else if (type == "Kota") {
            records.push_back(new Kota(code, name, prov, pop, area, hdi, pov));
        }
    }
    
    return records;
}