#include "Date.h"

int Date::dag()
{
	return m_dag;
}


int Date::maand()
{
	return m_maand;
}

int Date::jaar()
{
	return m_jaar;
}

void Date::setdate(int dag, int maand, int jaar)
{
	m_dag = dag;	m_maand = maand;	m_jaar = jaar;
}
