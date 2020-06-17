//
//  IContainer.h
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#ifndef IContainer_h
#define IContainer_h

class IContainer {
	
public:
	virtual void clear() = 0;
	virtual bool isEmpty() = 0;
	virtual size_t getSize() = 0;
};

#endif /* IContainer_h */
