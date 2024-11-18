#include <iostream>
#include <fstream>
#include <string>

void	replaceOccurence(std::string &str, const std::string &from, const std::string &to) {
	if (from.empty())
		return;
	size_t	pos = 0;
	while ((pos = str.find(from, pos)) != std::string::npos) {
		str.erase(pos, from.length());
		str.insert(pos, to);
		pos += to.length();
	}
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return (1);
	}
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be an empty string.\n";
		return (1);
	}

	std::ifstream	inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open input file '" << filename << "'.\n";
		return (1);
	}

	std::ofstream	outputFile(filename + ".replace");
	if (!outputFile.is_open()) {
		std::cerr << "Error: Could not create output file '" << filename << ".replace'.\n";
		inputFile.close();
		return (1);
	}

	std::string	line;
	while (std::getline(inputFile, line)) {
		replaceOccurence(line, s1, s2);
		outputFile << line;
		if (!inputFile.eof())
			outputFile << '\n';
	}

	inputFile.close();
	outputFile.close();

	return (0);
}