#pragma once
class Switch //old format
{
public:
	virtual void Switching();
};

class Router //new format
{
public:
	virtual void Routing();
};

class Adapter: public Switch //new switch for communication with router
{
	Router translater;
public:
	Adapter(Router _switch);
	void Switching() override;
};

