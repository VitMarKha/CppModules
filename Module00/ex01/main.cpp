#include <iomanip>
#include "Phonebook_class.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::setw;
using std::noskipws;

static	int	set_info(Contact& contact) {
	string text;

	cout << "Please enter first name: ";
	getline(cin, text);
	if (cin.eof())
		return 1;
	contact.SetFirstName(text);
	cout << "Please enter last name: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetLastName(text);
	cout << "Please enter nickname: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetNickname(text);
	cout << "Please enter login: ";
	getline(cin, text);
	if (cin.eof())
		return 1;
	contact.SetLogin(text);
	cout << "Please enter postal address: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetPostalAddress(text);
	cout << "Please enter email address: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetAddress(text);
	cout << "Please enter phone number: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetPhoneNumber(text);
	cout << "Please enter birthday date: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetBirthdayDate(text);
	cout << "Please enter favorite meal: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetFavoriteMeal(text);
	cout << "Please enter underwear color: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetUnderwearColor(text);
	cout << "Please enter darkest secret: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.SetDarkestSecret(text);
	return 0;
}

static void print_contact(const Phonebook& phonebook, const int& id_search) {
    cout << "Contact information with id " << id_search << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << phonebook.GetContact(id_search).GetFirstName() << endl;
    cout << phonebook.GetContact(id_search).GetLastName() << endl;
    cout << phonebook.GetContact(id_search).GetNickname() << endl;
    cout << phonebook.GetContact(id_search).GetLogin() << endl;
    cout << phonebook.GetContact(id_search).GetPostalAddress();
    cout << phonebook.GetContact(id_search).GetEmail() << endl;
    cout << phonebook.GetContact(id_search).GetAddress() << endl;
    cout << phonebook.GetContact(id_search).GetPhoneNumber() << endl;
    cout << phonebook.GetContact(id_search).GetBirthdayDate() << endl;
    cout << phonebook.GetContact(id_search).GetFavoriteMeal() << endl;
    cout << phonebook.GetContact(id_search).GetUnderwearColor() << endl;
    cout << phonebook.GetContact(id_search).GetDarkestSecret() << endl;
    cout << "+-------------------------------------------+" << endl;
}

static string sub_str(const string& str) {
	string result;

	if (str.length() < 10)
		return str;
	else
		result = str.substr(0, 9);
	return result + '.';
}

static void print_table(const Phonebook& phonebook, const int& id, int& i) {
    cout << "+-------------------------------------------+" << endl;
    cout << "|" << "   index  " << "|"  << "first name"
         << "|"  << " last name" << "|" << " nickname " << "|" << endl;
    while (++i < (id + 1)) {
        cout << "+-------------------------------------------+" << endl;
        cout << "|" << setw(10) << i << "|" << setw(10)
             << sub_str(phonebook.GetContact(i).GetFirstName()) << "|"
             << setw(10) << sub_str(phonebook.GetContact(i).GetLastName())
             << "|" << setw(10) << sub_str(phonebook.GetContact(i).GetNickname()) << "|" << endl;
    }
    cout << "+-------------------------------------------+" << endl;
    cout << "Enter the subscriber ID: ";
}

int main() {
	Phonebook phonebook;
    Contact contact;
    string command;
    int id;
    int id_search;
    int i;

    id = -1;
    cout << "+----+-------------------+----+" << endl;
    cout << "|----|--Phonebook fngoc--|----|" << endl;
    cout << "+----+-------------------+----+" << endl;
    while (true) {
		cout << "Enter the command: ";
		getline(cin, command);
		if (cin.eof())
			break ;
		if (command == "EXIT")
			break ;
		else if (command == "ADD") {
		    if (id >= 7) {
                cout << "Table is full!" << endl;
                continue ;
            }
			if (set_info(contact))
				break ;
			id += 1;
			phonebook.SetContact(contact, id);
		} else if (command == "SEARCH") {
			if (id != -1)
				i = -1;
			else {
				cout << "The table is empty" << endl;
				continue ;
			}
            print_table(phonebook, id, i);
			cin >> noskipws >> id_search;
			if (cin.fail() || id_search < 0 || id_search >= 8 || id_search > id) {
				cin.clear();
				cout << "This is not an ID!" << endl;
			} else
				print_contact(phonebook, id_search);
			cin.ignore(10000, '\n');
		} else
			cout << "This is not a command!" << endl;
	}
    return 0;
}
