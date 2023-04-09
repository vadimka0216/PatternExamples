#include "Builder.h"

Product::Product(Builder _builder) :
	countDetails(0),
	details(0),
	id(ids::unknown),
	builder(_builder)
{
}

Product::~Product()
{
	for (int i = 0; i < countDetails; i++)
	{
		delete details[i];
	}
	if (details)
	{
		delete[] details;
	}
}

void Product::Sell()
{
	builder.PayBuilder(cost * 0.2);
}

Product Builder::buildGranta(int count)
{
	Product result(*this);
	result.countDetails = 6;
	result.details = new Detail*[result.countDetails];
	result.details[0] = new Detail(Detail::ids::Body);
	result.details[1] = new Detail(Detail::ids::Wheel);
	result.details[2] = new Detail(Detail::ids::Wheel);
	result.details[3] = new Detail(Detail::ids::Wheel);
	result.details[4] = new Detail(Detail::ids::Wheel);
	result.details[5] = new Detail(Detail::ids::Motor1_0);
	result.id = Product::ids::LadaGranta;
	return result;
}

Product Builder::buildVesta(int count)
{
	Product result(*this);
	result.countDetails = 7;
	result.details = new Detail * [result.countDetails];
	result.details[0] = new Detail(Detail::ids::Body);
	result.details[1] = new Detail(Detail::ids::Wheel);
	result.details[2] = new Detail(Detail::ids::Wheel);
	result.details[3] = new Detail(Detail::ids::Wheel);
	result.details[4] = new Detail(Detail::ids::Wheel);
	result.details[5] = new Detail(Detail::ids::Motor2_0);
	result.details[6] = new Detail(Detail::ids::Spoiler);
	result.id = Product::ids::LadaVesta;
	return result;
}

void Builder::PayBuilder(double pay)
{
	//pay builder...
}

Detail::Detail(ids _id)
{
	id = _id;
}
