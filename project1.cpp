#include <iostream>
using namespace std;

enum lendet { MATEMATIKE, ELEKTRO, PROGRAMIM, FIZIKE, SH_KOMUNIKUESE, VEGLA_SOFTUERIKE };
struct Studenti {

    string emri;
    string mbiemri;
    string ID;
    int notat[6];
    lendet studentii;


    void lexoStudentin();
    void shtypStudentin();
    double notaMesatare();
    bool fitonBurse();



};

void addStudent(Studenti &student) {
    cout << "Shkruaj ID e studentit: ";
    cin >> student.id;
    cout << "Shkruaj emrin e studentit: ";
    cin.ignore();
    getline(cin, student.name);
    cout << "Shkruaj Noten: ";
    cin >> student.grade;
}

void Studenti::lexoStudentin() {
    cout << "Sheno emrin e studentit:" << endl;
    cin >> emri;
    cout << "Sheno mbiemrin e studentit:" << endl;
    cin >> mbiemri;
    cout << "Sheno ID e studentit:" << endl;
    cin >> ID;

    for (int i = 0; i < 6; i++) {
        cout << "Shkruaj noten ne lenden "
            << (i == MATEMATIKE ? "Matematike" :
                i == ELEKTRO ? "Elektro" :
                i == PROGRAMIM ? "Programim" :
                i == FIZIKE ? "Fizike" :
                i == SH_KOMUNIKUESE ? "Shkathesi Komunikuese" :
                "Vegla Softuerike")
            << ": ";
        cin >> notat[i];
    }
}



double Studenti::notaMesatare() {
    double shuma = 0;
    for (int i = 0; i < 6; i++) {
        shuma += notat[i];
    }
    return shuma / 6.0; // Pjesetimi me 6 do t'jap mesataren
}

int main() {
    const int numStudents= 1000;

    //Futja e te dhenave te studentit
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        addStudent(students[i]);
    }

    //Printimi i te dhenave
     for (int i = 0; i < numStudents; ++i) {
        lexoStudentin(students[i]);
        cout << "\n";
    }

    Studenti student;
    cout << "Mesatarja e notave te studentit eshte: " << student.notaMesatare() << endl;
    return 0;
}





