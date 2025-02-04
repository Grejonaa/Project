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
    cout << "Sheno emrin e studentit..... ";
    cin >> emri;
    cout << "Sheno mbiemrin e studentit.. ";
    cin >> mbiemri;
    cout << "Sheno ID e studentit........ ";
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

void Studenti::shtypStudentin(){
    cout << endl << " ===== Te dhenat e Studentit =====" << endl;
    cout << "Emri i Studentit eshte..... " << emri << endl;
    cout << "Mbiemri i Studentit eshte.. " << mbiemri << endl;
    cout << "ID e Studentit eshte....... " << ID << endl<<endl;
    cout << "Notat e Studentit: " << endl;
    for (int i = 0; i < 6; i++) {
            cout <<""<< (i == MATEMATIKE ? "Matematike............. " :
                i == ELEKTRO ?             "Elektro................ " :
                i == PROGRAMIM ?           "Programim.............. " :
                i == FIZIKE ?              "Fizike................. " :
                i == SH_KOMUNIKUESE ?      "Shkathesi Komunikuese.. " :
                                           "Vegla Softuerike....... ") 
            << notat[i] << endl;
    }
    cout << endl << "Mesatarja e notave te studentit eshte: " << Studenti::notaMesatare() << endl;
    cout << "Studenti Fiton burse nese 1 = " << Studenti::fitonBurse() << endl;
}

double Studenti::notaMesatare() {
    double shuma = 0;
    double avg = 0;
    for (int i = 0; i < 6; i++) {
        shuma += notat[i];
    }
    avg = shuma / 6.0;  // Pjesetimi me 6 do t'jap mesataren
    return avg; 
}

bool Studenti::fitonBurse(){
    if (Studenti::notaMesatare() >= 8.0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
   
    Studenti student;

    student.lexoStudentin();
    student.shtypStudentin();
    return 0;
}