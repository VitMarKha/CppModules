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
	contact.setFirstName(text);
	cout << "Please enter last name: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setLastName(text);
	cout << "Please enter nickname: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setNickname(text);
	cout << "Please enter login: ";
	getline(cin, text);
	if (cin.eof())
		return 1;
	contact.setLogin(text);
	cout << "Please enter postal address: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setPostalAddress(text);
	cout << "Please enter email address: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setAddress(text);
	cout << "Please enter phone number: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setPhoneNumber(text);
	cout << "Please enter birthday date: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setBirthdayDate(text);
	cout << "Please enter favorite meal: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setFavoriteMeal(text);
	cout << "Please enter underwear color: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setUnderwearColor(text);
	cout << "Please enter darkest secret: ";
	getline(cin, text);
	if (cin.eof()) {
		return 1;
	}
	contact.setDarkestSecret(text);
	return 0;
}

static void print_contact(const Phonebook& phonebook, const int& id_search) {
    cout << "Contact information with id " << id_search << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << phonebook.getContact(id_search).getFirstName() << endl;
    cout << phonebook.getContact(id_search).getLastName() << endl;
    cout << phonebook.getContact(id_search).getNickname() << endl;
    cout << phonebook.getContact(id_search).getLogin() << endl;
    cout << phonebook.getContact(id_search).getPostalAddress();
    cout << phonebook.getContact(id_search).getEmail() << endl;
    cout << phonebook.getContact(id_search).getAddress() << endl;
    cout << phonebook.getContact(id_search).getPhoneNumber() << endl;
    cout << phonebook.getContact(id_search).getBirthdayDate() << endl;
    cout << phonebook.getContact(id_search).getFavoriteMeal() << endl;
    cout << phonebook.getContact(id_search).getUnderwearColor() << endl;
    cout << phonebook.getContact(id_search).getDarkestSecret() << endl;
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
			 << sub_str(phonebook.getContact(i).getFirstName()) << "|"
			 << setw(10) << sub_str(phonebook.getContact(i).getLastName())
			 << "|" << setw(10) << sub_str(phonebook.getContact(i).getNickname()) << "|" << endl;
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
			phonebook.setContact(contact, id);
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
