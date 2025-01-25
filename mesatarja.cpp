#include <iostream>
#include <string>
using namespace std;

// Krijimi i një strukture për studentin
struct Student {
    string emri;
    int mosha;
    double nota1, nota2, nota3;
};

// Funksioni për të llogaritur mesataren e notave
double llogaritMesataren(const Student& s) {
    return (s.nota1 + s.nota2 + s.nota3) / 3.0;
}

int main() {
    // Krijimi i një varianti të studentit
    Student student;

    // Kërkohet informacione nga përdoruesi
    cout << "Shkruani emrin e studentit: ";
    getline(cin, student.emri);

    cout << "Shkruani moshen e studentit: ";
    cin >> student.mosha;

    cout << "Shkruani noten 1: ";
    cin >> student.nota1;

    cout << "Shkruani noten 2: ";
    cin >> student.nota2;

    cout << "Shkruani noten 3: ";
    cin >> student.nota3;

    // Llogaritja dhe shfaqja e mesatares
    double mesatarja = llogaritMesataren(student);
    cout << "\nStudenti " << student.emri << " ka mesataren: " << mesatarja << endl;

    // Mund të shtoni edhe disa logjika të tjera si kalimi ose jo i vitit, etj.

    return 0;
}