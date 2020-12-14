#pragma once
#include"Header.h"
#include"menu.h"

template <class T>
class numbers
{
private:
	string path;
public:
	numbers()
	{
		path = "input.txt";
	}

	ifstream CreateFile(T);
	vector<T> InputFile(ifstream);
	vector<T> modify(vector<T>);
	void get_vector(vector<T>);
	vector<T> change_vector(vector<T>);
};

