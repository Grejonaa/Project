# Projekti në Vegla Bazë Softuerike  

Ky sistem i menaxhimit të studentëve në C++ i lejon përdoruesit të futin dhe menaxhojnë informacionin e studentëve duke përdorur një strukturë dhe katër funksione.  

## Struktura Studenti  
Ruan detajet e një studenti, përfshirë:  
- Id  
- Emrin  
- Moshën  
- Notat  

## Funksionet dhe qëllimi i tyre  

- lexoStudentin()  
  Merr të dhëna nga përdoruesi dhe mbush strukturën Studenti me të dhëna.  

- shtypStudentin()  
  Shfaq informacionin e ruajtur të një studenti.  

- notaMesatare() 
  Llogarit notën mesatare të një studenti.  

- fitonBurse()  
  Kontrollon nëse studenti fiton bursë bazuar në notën mesatare.  

- ruajNeCSV(const string& filename)  
  Ruajtja e të dhënave të studentit në një dokument CSV.  

## Funksioni kryesor main()  

- Krijon një objekt Studenti për të ruajtur të dhënat e një studenti.  
- Thërret funksionin për të lexuar të dhënat e studentit.  
- Shfaq detajet e studentit.  
- Llogarit dhe printon notën mesatare të studentit.  
- Ruajtja e të dhënave në skedar CSV.
