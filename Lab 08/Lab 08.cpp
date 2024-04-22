#include <fstream>
#include <string>
#include <map>
#include <queue>

char ASCIItoLower(char it) {
	if (it >= 'A' && it <= 'Z') it = it + 32;
	return it;
}

void SplitSentence(const std::string& myString, std::map<std::string, int>& myMap) {
	std::string myWord, delimiters = " .,?!";
	for (size_t i = 0; i < myString.length(); i++)
		if (delimiters.find_first_of(myString[i]) == std::string::npos)
			myWord += myString[i];
		else {
			if(myWord != "") myMap[myWord]++;
			myWord.clear();
		}
	// Handle the last word
	if (!myWord.empty()) myMap[myWord]++;
}

class Compare {
public:
	bool operator() (std::pair<std::string, int> a, const std::pair<std::string, int> b) {
		if (a.second == b.second) return a.first > b.first;
		return a.second < b.second;
	}
};

int main() {
	// Open the file
	std::ifstream myFile("input.txt");
	if (!myFile) {
		printf("Error: Cannot open this file!\n");
		return 0;
	}

	// Read the entire sentence
	std::string myString;
	if (!getline(myFile, myString)) {
		printf("Error: Cannot read this file!\n");
		return 0;
	}

	myFile.close();

	// Transform myString into lowercase
	std::transform(myString.begin(), myString.end(), myString.begin(), ASCIItoLower);

	// Split the sentence into words
	std::map<std::string, int> myMap;
	SplitSentence(myString, myMap);

	// Create a priority queue to sort the words
	std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, Compare> myPriorityQueue;
	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++)
		myPriorityQueue.push(std::pair<std::string, int>(mapIterator->first, mapIterator->second));

	/*
		for (auto it : myMap)
			myPriorityQueue.push(std::pair<std::string, int>(it.first, it.second));
	*/

	// Print the sorted words
	while (!myPriorityQueue.empty()) {
		printf("%s => %d\n", myPriorityQueue.top().first.c_str(), myPriorityQueue.top().second);
		myPriorityQueue.pop();
	}

	return 0;
}