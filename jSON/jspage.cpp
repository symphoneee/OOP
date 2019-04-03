#include "jspage.hpp"

#include <iostream>

 Jpage::jPrint(json::Value* val){

 	std::cout << val.s1 << " " << val.s2 << std::end;

 }

  Jpage::jAssign(json::Value* val){

 	std::string s1 = val.findkey("author");
 	std::string s1 = val.findkey("title");

 	std::cout << s1 << " " << s2 << std::end;

 }

void Jpage::printReddit() {

    std::cout << "Author: " << wholePage.author << std::endl;
    std::cout << "Title: " << wholePage.title << std::endl;
  }

 Jpage::Jpage(json::Value* val){

	int i = 0; 	

 	if (val[i] != wholePage.end()){

 		Reddit r;

 		json::Value* v = val[i].findkey("data");

 		val.push_back(r);
 
 	}

 	i++;
 }

