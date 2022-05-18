#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Proprietar {
	static Proprietar* instance;
	string nume;
	Proprietar() {
		nume = "rares";
	}
public:
	void set(string nume);
	string get();
	static Proprietar* get_instance();
};

void Proprietar::set(string nume) {
	this->nume = nume;
}

string Proprietar::get() {
	return this->nume;
}

Proprietar* Proprietar::get_instance() {
	if (!instance)
		instance = new Proprietar;
	return instance;
}


Proprietar* Proprietar::instance = 0;

class Animal {
public:
	virtual string animal() = 0;
	virtual int pret() = 0;
};


class Catel: public Animal {
public:
	string animal() {
		return "catel";
	}
	int pret() {
		return 500;
	}
};

class Pisica : public Animal {
public:
	string animal() {
		return "pisica";
	}
	int pret() {
		return 300;
	}
};

class Maimuta :public Animal {
public:
	string animal() {
		return "maimuta";
	}
	int pret() {
		return 1500;
	}
};

class Leu : public Animal {
public:
	string animal() {
		return "leu";
	}
	int pret() {
		return 3000;
	}
};



class Factory {
public:
	virtual Animal* mic() = 0;
	virtual Animal* mare() = 0;

};

class Salbatic : public Factory {
public:
	Animal* mic();
	Animal* mare();
};

Animal* Salbatic::mic() {
	return new Maimuta;
}

Animal* Salbatic::mare() {
	return new Leu;
}

class Domestic :public Factory {
public:
	Animal* mic();
	Animal* mare();

};

Animal* Domestic::mare() {
	return new Catel;
}

Animal* Domestic::mic() {
	return new Pisica;
}


template<typename T> class Array {
	vector<T> v;
public:
	Array(vector<T>v);
	void crescator();
	void descrescator();
	void print();
};

template <typename T> Array<T>::Array(vector<T> a) {
	v = a;
}

template <typename T> void Array<T>::crescator() {
	for (int i = 0; i < v.size() - 1; i++)
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] < v[i])
				swap(v[j], v[i]);
}

template <typename T> void Array<T>::descrescator() {
	for (int i = 0; i < v.size() - 1; i++)
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] > v[i])
				swap(v[j], v[i]);
}

template <typename T> void Array<T>::print() {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

int main() {
	Proprietar *prop= prop->get_instance();
	cout << prop->get(); cout << "\n";
	prop->set("mihai");
	cout << prop->get(); cout << "\n";
	Factory* Factory1,* Factory2;
	Factory1 = new Salbatic;
	Factory2 = new Domestic;
	Animal* a1, * a2, * a3, * a4;
	a1 = Factory1->mare();
	a2 = Factory1->mic();
	a3 = Factory2->mic();
	a4 = Factory2->mare();
	vector<string>animal;
	vector<int>pret;
	animal.push_back(a1->animal());
	animal.push_back(a2->animal());
	animal.push_back(a3->animal());
	animal.push_back(a4->animal());
	pret.push_back(a1->pret());
	pret.push_back(a2->pret());
	pret.push_back(a3->pret());
	pret.push_back(a4->pret());
	

	Array<string> a(animal);
	Array<int> p(pret);
	a.crescator();
	a.print();
	cout << "\n";
	a.descrescator();
	a.print();
	cout << "\n";
	p.crescator();
	p.print(); 
	cout << "\n";
	p.descrescator();
	p.print();
}