class Date
{
public:
	int dag()const;				//getter
	int maand()const;			//getter
	int jaar()const;			//getter

	void setdate(int dag, int maand,int jaar);			//setter
private:
	int m_dag{16};
	int m_maand{02};
	int m_jaar{2023};	//memvar altijd private
};
