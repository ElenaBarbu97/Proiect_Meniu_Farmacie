#include <stdio.h>
#include <stdlib.h> // pentru a putea utiliza functia exit
#include <string.h>
#include <windows.h>
/* Color contrasts */
#define FOREGROUND_WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
#define BACKGROUND_BLACK 0


struct produs{
  char denumire[30];
  char concentratie[20];
  double pret;
  int cantitateDisponibila;
  char dataValabilitate[15];
};




/******************************meniu principal********************************/
int meniu_principal(){
  int optiune;
  int introducere_corecta =
      0; // introducere_corecta==0 inseamna ca nu e
         // introdus bine. introducere_corecta==1 e cand introduce bine.
  int numarul_citit = 0;

  while (introducere_corecta ==
         0) { // se repeta acets ciclu pana cand utilizatorul nu introduce un
              // numar intreg care sa fie numarul unei opriuni existente
    printf("Selectati una dintre optiunile disponibile introducand doar "
                 "cifra din fata optiunii dorite:\n");
    printf("1 adaugarea/ afisarea/stergerea produselor\n");
    printf("2 cautarea produselor\n");
    printf("3 rezervarea produselor\n");
    printf("4 iesirea din program\n");
    numarul_citit = scanf("%d", &optiune);
    // daca utilizatorul introduce numar intreg (asa cum am specificat prin %d)
    // optiunea scanf va returna 1, iar daca utilizatorul introduce alt tip de
    // date (ex. string sau char), atunci va returna 0.

    while (numarul_citit != 1) { // se repeta acest loop pana cand utilizatorul
                                 // nu introduce un numar intreg
      printf("Trebuie sa introduceti doar cifra din fata optiunii.\n");
      scanf("%*[^\n]"); // *: inputul care corespunde acestui specificator de
                        // format se citeste,dar nu se stocheaza niciunde.
                        // [^\n]: citeste caractere pana cand se intalneste
                        // caracterul \n.
      // este importanta pentru a prevenii intrarea in infinite loop.

      printf("Selectati una dintre optiunile disponibile introducand "
                   "doar cifra din fata optiunii dorite:\n");
      printf("1 adaugarea/ afisarea/stergerea produselor\n");
      printf("2 cautarea produselor\n");
      printf("3 rezervarea produselor\n");
      printf("4 iesirea din program\n");
      numarul_citit = scanf("%d", &optiune);
    }

    if (optiune == 1 || optiune == 2 || optiune == 3 || optiune == 4) {
      introducere_corecta = 1;
    } else {
      printf("Ati selectat o optiune inexistenta.\n");
    }
  }
  return optiune;
}
/************************************************************************************************************/
int adaugare_afisare_stergere() {
  int optiune;
  int introducere_corecta = 0;
  int numarul_citit = 0;

  while (introducere_corecta ==
         0) { // se repeta acets ciclu pana cand utilizatorul nu introduce un
              // numar intreg care sa fie numarul unei opriuni existente
    printf("Selectati una dintre optiunile disponibile introducand doar "
                 "cifra din fata optiunii dorite:\n");
    printf("1 adaugarea produselor\n");
    printf("2 afisarea produselor\n");
    printf("3 stergerea produselor\n");
    printf("4 revenirea la meniul principal\n");
    printf("5 iesirea din program\n");
    numarul_citit = scanf("%d", &optiune);
    // daca utilizatorul introduce numar intreg (asa cum am specificat prin %d)
    // optiunea scanf va returna 1, iar daca utilizatorul introduce alt tip de
    // date (ex. string sau char), atunci va returna 0.

    while (numarul_citit != 1) { // se repeta acest loop pana cand utilizatorul
                                 // nu introduce un numar intreg
      printf("Trebuie sa introduceti doar cifra din fata optiunii.\n");
      scanf("%*[^\n]"); // *: inputul care corespunde acestui specificator de
                        // format se citeste,dar nu se stocheaza niciunde.
                        // [^\n]: citeste caractere pana cand se intalneste
                        // caracterul \n.
      // este importanta pentru a prevenii intrarea in infinite loop.

      printf("1 adaugarea produselor\n");
      printf("2 afisarea produselor\n");
      printf("3 stergerea produselor\n");
      printf("4 revenirea la meniul principal\n");
      printf("5 iesirea din program\n");
      numarul_citit = scanf("%d", &optiune);
    }

    if (optiune == 1 || optiune == 2 || optiune == 3 || optiune == 4 || optiune == 5) {
      introducere_corecta = 1;
    } else {
      printf("Ati selectat o optiune inexistenta.\n");
    }
  }
  return optiune;
}
/**********************************************************************************************/
int cautare_produse(){
  int optiune;
  int introducere_corecta = 0;
  int numarul_citit = 0;

  while (introducere_corecta ==
         0) { // se repeta acets ciclu pana cand utilizatorul nu introduce un
              // numar intreg care sa fie numarul unei opriuni existente
    printf("Selectati una dintre optiunile disponibile introducand doar "
                 "cifra din fata optiunii dorite:\n");
    printf("1 cautarea produselor dupa nume\n");
    printf("2 cautarea produselor dupa disponibilitate\n");
    printf("3 revenirea la meniul principal\n");
    printf("4 iesirea din program\n");
    numarul_citit = scanf("%d", &optiune);
    // daca utilizatorul introduce numar intreg (asa cum am specificat prin %d)
    // optiunea scanf va returna 1, iar daca utilizatorul introduce alt tip de
    // date (ex. string sau char), atunci va returna 0.

    while (numarul_citit != 1) { // se repeta acest loop pana cand utilizatorul
                                 // nu introduce un numar intreg
      printf("Trebuie sa introduceti doar cifra din fata optiunii.\n");
      scanf("%*[^\n]"); // *: inputul care corespunde acestui specificator de
                        // format se citeste,dar nu se stocheaza niciunde.
                        // [^\n]: citeste caractere pana cand se intalneste
                        // caracterul \n.
      // este importanta pentru a prevenii intrarea in infinite loop.

      printf("Selectati una dintre optiunile disponibile introducand "
                   "doar cifra din fata optiunii dorite:\n");
      printf("1 cautarea produselor dupa nume\n");
      printf("2 cautarea produselor dupa disponibilitate\n");
      printf("3 revenirea la meniul principal\n");
      printf("4 iesirea din program\n");
      numarul_citit = scanf("%d", &optiune);
    }

    if (optiune == 1 || optiune == 2 || optiune == 3 || optiune == 4) {
      introducere_corecta = 1;
    } else {
      printf("Ati selectat o optiune inexistenta.\n");
    }
  }
  return optiune;
}

/**************************************************************************************************/
int produse_rezervate(){
  int optiune;
  int introducere_corecta = 0;
  int numarul_citit = 0;

  while (introducere_corecta ==
         0) { // se repeta acets ciclu pana cand utilizatorul nu introduce un
              // numar intreg care sa fie numarul unei opriuni existente
    printf("Selectati una dintre optiunile disponibile introducand doar "
                 "cifra din fata optiunii dorite:\n");
    printf("1 rezervarea produselor\n");
    printf("2 afisarea produselor rezervate\n");
    printf("3 revenirea la meniul principal\n");
    printf("4 iesirea din program\n");
    int numarul_citit = scanf("%d", &optiune);
    // daca utilizatorul introduce numar intreg (asa cum am specificat prin %d)
    // optiunea scanf va returna 1, iar daca utilizatorul introduce alt tip de
    // date (ex. string sau char), atunci va returna 0.

    while (numarul_citit != 1) { // se repeta acest loop pana cand utilizatorul
                                 // nu introduce un numar intreg
      printf("Trebuie sa introduceti doar cifra din fata optiunii.\n");
      scanf("%*[^\n]"); // *: inputul care corespunde acestui specificator de
                        // format se citeste,dar nu se stocheaza niciunde.
                        // [^\n]: citeste caractere pana cand se intalneste
                        // caracterul \n.
      // este importanta pentru a prevenii intrarea in infinite loop.

      printf("Selectati una dintre optiunile disponibile introducand "
                   "doar cifra din fata optiunii dorite:\n");
      printf("1 rezervarea produselor\n");
      printf("2 afisarea produselor rezervate\n");
      printf("3 revenirea la meniul principal\n");
      printf("4 iesirea din program\n");
      numarul_citit = scanf("%d", &optiune);
    }

    if (optiune == 1 || optiune == 2 || optiune == 3 || optiune==4) {
      introducere_corecta = 1;
    } else {
      printf("Ati selectat o optiune inexistenta.\n");
    }
  }
  return optiune;
}


int produse_rezervate_afisare(){
  int optiune;
  int introducere_corecta = 0;
  int numarul_citit = 0;

  while (introducere_corecta ==
         0) { // se repeta acets ciclu pana cand utilizatorul nu introduce un
              // numar intreg care sa fie numarul unei opriuni existente
    printf("Selectati una dintre optiunile disponibile introducand doar "
                 "cifra din fata optiunii dorite:\n");
    printf("1 afisarea rezervarilor ale tuturor clientilor\n");
    printf("2 afisarea rezervarilor ale unui client\n");
    printf("3 revenirea la meniul principal\n");
    printf("4 iesirea din program\n");
    int numarul_citit = scanf("%d", &optiune);
    // daca utilizatorul introduce numar intreg (asa cum am specificat prin %d)
    // optiunea scanf va returna 1, iar daca utilizatorul introduce alt tip de
    // date (ex. string sau char), atunci va returna 0.

    while (numarul_citit != 1) { // se repeta acest loop pana cand utilizatorul
                                 // nu introduce un numar intreg
      printf("Trebuie sa introduceti doar cifra din fata optiunii.\n");
      scanf("%*[^\n]"); // *: inputul care corespunde acestui specificator de
                        // format se citeste,dar nu se stocheaza niciunde.
                        // [^\n]: citeste caractere pana cand se intalneste
                        // caracterul \n.
      // este importanta pentru a prevenii intrarea in infinite loop.

      printf("Selectati una dintre optiunile disponibile introducand "
                   "doar cifra din fata optiunii dorite:\n");
    printf("1 afisarea rezervarilor ale tuturor clientilor\n");
    printf("2 afisarea rezervarilor ale unui client\n");
    printf("3 revenirea la meniul principal\n");
    printf("4 iesirea din program\n");
      numarul_citit = scanf("%d", &optiune);
    }

    if (optiune == 1 || optiune == 2 || optiune == 3 || optiune==4) {
      introducere_corecta = 1;
    } else {
      printf("Ati selectat o optiune inexistenta.\n");
    }
  }
  return optiune;
}



/**********************************Functi pentru optiuni******************************************/
void adaugare_produse(char path[]) {

    FILE * filePointer;
    filePointer = fopen(path, "a");

    char denumire_produs[30];
    char concentratia[20];
    double pret;
    int cantitate_disponibila;
    char data_de_valabilitate[15];
    printf("-------------------------------------------------\n");
    printf("Adaugare\n");
    printf("-------------------------------------------------\n");

    printf("Introduceti denumirea produsului\n");
    getchar();
    scanf("%[^\n]",denumire_produs);
    getchar();
    printf("Introduceti concentratia \n");
    scanf("%[^\n]",concentratia);
    printf("Introduceti pretul in lei\n");
    scanf("%lf",&pret);
    printf("Introduceti cantitatea disponibila (cutii, flacoane)\n");
    scanf("%d",&cantitate_disponibila);
    getchar();
    printf("Introduceti data de valabilitete (zz/ll/aaaa)\n");
    scanf("%[^\n]",data_de_valabilitate);

    // coloare text de avertizare

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    if ( filePointer == NULL )
    {   SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf( "Fisierul nu poate fi accesat." ) ;
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
        printf("-------------------------------------------------\n");
        return;
    }
    else
    {
        fprintf(filePointer, "%s,%s,%.2lf,%d,%s\n", denumire_produs,concentratia,pret,cantitate_disponibila,data_de_valabilitate);
        fclose(filePointer) ;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("Produsul %s a fost adaugat in fisier\n", denumire_produs);
    SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
    printf("-------------------------------------------------\n");

}

void afisare_produse(char path[]) {

    FILE * filePointer;
    filePointer = fopen(path, "r");

    //culori text
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    printf("-------------------------------------------------\n");
    printf("Lista tuturor produselor:\n");
    printf("-------------------------------------------------\n");
    if ( filePointer == NULL )
    {
      SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // seteaza ca textul sa apara in rosu
      printf( "Fisierul nu poate fi accesat." );
      SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK); // seteaza textul sa revina la text alb pe fundal negru
      printf("-------------------------------------------------\n");
      return;
    }
    else
    {   printf("Den.,Conc.,Pret,Canti.,Termen de valabilitate\n");
        char c = fgetc(filePointer);
        while (c != EOF)
        {
            printf ("%c",c);
            c = fgetc(filePointer);
        }

        fclose(filePointer);
    }

    printf("-------------------------------------------------\n");
}

void stergere_produse(char path[])
{
  printf("-------------------------------------------------\n");
  printf("Stergere dupa denumirea produsului\n");
  printf("-------------------------------------------------\n");

  char denumire_produs[30];
  printf("Introduceti denumirea produsului\n");
  getchar();
  scanf("%[^\n]",&denumire_produs);

  FILE * filePointer;
  filePointer = fopen(path, "r");

  FILE * tempPointer;
  tempPointer = fopen("temp.txt", "a");

  char linie[200];
  
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;
  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  
  if ( filePointer == NULL )
  {
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf( "Fisierul nu poate fi accesat." );
    SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
    printf("-------------------------------------------------\n");
    return;
  }
  else
  { struct produs p; 
    int gasit=0;
      while (fscanf(filePointer, "%29[^,],%19[^,],%lf,%d,%14[^\n]\n", p.denumire, p.concentratie, &p.pret, &p.cantitateDisponibila, p.dataValabilitate) == 5) {
        if(strcmp(denumire_produs,p.denumire)!=0){
            fprintf(tempPointer, "%s,%s,%lf,%d,%s\n", p.denumire, p.concentratie, p.pret, p.cantitateDisponibila, p.dataValabilitate);
        }
        else if(strcmp(denumire_produs,p.denumire)==0){
          gasit=1;
        }    
      }
      if(gasit==0){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Produsul nu a fost gasit in baza de date.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
      }
      else if(gasit==1){
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("Produsul %s a fost sters din baza de date.\n",denumire_produs);
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
      }
      fclose(filePointer) ;
      fclose(tempPointer) ;
      remove(path);  		// sterge fisierul original
      rename("temp.txt", path); 	// redenumeste fisierul temporar la numele original
  }
  printf("-------------------------------------------------\n");
}


/************************************************************************************************************/
void cautare_dupa_nume(char path[])
{
 printf("-------------------------------------------------\n");
  printf("Cautarea produsului dupa nume\n");
 printf("-------------------------------------------------\n");

  char denumire_produs[30];
  printf("Introduceti denumirea produsului\n");
  getchar();
  scanf("%[^\n]",&denumire_produs);

  FILE * filePointer;
  filePointer = fopen(path, "r");

  char linie[200];

  //colorare text
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;
  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  if ( filePointer == NULL )
  {
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf( "Fisierul nu poate fi accesat." );
    SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
    printf("-------------------------------------------------\n");
    return;
  }
  else
  {   printf("Den.,Conc.,Pret,Canti.,Termen de valabilitate\n");
      struct produs p;
      int gasit=0;
      while (fscanf(filePointer, "%29[^,],%19[^,],%lf,%d,%14[^\n]\n", p.denumire, p.concentratie, &p.pret, &p.cantitateDisponibila, p.dataValabilitate) == 5) {

        if(strcmp(denumire_produs,p.denumire)==0){// daca denumirea produsului din linie este egala cu deumirea introdusa de utilizator va afisa urmatoarele lucruri
            gasit=1;
            printf("%s,%s,%lf,%d,%s\n", p.denumire, p.concentratie, p.pret, p.cantitateDisponibila, p.dataValabilitate);
        }
          
          
      }
      if(gasit==0){
            //colorare text
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
            WORD saved_attributes;
            GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
            saved_attributes = consoleInfo.wAttributes;

            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("Produsul cautat nu este disponibil.\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
          }
      printf("-------------------------------------------------\n");
      fclose(filePointer);
  }
}

void cautare_dupa_disponibilitate( char path[]){
 printf("-------------------------------------------------\n");
 printf("Afisarea produselor care sunt disponibile momentan\n");
 printf("-------------------------------------------------\n");

  FILE * filePointer;
  filePointer = fopen(path, "r");

  char linie[200];

  //colorare text
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
  WORD saved_attributes;
  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
  saved_attributes = consoleInfo.wAttributes;

  if ( filePointer == NULL )
  {
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf( "Fisierul nu poate fi accesat." );
    SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
    printf("-------------------------------------------------\n");
    return;
  }
  else
  { struct produs p;  
    printf("Den.,Conc.,Pret,Canti.,Termen de valabilitate\n");
      while (fscanf(filePointer, "%29[^,],%19[^,],%lf,%d,%14[^\n]\n", p.denumire, p.concentratie, &p.pret, &p.cantitateDisponibila, p.dataValabilitate) == 5) {

        if(p.cantitateDisponibila!=0)// daca denumirea produsului din linie este egala cu deumirea introdusa de utilizator va afisa urmatoarele lucruri
            printf("%s,%s,%lf,%d,%s\n",p.denumire, p.concentratie, p.pret, p.cantitateDisponibila, p.dataValabilitate);
    
      }
      printf("-------------------------------------------------\n");
      fclose(filePointer);
  }
}


/********************************************REZERVARE***********************************************************************/

void rezervare_noua(char path[]) {
    printf("-------------------------------------------------\n");
    printf("Ati initializat o rezervare noua\n");
    printf("-------------------------------------------------\n");
    printf("Introduceti numele si prenumele dumneavoastra:\n");
    
    char nume_client[30];
    getchar(); // pentru a elimina \n
    scanf("%[^\n]", nume_client);
    
    char denumire_produs[30];
    printf("Introduceti denumirea produsului pe care doriti sa il rezervati:\n");
    getchar();
    scanf("%[^\n]", denumire_produs);

    FILE *filePointer;
    filePointer = fopen(path, "r+");
    FILE *fisierRezervare;
    fisierRezervare = fopen("Produsele_rezervate.txt", "a"); // daca nu exista creem un fisier care sa contina toate rezervarile

    FILE *fisierRezNume;
    fisierRezNume=fopen(("%s.txt",nume_client),"a"); // daca nu exista deja, creem un fisier pentru fiecare client 
  

    //colorare text
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    if (filePointer == NULL || fisierRezervare == NULL) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Eroare la deschiderea fisierelor.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
        printf("-------------------------------------------------\n");
        exit(1);
    }

    char linie[200];
    struct produs p;
    int gasit = 0;
    long int pozitie = ftell(filePointer); // Salveaza pozitia curenta a cursorului

    while (fscanf(filePointer, "%29[^,],%19[^,],%lf,%d,%14[^\n]\n", p.denumire, p.concentratie, &p.pret, &p.cantitateDisponibila, p.dataValabilitate) == 5) {
        if (strcmp(denumire_produs, p.denumire) == 0) {
            gasit = 1;
            break;
        }
        pozitie = ftell(filePointer); // Salveaza pozitia curenta a cursorului pentru a sti unde sa ne intoarcem daca nu gasim produsul
    }

    if (!gasit) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Produsul nu a fost gasit in baza de date.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
        fclose(filePointer);
        fclose(fisierRezervare);
        printf("-------------------------------------------------\n");
        return;
    }

    int cantitate_rezervare;
    printf("Introduceti cantitatea dorita pentru rezervare:\n");
    scanf("%d", &cantitate_rezervare);

    if (cantitate_rezervare <= 0) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Cantitatea introdusa este invalida.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
        fclose(filePointer);
        fclose(fisierRezervare);
        printf("-------------------------------------------------\n");
        return;
    }

    if (cantitate_rezervare > p.cantitateDisponibila) {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("Nu exista suficiente unitati disponibile pentru rezervare.\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
        fclose(filePointer);
        fclose(fisierRezervare);
        printf("-------------------------------------------------\n");
        return;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("Ati rezervat %d unitati din produsul %s.\n", cantitate_rezervare, p.denumire);
    SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
    p.cantitateDisponibila -= cantitate_rezervare;

    //Modificaea datelor in fisierul cu produsele disponibile
    fseek(filePointer, pozitie, SEEK_SET); // Se pozitioneaza cursorul la pozitia salvata anterior
    fprintf(filePointer, "%s,%s,%lf,%d,%s\n", p.denumire, p.concentratie, p.pret, p.cantitateDisponibila, p.dataValabilitate);

    //Adaugarea datelor in fisierul de rezervare
    fprintf(fisierRezervare, "%s\n", nume_client);
    fprintf(fisierRezervare, "%s,%s,%lf,%d,%s\n", p.denumire, p.concentratie, p.pret, cantitate_rezervare, p.dataValabilitate);
    fprintf(fisierRezNume,"%s,%s,%lf,%d,%s\n", p.denumire, p.concentratie, p.pret, cantitate_rezervare, p.dataValabilitate);


    fclose(filePointer);
    fclose(fisierRezervare);
    fclose(fisierRezNume);
    printf("-------------------------------------------------\n");
}

/********************************Afisarea produselor rezervate****************************************/
void afisarea_tuturor_produselor_rezervate(char path[]){
    FILE * filePointer;
    filePointer = fopen(path, "r");
    //colorare text
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    if ( filePointer == NULL )
    {
      SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
      printf( "Fisierul nu poate fi accesat.\n" );
      SetConsoleTextAttribute(hConsole, FOREGROUND_WHITE | BACKGROUND_BLACK);
      printf("-------------------------------------------------\n");
    return;
    }
    else
    {   printf("Den.,Conc.,Pret,Canti.,Termen de valabilitate\n");
        char c = fgetc(filePointer);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(filePointer);
        }

        fclose(filePointer);
    }

    printf("-------------------------------------------------\n");
}





/*********************************************************************************************************/
void accesare_optiuni(int optiune1,char path[]);

/******************************** main ***********************************************************************/

int main() {
  char path[] = "Produse.txt";
  int optiune1=0;
  do{
    optiune1 = meniu_principal();// preluam prima optiune (cea din meniul principal) si apoi o folosim mai departe
    accesare_optiuni(optiune1,path); // in functie de optiunea1 se alege ce se va efectua mai departe
  }while(optiune1 != 4);
  return 0;
}

/******************************Accesare optiuni din meniul principal************************************/
void accesare_optiuni(int optiune1,char path[]){
  printf("\n");
    switch (optiune1) {
      case (1): {
        int optiune2 = adaugare_afisare_stergere();
        printf("\n");

        switch (optiune2) {
          case(1): {
            adaugare_produse(path);
            break;
          }
          case(2):{
            afisare_produse(path);
            break;
          }
          case(3):{
            stergere_produse(path);
            break;
          }
          case (4): {
            break;
          }
          case (5): {
            exit(0);
            break;
          }
        }
        break;
      }
      case (2): {
        int optiune2 = cautare_produse();
        printf("\n");

        switch (optiune2) {
          case(1):{
            cautare_dupa_nume(path);
            break;
          }
          case(2):{
            cautare_dupa_disponibilitate(path);
            break;
          }
          case (3): {
            break;
          }
          case (4): {
            exit(0);
            break;
          }
        }
        break;
      }
      case (3): {
        int optiune2 = produse_rezervate();
        printf("\n");
        switch (optiune2) {
          case(1):{
            rezervare_noua(path);
            break;
          }
          case(2):{
                printf("-------------------------------------------------\n");
                printf("Lista tuturor produselor rezervate:\n");
                printf("-------------------------------------------------\n");
            int optiune3=produse_rezervate_afisare();
            switch(optiune3){
              case(1):{
                afisarea_tuturor_produselor_rezervate("Produsele_rezervate.txt");
                break;}
              case(2):{
                char nume_client[30];
                printf("Introduceti numele si prenumele dumneavoastra:\n");
                getchar();
                fgets(nume_client,30,stdin);
                nume_client[strlen(nume_client)-1]='\0';
                printf("-------------------------------------------------\n");
                printf("Lista produselor rezervate de  %s:\n");
                printf("-------------------------------------------------\n");
                afisarea_tuturor_produselor_rezervate(("D:/Informatica ID/Anul I/Semestrul 2/Proiect de programare/Proiect de programare/%s",nume_client));
                break;}
              case(3):{break;}
              case(4):{
                exit(0);
                break;
              }
            }

            break;
          }
          case (3): {
            break;
          }
          case (4): {
            exit(0);
            break;
          }
        }
        break;
      }
      case (4): {
        exit(0);
      }
    }
}




