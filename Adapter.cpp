#include "Adapter.h"

Adapter::Adapter(Router _switch)
{
	translater = _switch;
}

void Adapter::Switching()
{
	translater.Routing();
}

void Router::Routing()
{
}

void Switch::Switching()
{
}
