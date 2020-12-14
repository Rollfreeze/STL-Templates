#include"Header.h"
#include"numbers.h"

template class numbers<int>;
template class numbers<float>;
template class numbers<double>;

template <class T>
ifstream numbers<T>::CreateFile(T trigger)
{
	srand(time(NULL));

	ofstream file(path);
	T number = rand() % 101 + (-50);

	file << number;

	for (int i = 1; i < 100; i++)
	{
		file << "\n" << number;
		number = rand() % 101 + (-50);
	}

	file.close();
	ifstream ret(path);
	return ret;
}

template <class T>
vector<T> numbers<T>::InputFile(ifstream file)
{
	T num;
	string str;
	vector<T> deq_file;
	
	while (file)
	{
		getline(file, str);
		num = stoi(str); // преобразует string to int
		deq_file.push_back(num);
	}
	return deq_file;
}

template <class T>
vector<T> numbers<T>::modify(vector<T> deq_file)
{
	T sum = 0;
	T average = 0;

	for (int i = 0; i < deq_file.size(); i++)
	{
		sum += deq_file[i];
		average += abs(deq_file[i]);
	}
	average = average / 100;

	deq_file.resize(100);
	deq_file.push_back(sum);
	deq_file.push_back(average);

	return deq_file;
}

template <class T>
void numbers<T>::get_vector(vector<T> deq_file)
{
	short int j = 1;
	for (int i = 0; i < deq_file.size(); i++)
	{
		cout << j << " index = " << deq_file[i] << '\n';
		j++;
	}
	cout << '\n';
}

template <class T>
vector<T> numbers<T>::change_vector(vector<T> deq_file)
{
	T average = 0;
	int checker = 1;

	for (int i = 0; i < deq_file.size(); i++)
	{
		average += abs(deq_file[i]);
	}
	average = average / 100;

	for (int i = 0; i < deq_file.size(); i++)
	{
		if (deq_file[i] > 0)
		{
			if (checker == 3)
			{
				deq_file[i] = average;
				checker = 0;
			}
			checker++;
		}
	}
	return deq_file;
}