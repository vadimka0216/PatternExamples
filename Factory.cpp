#include "Factory.h"

Factory::Factory()
{
	products[0] = new Pen();
	products[1] = new Pencil();
	products[2] = new PencilCase();
}

Factory::~Factory()
{
	for (int i = 0; i < sizeof products / sizeof(BaseProduct*); i++)
	{
		delete products[i];
	}
}

BaseProduct* Factory::getProduct(ClassTypes type)
{
	BaseProduct* result = nullptr;
	for (int i = 0; i < sizeof products / sizeof(BaseProduct*); i++)
	{
		if (products[i]->getType() == type)
		{
			result = products[i];
			break;
		}
	}
	return result;
}

BaseProduct::BaseProduct()
{
}

BaseProduct::~BaseProduct()
{
}
