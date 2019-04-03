#include "jspage.hpp"

#include <iostream>
#include <vector>

 Jpage::jPrint(json::Value* val){

 	std::cout << val.s1 << " " << val.s2 << std::end;

 }

  Jpage::jAssign(json::Value* val){

 	std::string s1 = val.findkey("Author");
 	std::string s1 = val.findkey("Title");

 	std::cout << s1 << " " << s2 << std::end;

 }

void Jpage::printReddit() {

    std::cout << "Author: " << wholePage.author << std::endl;
    std::cout << "Title: " << wholePage.title << std::endl;
  }

 Jpage::Jpage(json::Value* val){

	int i = 0; 	

	std::vector<json::Value* Author> Authors;
	std::vector<json::Value* Title> Titles;

 	if (val[i] != wholePage.end()){

 		json::Value* a = val[i].findkey("Author");
 		json::Value* t = val[i].findkey("Title");

 		val.push_back(Authors);
 		val.push_back(Titles);
 
 	}

 	i++;
 }

