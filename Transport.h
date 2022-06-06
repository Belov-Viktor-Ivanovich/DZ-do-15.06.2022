#pragma once
class Transport
{
protected:
	string name;
public:
	Transport(string name)
	{
		this->name = name;
	}
	virtual void transportation() = 0;
};

class Ship :public Transport
{
public:
	Ship(string name) :Transport(name) {

	}
	void transportation()
	{
		cout <<name<<" : "<<endl << "»дЄт по волнам"<<endl<<endl;
	}	
};
class Train :public Transport
{
public:
	Train(string name) :Transport(name) {
	}
	void transportation()
	{
		cout <<name<<" : "<<endl << "≈дет по рельсам"<<endl<<endl;
	}
};
class Plane :public Transport
{
public:
	Plane(string name) :Transport(name) {

	}
	void transportation()
	{
		cout <<name<<" : "<<endl << "Ћетает и едет"<<endl<<endl;
	}
};