class Date
{
public:
	Date(int dag, int maand, int jaar);		//constructor

	int dag() const;
	int maand() const;
	int jaar() const;

	void setdate(int dag, int maand, int jaar);			
private:
	int m_dag{};
	int m_maand{};
	int m_jaar{};	
};
