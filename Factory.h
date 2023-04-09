#pragma once

enum class ClassTypes {
	Reserved = 0, //reserved for base class
	PenId,
	PencilId,
	PencilCaseId
};

class IType
{
public:
	virtual inline ClassTypes getType() = 0;
};

class BaseProduct : public IType
{
public:
	BaseProduct();
	virtual ~BaseProduct();
	virtual inline ClassTypes getType() override { return ClassTypes::Reserved; };
};

class Pen : public BaseProduct
{
public:
	inline ClassTypes getType() const { return ClassTypes::PenId; }
};

class Pencil : public BaseProduct
{
public:
	inline ClassTypes getType() const { return ClassTypes::PencilId; }
};

class PencilCase : public BaseProduct
{
public:
	inline ClassTypes getType() const { return ClassTypes::PencilCaseId; }
};


class Factory
{
public:
	Factory();
	~Factory();
	BaseProduct* getProduct(ClassTypes type);
private:
	BaseProduct* products[3];
};

