#include "Header.h"

Date::Date(int dag, int maand, int jaar) : m_dag{dag}, m_maand{maand}, m_jaar{jaar}
{
	//constructor
}
int Date::dag() const
{
	return m_dag;
}

int Date::maand() const
{
	return m_maand;
}

int Date::jaar() const
{
	return m_jaar;
}

void Date::setdate(int dag, int maand, int jaar)
{
	m_dag = dag;	m_maand = maand;	m_jaar = jaar;
}
