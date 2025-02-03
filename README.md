# Project
Projekti ne Vegla baze softuerike
Ky sistem i menaxhimit të studentëve C++ i lejon përdoruesit të futin dhe menaxhojnë informacionin e studentëve duke përdorur një strukturë dhe katër funksione.

Struktura (Studenti):
  Ruan detajet e studentit: identitetin, emrin, moshën dhe notën.

Funksionet dhe qëllimi i tyre:

addstudent(Student &student):
Merr të dhëna të përdoruesit dhe mbush strukturën Studenti me të dhëna.

displayStudent(const Student &student):
Shfaq informacionin e ruajtur të një studenti.

updateGrade(Student &student, float newGrade):
Përditëson notën e një studenti.

calculateAverageGrade(const Student students[], int size):
Llogarit notën mesatare të shumë studentëve.

Funksioni kryesor (main())

Krijon një grup strukturash Studenti për të ruajtur studentë të shumtë.
Përdor një unazë për të marrë të dhëna për secilin student.
Shfaq detajet e nxënësit.
Llogarit dhe printon notën mesatare të të gjithë nxënësve.
