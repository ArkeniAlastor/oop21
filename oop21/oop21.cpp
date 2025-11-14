#include <iostream>
#include <string>
using namespace std;

class PassportUkraine {
protected:
	string surname;
	string name;
	string patronymic;
	string dateOfBirth;
	string placeOfBirth;
	string passportNumber;
	string dateOfIssue;
	string dateOfExpiry;
	string registrationAddress;
	string issuedby;
public:
	PassportUkraine() {}
	PassportUkraine(string s, string n, string p, string dob, string pob,
		string pn, string doi, string doe, string ra, string ib) :
		surname(s), name(n), patronymic(p), dateOfBirth(dob),
		placeOfBirth(pob), passportNumber(pn), dateOfIssue(doi),
		dateOfExpiry(doe), registrationAddress(ra), issuedby(ib) {
	}

	void SetSurname(string s) { surname = s; }
	string GetSurname() const { return surname; }
	void SetName(string n) { name = n; }
	string GetName() const { return name; }
	void SetPatronymic(string p) { patronymic = p; }
	string GetPatronymic() const { return patronymic; }
	void SetDateOfBirth(string dob) { dateOfBirth = dob; }
	string GetDateOfBirth() const { return dateOfBirth; }
	void SetPlaceOfBirth(string pob) { placeOfBirth = pob; }
	string GetPlaceOfBirth() const { return placeOfBirth; }
	void SetPassportNumber(string pn) { passportNumber = pn; }
	string GetPassportNumber() const { return passportNumber; }
	void SetDateOfIssue(string doi) { dateOfIssue = doi; }
	string GetDateOfIssue() const { return dateOfIssue; }
	void SetDateOfExpiry(string doe) { dateOfExpiry = doe; }
	string GetDateOfExpiry() const { return dateOfExpiry; }
	void SetRegistrationAddress(string ra) { registrationAddress = ra; }
	string GetRegistrationAddress() const { return registrationAddress; }
	void SetIssuedBy(string ib) { issuedby = ib; }
	string GetIssuedBy() const { return issuedby; }

	void Print()
	{
		cout << "Passport Ukraine Information:" << endl;
		cout << "Surname: " << surname << endl;
		cout << "Name: " << name << endl;
		cout << "Patronymic: " << patronymic << endl;
		cout << "Date of Birth: " << dateOfBirth << endl;
		cout << "Place of Birth: " << placeOfBirth << endl;
		cout << "Passport Number: " << passportNumber << endl;
		cout << "Date of Issue: " << dateOfIssue << endl;
		cout << "Date of Expiry: " << dateOfExpiry << endl;
		cout << "Registration Address: " << registrationAddress << endl;
		cout << "Issued By: " << issuedby << endl;
	}
};

int main() {

	PassportUkraine passport("Ivanov", "Ivan", "Ivanovich", "01.01.1990",
		"Kiev", "AB123456", "01.01.2020", "01.01.2030",
		"123 Main St, Kiev", "Kiev Passport Office");
	passport.Print();
	return 0;


}