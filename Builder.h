#pragma once

class Detail
{
public:
	enum class ids
	{
		Wheel = 0,
		Motor1_0,
		Motor2_0,
		Body,
		Spoiler
	};
	Detail(ids _id);
private:
	ids id;
};

class Product;

class Builder //events?
{
public:
	Builder();
	Product buildGranta(int count);
	Product buildVesta(int count);
	void PayBuilder(double pay);
};

class Product
{
	friend class Builder;
	Builder builder;
public:
	enum class ids
	{
		LadaGranta = 0,
		LadaVesta,
		unknown
	};
	Product(Builder _builder);
	~Product();
	void Sell();
private:
	int countDetails;
	Detail** details;
	double cost;
	ids id;
};

