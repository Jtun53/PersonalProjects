//
//  main.cpp
//  Node
//
//  Created by Johnny on 2/7/15.
//  Copyright (c) 2015 John. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
int main() {
    LinkedList<int> *ptr =new LinkedList<int>;
    ptr->add(5);
    ptr->add(2);
    ptr->add(7);
    ptr->add(9);
	ptr->displayAll(); // EXPECTED: 5 2 7 9
    ptr->remove(2);
	std::cout<<std::endl;
    ptr->displayAll(); // EXPECTED: 5 7 9
    ptr->add(8);
	std::cout<<std::endl;
    ptr->displayAll(); // EXPECTED: 5 7 9 8
	std::cout<<std::endl;
	std::cout<<ptr->retrieve(1); // EXPECTED: 5
	std::cout<<std::endl;
	std::cout<<ptr->retrieve(4); // EXPECTED: 8
	ptr->remove(8);
	std::cout<<std::endl;
	ptr->displayAll(); // EXPECTED: 7 9 5
	ptr->remove(5);
	std::cout<<std::endl;
	ptr->displayAll(); // EXPECTED: 9 7
	
	std::cin.get();
	return 0;
}
