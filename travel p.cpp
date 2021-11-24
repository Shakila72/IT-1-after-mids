#include<iostream>
#include<string>
using namespace std;
struct bus
{
	string location;
	string location2;
	int year;
	int date;
	int month;
	int exit;

};
bus inputdata(void);
void displaydata(bus data);
int main()
{	bus b;
	b=inputdata();
	displaydata(b);
	system("pause");
 
}
bus inputdata(void)
 {
 	cout << "\n\t\t\t\t************************************";
    cout << "\n\t\t\t\t* ==>   Welcome to Bookme          *";
    cout << "\n\t\t\t\t*       a.Islamabad/Rawalpindi     *";
    cout << "\n\t\t\t\t*       b.Lahore                   *";
    cout << "\n\t\t\t\t*       c.Karachi                  *";
    cout << "\n\t\t\t\t*       d.Quetta                   *";
    cout << "\n\t\t\t\t*       e.Peshawar                 *";
    cout << "\n\t\t\t\t************************************";
    cout << "\n\n";
	bus data;
	char s;
	cout << "\t\tEnter Bus e.g B for billal travels, D for Daewoo and A for Ali Express : ";
	cin >> s;
	cout << "\tEnter your starting location I for Islamabad/Rawalpindi ,L for lahore, K for Karachi , Q for Quetta and P for Peshawar : ";
	getline(cin, data.location);
	cin.ignore();
	cout << "\tEnter your Drop location I for Islamabad/Rawalpindi ,L for lahore, K for Karachi , Q for Quetta and P for Peshawar : ";
	getline(cin, data.location2);
	cin.ignore();

	cout << "\t\t\tEnter your date : " ;
	cin >> data.date;
	cout << "\t\t\tEnter your month : ";
	cin >> data.month;
	cout << "\t\t\tEnter your year : ";
	cin >> data.year;
	while ((data.date <= 10) && (data.month <= 8) && (data.year <= 2020))
	{
		cout << "\t\t\tinvalid date" <<endl;
		cout << "\t\t\tenter valid date : " ;
		cout << "\t\t\tEnter your date :" ;
		cin >> data.date;
		cout << "\t\t\tEnter your month : ";
		cin >> data.month;
		cout << "\t\t\tEnter your year : " ;
		cin >> data.year;

	};

	return data;
 }
void displaydata(bus data)
{
	cout << "\t\t\t\**Display information*" << endl;
	cout << "\t\t\tstarting location" << data.location << endl;
	cout << "\t\t\tEnding location" << data.location2 << endl;
	cout << "\t\t\tDate : " << data.date << "\n\t\t\tMonth : " << data.month << "\n\t\t\tYear :" << data.year << endl;

}
