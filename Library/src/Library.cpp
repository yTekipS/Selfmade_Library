#include "library.hpp"
#include <vector>
#include <iostream>
#include <fstream>

namespace QoL {

	std::vector<std::string> ReadFromFile(std::string path) {

		std::ifstream file(path);
		std::string line;
		std::vector <std::string> lines;
		if (file) {
			while (file >> line) {
				lines.emplace_back(line);
			}
			return lines;
		}
		else return lines;
	}
}