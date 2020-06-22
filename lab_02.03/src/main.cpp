//
//  main.cpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#include "errors.h"
#include "Set.hpp"
#include "SetItem.hpp"
#include "SetIterator.hpp"


int main(int argc, const char * argv[]) {

	bool errorFlag;
	std::cout << "-------------------------------------------------------\n"
			  	 "Тестирование класса ListItem\n"
	 			 "-------------------------------------------------------\n";

	std::cout << "Тестирование конструкторов: 🌀\n";

	try {
		std::cout << "🔘 Конструктор по умолчанию 🔘\n";
		int array[] = {1, 2, 3};
		int array2[]= {4, 5, 6};
		Set<int> set1(array, 3);
		std::cout << "🔘 Конструктор с параметрами 🔘\n";
//		array
		Set<int> set2(array2, 3);
		
//		for (auto item : set1) {
//			std::cout << item ;
//		}
		
		Set<int> set3 = {1, 2, 3};
		
		set1.addSet(set2);
		set1 += set2;
	
	} catch (MemError &error) {
		errorFlag = true;
	}
	std::cout << "Тестирование конструкторов: ";
	if (errorFlag) {
		std::cout << "❎\n";
	} else {
		std::cout << "✅\n";
	};



	std::cout << "-------------------------------------------------------\n"
				 "Тестирование класса Set\n"
				 "-------------------------------------------------------\n";

	std::cout << "Проверка работы инициализаторов";
	
	return 0;
}
