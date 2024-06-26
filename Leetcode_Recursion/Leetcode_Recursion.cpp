#include "Leetcode_Recursion.h"

static std::vector<char> stringToVector(std::string str) {
	std::vector<char> vChar{};
	for (char c : str) {
		vChar.push_back(c);
	}
	return vChar;
}

static std::string vectorToString(std::vector<char> vector) {
	std::string str = "";
	for (char c : vector) {
		str += c;
	}
	return str;
}

static void reverseString(std::vector<char>& vector) {
	for (int i = 0; i <= (vector.size() - 1) / 2; i++) {
		char left = vector[i];
		vector[i] = vector[(vector.size() - 1) - i];
		vector[(vector.size() - 1) - i] = left;
	}
}

int main()
{
	auto message = stringToVector("12345");
	std::cout << "Original: " << vectorToString(message) << std::endl;
	reverseString(message);
	std::cout << "Reversed: " << vectorToString(message) << std::endl;


	return 0;
}