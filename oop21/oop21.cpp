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

class InternationalPassportUkraine : public PassportUkraine {
protected:
	string visaInformation;
	string visaExpiryDates;
	string visacountryCodes;
public:
	InternationalPassportUkraine() {}
	InternationalPassportUkraine(string s, string n, string p, string dob, string pob,
		string pn, string doi, string doe, string ra, string ib,
		string vi, string ved, string vcc) :
		PassportUkraine(s, n, p, dob, pob, pn, doi, doe, ra, ib),
		visaInformation(vi), visaExpiryDates(ved), visacountryCodes(vcc) {
	}

	void SetVisaInformation(string vi) { visaInformation = vi; }
	string GetVisaInformation() const { return visaInformation; }
	void SetVisaExpiryDates(string ved) { visaExpiryDates = ved; }
	string GetVisaExpiryDates() const { return visaExpiryDates; }
	void SetVisaCountryCodes(string vcc) { visacountryCodes = vcc; }
	string GetVisaCountryCodes() const { return visacountryCodes; }

	void Print()
	{
		PassportUkraine::Print();
		cout << "Visa Information: " << visaInformation << endl;
		cout << "Visa Expiry Dates: " << visaExpiryDates << endl;
		cout << "Visa Country Codes: " << visacountryCodes << endl;
	}

};

int main() {

PassportUkraine passport("Ivanov", "Ivan", "Ivanovich", "02.02.1985",
	"Kiev", "AB123456", "21.07.2020", "21.07.2050",
	"123 Main St, Kiev", "Kiev Passport Office");

passport.SetSurname("Petrenko");
passport.SetName("Petro");
passport.SetPatronymic("Serhiyovich");
passport.SetDateOfBirth("03.03.1990");
passport.SetPlaceOfBirth("Odesa");
passport.SetPassportNumber("XY987654");
passport.SetDateOfIssue("15.03.2021");
passport.SetDateOfExpiry("15.03.2041");
passport.SetRegistrationAddress("789 Er St, Odesa");
passport.SetIssuedBy("Odesa Passport Office");
passport.Print();
cout << endl;

InternationalPassportUkraine intPassport("Ivanov", "Ivan", "Ivanovich",
	"02.02.1985", "Lviv", "CD654321", "23.05.2021", "23.05.2034",
	"456 Elm St, Lviv", "Lviv Passport Office",
	"Ukrainen Visa", "01.06.2022; 01.12.2022", "TR");

intPassport.SetName("Andriy");
intPassport.SetPatronymic("Vasylovich");
intPassport.SetSurname("Shevchenko");
intPassport.SetPassportNumber("EF789012");
intPassport.SetDateOfIssue("15.08.2022");
intPassport.SetDateOfExpiry("15.08.2032");
intPassport.SetRegistrationAddress("789 Oak St, Odessa");
intPassport.SetIssuedBy("Odessa Passport Office");
intPassport.SetPlaceOfBirth("Odessa");
intPassport.SetDateOfBirth("03.03.1986");
intPassport.Print();
return 0;
}