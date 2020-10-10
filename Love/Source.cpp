#include<iostream>
#include<string>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	string first;
	string second;
	while (first != "stop")
	{
		std::cout << "Enter the girl's name:" << endl;
		cin >> first;
		std::cout << endl << "Enter the boy's name:" << endl;
		cin >> second;
		std::cout << endl << first << " and " << second << " love each other!" << endl << endl;
		string baby = first.substr(0, 3) + second.substr(second.length() - 3, 3);
		std::cout << "Their child will be named " << baby << endl;
		int years = first.length() + second.length();
		std::cout << "They will be happy for " << years << " years!" << endl;
		string status;
		if (first.length() < second.length())
		{
			status = "divorce";
		}
		else if (first.length() > second.length())
		{
			status = "happiness";
		}
		else
		{
			status = "a sad union for the kids";
		}
		std::cout << "Their marriage will then end in " << status << endl;
		int kids = rand() % 10;
		std::cout << "They will have " << kids << " kids" << endl;
		string person;
		if (rand() % 2 == 0)
		{
			person = first;
		}
		else
		{
			person = second;
		}
		string end;
		if (rand() % 2 == 1)
		{
			end = "success";
		}
		else
		{
			end = "demise";
		}
		std::cout << person << " will cause the " << end << " of their marriage" << endl << endl;
	}
	system("pause");
	return 0;
}