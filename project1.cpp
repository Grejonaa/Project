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



int main() {
    
    cout << "Hello world" << endl;
    return 0;
}



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
    Studenti student;
    student.lexoStudentin();
    cout << "Mesatarja e notave te studentit eshte: " << student.notaMesatare() << endl;
    return 0;
}
