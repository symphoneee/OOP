#include "jspage.hpp"

#include <iostream>

void Jpage::printReddit() {

    std::cout << "Author: " << wholePage.author << std::endl;
    std::cout << "Title: " << wholePage.title << std::endl;
  }

 Jpage::Jpage(json::Value* val){

int i = 0;

 	if (val[i] != wholePage.end()){

 		Reddit r;

 		json::Value* userPostData = val[i].findkey("data");

 		val.push_back(r);

 		i++;
 		
 	}
 }