#pragma once

#include "json.hpp"

#include <vector>

struct Reddit {

	std::string Author;
	std::string Title;

};

struct Jpage {

	std::vector<Reddit> wholePage;

	Reddit(json::Value* val);

	void printReddit();

};