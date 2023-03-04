// Pointer_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;
class Employee {

private:
	string name;
	int salary;
	double id;

public:
	Employee(string name, int salary, int id) {
		this-> name = name;
		this->salary = salary;
		this->id = id;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
	int getSalary() {
		return salary;
	}
	void setName(string name) {
		this-> name = name;
	}
	int getName() {
		return 0;
	}
	void setEinkommen(int id) {
		this-> id = id;
	}
	int getEinkommen() {
		return 0;
	}
	void showInfos() {
		cout << "Name: " << name << endl;
		cout << "Einkommen: " << salary << endl;
		cout << "ID: " << id << endl;
	}
};
int main()
{
	Employee employee("Mehmet Eren", 2000, 12);
	employee.showInfos();

	return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
