#include <iostream>
#include <string>
using namespace std;


struct IPrint
{
	virtual void PrintConsole() = 0;
};

class Transport : public IPrint
{
protected:
	string model;
	double price;
public:
	Transport() { price = 0; }
	Transport(string m, double p) { model = m, price = p; }
};


class Car : public Transport
{
	string wheel;
	string oil;
	string color;
public:
	Car() {}
	Car(string w, string o, string c)
	{
		wheel = w;
		oil = o;
		color = c;
	}
	virtual void PrintConsole()
	{
		cout << "Model: " << model << "Price: " << price << "Wheels: " << wheel << "Oil: " << oil << "Color: " << color << endl;
	}
};


class Airplane : public Transport
{
	string oil;
	int pass;
	int year;
public:
	Airplane() { pass = 0, year = 0; }
	Airplane(string o, int p, int y)
	{
		oil = o;
		pass = p;
		year = y;
	}
	virtual void PrintConsole()
	{
		cout << "Model: " << model << "Price: " << price << "Oil: " << oil << "Pass: " << pass << "Year: " << year << endl;
	}
};




class Animal : public IPrint
{
protected:
	string name;
	int weight;
	int age;
public:
	Animal() { weight = 0, age = 0; }
	Animal(string n, int w, int a) { name = n, weight = w, age = a; }
};


class Penguin : public Animal
{
	string color;
	string wing;
public:
	Penguin() {}
	Penguin(string c, string w)
	{
		color = c;
		wing = w;
	}
	virtual void PrintColnsole()
	{
		cout << "Name: " << name << "Weight: " << weight << "Age: " << age << "Color: " << color << "Wings: " << wing << endl;
	}
};



class Dog : public Animal
{
	string size;
	string wool;
public:
	Dog() {}
	Dog(string s, string w)
	{
		size = s;
		wool = w;
	}
	virtual void PrintColnsole()
	{
		cout << "Name: " << name << "Weight: " << weight << "Age: " << age << "Size: " << size << "Wool: " << endl;
	}
};





int main()
{
	IPrint* car = new Car("Porsche", 200.000, "4 wheels", "Gas", "Black");
	car->PrintConsole();

	IPrint* airplane = new Airplane("F-16", 2000.000, "JP-8", 1, 970);
	airplane->PrintConsole();

	IPrint* penguin = new Penguin("Imperial", 40, 5, "Black", "Inflexible fins");
	penguin->PrintConsole();

	IPrint* dog = new Dog("Spitz", 10, 2, "Small", "Fluffy");
	dog->PrintConsole();
}