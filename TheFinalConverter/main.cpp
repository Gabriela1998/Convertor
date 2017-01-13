#include <limits>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<Windows.h>
#include<string.h>
#include<conio.h>

using namespace std;
int saveNrCategorie;
void titlu();
void meniuLungime();
void meniuArie();
void meniuVolum();
void meniuTimp();
void meniuViteza();
void meniuTemp();
void meniuMasa();
void meniuEnergie();
void meniuPresiune();
void meniuDens();
void meniuCons();

void print(double nr, int precision)
{
    cout.precision(precision);
    cout << fixed;
    cout << nr;
}
void titlu()
{
    cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n";
    cout << "\t\t    |||||| ***     Convertor      *** ||||||| \n";
    cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n\n\n";
}
void meniuUnitati()
{
    cout<<"\t MENIU\n\n";
    cout<<"\t 1.Lungime\n";
    cout<<"\t 2.Arie\n";
    cout<<"\t 3.Volum\n";
    cout<<"\t 4.Timp\n";
    cout<<"\t 5.Viteza\n";
    cout<<"\t 6.Temperatura\n";
    cout<<"\t 7.Masa\n";
    cout<<"\t 8.Energie\n";
    cout<<"\t 9.Presiune\n";
    cout<<"\t 10.Densitate\n";
    cout<<"\t 11.Consum combustibil\n";
    cout<<"\t 12.Exit\n\n";
}
int alegeCategoria()
{
    system("cls");
    titlu();
    int nrCategorie;
    char nrInstructiune[100];
    meniuUnitati();
    cout<<"Alegeti categoria de unitati: ";
    cin >> nrInstructiune;
    while (strcmp(nrInstructiune,"1")!=0 && strcmp(nrInstructiune,"2")!=0  && strcmp(nrInstructiune,"3")!=0 && strcmp(nrInstructiune,"4")!=0
            && strcmp(nrInstructiune,"5")!=0 && strcmp(nrInstructiune,"6")!=0 && strcmp(nrInstructiune,"7")!=0 && strcmp(nrInstructiune,"8")!=0
            && strcmp(nrInstructiune,"9")!=0 && strcmp(nrInstructiune,"10")!=0 && strcmp(nrInstructiune,"11")!=0 && strcmp(nrInstructiune,"12")!=0)
    {
        system("cls");
        titlu();
        meniuUnitati();
        cout<<"Ati introdus o instructiune inexistenta. Alegeti din nou categoria de unitati: ";
        cin>>nrInstructiune;
        if (strcmp(nrInstructiune,"1")==0 || strcmp(nrInstructiune,"2")==0  || strcmp(nrInstructiune,"3")==0 ||
            strcmp(nrInstructiune,"4")==0 || strcmp(nrInstructiune,"5")==0 || strcmp(nrInstructiune,"6")==0 ||
            strcmp(nrInstructiune,"7")==0 || strcmp(nrInstructiune,"8")==0 || strcmp(nrInstructiune,"9")==0 ||
            strcmp(nrInstructiune,"10")==0 || strcmp(nrInstructiune,"11")==0 || strcmp(nrInstructiune,"12")==0) break;

    }
    if (strcmp(nrInstructiune,"1")==0) nrCategorie=1;
    else if (strcmp(nrInstructiune,"2")==0) nrCategorie=2;
    else if (strcmp(nrInstructiune,"3")==0) nrCategorie=3;
    else if (strcmp(nrInstructiune,"4")==0) nrCategorie=4;
    else if (strcmp(nrInstructiune,"5")==0) nrCategorie=5;
    else if (strcmp(nrInstructiune,"6")==0) nrCategorie=6;
    else if (strcmp(nrInstructiune,"7")==0) nrCategorie=7;
    else if (strcmp(nrInstructiune,"8")==0) nrCategorie=8;
    else if (strcmp(nrInstructiune,"9")==0) nrCategorie=9;
    else if (strcmp(nrInstructiune,"10")==0) nrCategorie=10;
    else if (strcmp(nrInstructiune,"11")==0) nrCategorie=11;
    else if (strcmp(nrInstructiune,"12")==0) nrCategorie=12;
    saveNrCategorie=nrCategorie;
    return nrCategorie;
}
double citesteNrValid(double &n)
{
    cout<<"\nDati valoarea pe care vreti sa o convertiti: ";
    cin >> n;
    while(!cin)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        system("cls");
        titlu();
        switch(saveNrCategorie)
        {
            case 1: meniuLungime(); break;
            case 2: meniuArie();break;
            case 3: meniuVolum();break;
            case 4: meniuTimp();break;
            case 5: meniuViteza();break;
            case 6: meniuTemp();break;
            case 7: meniuMasa();break;
            case 8: meniuEnergie();break;
            case 9: meniuPresiune();break;
            case 10: meniuDens(); break;
            case 11: meniuCons(); break;
        }
        cout<<"\nAti introdus o valoare invalida. \nDati valoarea pe care vreti sa o convertiti: ";
        cin >> n;
    }
    return n;
}


///--------------------------------------------1. LUNGIME--------------------------------------------------------------------------------------------



void meniuLungime()
{
    cout<<"\t LUNGIME\n\n";
    cout<<"\t 1.Metru (m)\n";
    cout<<"\t 2.Centimetru (cm)\n";
    cout<<"\t 3.Kilometru (km)\n";
    cout<<"\t 4.Mila (mi)\n";
    cout<<"\t 5.Inch (in) \n";
    cout<<"\t 6.Picior (ft)\n";
    cout<<"\t 7.Yarda (yd)\n";
    cout<<"\t 8.Meniu principal \n\n";
}
int alegeLungimeDin(string &lungimeDin)
{
    system("cls");
    titlu();
    int nrLungime;
    char nrUnitate[100];
    meniuLungime();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuLungime();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrLungime=1;
    else if (strcmp(nrUnitate,"2")==0) nrLungime=2;
    else if (strcmp(nrUnitate,"3")==0) nrLungime=3;
    else if (strcmp(nrUnitate,"4")==0) nrLungime=4;
    else if (strcmp(nrUnitate,"5")==0) nrLungime=5;
    else if (strcmp(nrUnitate,"6")==0) nrLungime=6;
    else if (strcmp(nrUnitate,"7")==0) nrLungime=7;
    else if (strcmp(nrUnitate,"8")==0) nrLungime=8;
    string vecUnitati[8]={" m "," cm "," km "," mi "," in "," ft "," yd "};
    lungimeDin=vecUnitati[nrLungime-1];
    return nrLungime;
}
int alegeLungimeIn(string &lungimeIn)
{
    system("cls");
    titlu();
    int nrLungime;
    char nrUnitate[100];
    meniuLungime();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;
    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuLungime();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrLungime=1;
    else if (strcmp(nrUnitate,"2")==0) nrLungime=2;
    else if (strcmp(nrUnitate,"3")==0) nrLungime=3;
    else if (strcmp(nrUnitate,"4")==0) nrLungime=4;
    else if (strcmp(nrUnitate,"5")==0) nrLungime=5;
    else if (strcmp(nrUnitate,"6")==0) nrLungime=6;
    else if (strcmp(nrUnitate,"7")==0) nrLungime=7;
    else if (strcmp(nrUnitate,"8")==0) nrLungime=8;
    string vecUnitati[8]={" m "," cm "," km "," mi "," in "," ft "," yd "};
    lungimeIn=vecUnitati[nrLungime-1];
    return nrLungime;
}
double metruInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*100;
    else if(nrUnitateIn==3) nr=nr*0.001;
    else if(nrUnitateIn==4) nr=nr*0.000621;
    else if(nrUnitateIn==5) nr=nr*39.37007;
    else if(nrUnitateIn==6) nr=nr*3.280839;
    else if(nrUnitateIn==7) nr=nr*1.093613;
    return nr;
}
double unitateInMetru(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/100;
    else if(nrUnitateDin==3) nr=nr/0.001;
    else if(nrUnitateDin==4) nr=nr/0.000621;
    else if(nrUnitateDin==5) nr=nr/39.37007;
    else if(nrUnitateDin==6) nr=nr/3.280839;
    else if(nrUnitateDin==7) nr=nr/1.093613;
    return nr;
}
int transformaLungime()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string lungimeDin, lungimeIn;
din_nou:
    nrUnitateDin=alegeLungimeDin(lungimeDin);
    if(nrUnitateDin==8) return 0;
    nrUnitateIn=alegeLungimeIn(lungimeIn);
    if(nrUnitateIn==8) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta:   ";
    print(nrTransformare, 10);
    cout<<lungimeDin<<"= ";
    print( metruInUnitate(unitateInMetru(nrTransformare, nrUnitateDin), nrUnitateIn), 10 );
    cout<<lungimeIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}




///---------------------------------------------2. ARIE------------------------------------------------------------------------------------



void meniuArie()
{
    cout<<"\t ARIE \n\n";
    cout<<"\t 1.Metru patrat (m^2)\n";
    cout<<"\t 2.Centimetru patrat (cm^2)\n";
    cout<<"\t 3.Kilometru patrat (km^2)\n";
    cout<<"\t 4.Ar (a)\n";
    cout<<"\t 5.Acru (ac) \n";
    cout<<"\t 6.Hectari (ha)\n";
    cout<<"\t 7.Picior patrat (ft^2)\n";
    cout<<"\t 8.Meniu principal \n\n";
}
int alegeArieDin(string &arieDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrArie;
    meniuArie();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuArie();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrArie=1;
    else if (strcmp(nrUnitate,"2")==0) nrArie=2;
    else if (strcmp(nrUnitate,"3")==0) nrArie=3;
    else if (strcmp(nrUnitate,"4")==0) nrArie=4;
    else if (strcmp(nrUnitate,"5")==0) nrArie=5;
    else if (strcmp(nrUnitate,"6")==0) nrArie=6;
    else if (strcmp(nrUnitate,"7")==0) nrArie=7;
    else if (strcmp(nrUnitate,"8")==0) nrArie=8;
    string vecUnitati[8]={" m^2 "," cm^2 "," km^2 "," a "," ac "," ha "," ft^2 "};
    arieDin=vecUnitati[nrArie-1];
    return nrArie;
}
int alegeArieIn(string &arieIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrArie;
    meniuArie();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuArie();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrArie=1;
    else if (strcmp(nrUnitate,"2")==0) nrArie=2;
    else if (strcmp(nrUnitate,"3")==0) nrArie=3;
    else if (strcmp(nrUnitate,"4")==0) nrArie=4;
    else if (strcmp(nrUnitate,"5")==0) nrArie=5;
    else if (strcmp(nrUnitate,"6")==0) nrArie=6;
    else if (strcmp(nrUnitate,"7")==0) nrArie=7;
    else if (strcmp(nrUnitate,"8")==0) nrArie=8;
    string vecUnitati[8]={" m^2 "," cm^2 "," km^2 "," a "," ac "," ha "," ft^2 "};
    arieIn=vecUnitati[nrArie-1];
    return nrArie;
}
double metruPInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*10000;
    else if(nrUnitateIn==3) nr=nr*0.000001;
    else if(nrUnitateIn==4) nr=nr*0.01;
    else if(nrUnitateIn==5) nr=nr*0.00024;
    else if(nrUnitateIn==6) nr=nr*0.0001;
    else if(nrUnitateIn==7) nr=nr*10.764;
    return nr;
}
double unitateInMetruP(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/10000;
    else if(nrUnitateDin==3) nr=nr/0.000001;
    else if(nrUnitateDin==4) nr=nr/0.01;
    else if(nrUnitateDin==5) nr=nr/0.00024;
    else if(nrUnitateDin==6) nr=nr/0.0001;
    else if(nrUnitateDin==7) nr=nr/10.764;
    return nr;
}
int transformaArie()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string arieDin, arieIn;
din_nou:
    nrUnitateDin=alegeArieDin(arieDin);
    if(nrUnitateDin==8) return 0;
    nrUnitateIn=alegeArieIn(arieIn);
    if(nrUnitateIn==8) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<arieDin<<"  =  ";
    print( metruPInUnitate(unitateInMetruP(nrTransformare, nrUnitateDin), nrUnitateIn), 10 );
    cout<<arieIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///----------------------------------------------3. VOLUM------------------------------------------------------------------------------------



void meniuVolum()
{
    cout<<"\t VOLUM \n\n";
    cout<<"\t 1.Metru cub (m^3)\n";
    cout<<"\t 2.Decimetru cub (dm^3)\n";
    cout<<"\t 3.Litru (l)\n";
    cout<<"\t 4.Galon imperial (gal[uk])\n";
    cout<<"\t 5.Ceasca (cup) \n";
    cout<<"\t 6.Yard cub (yd^3)\n";
    cout<<"\t 7.Picior cub (ft^3)\n";
    cout<<"\t 8.Meniu principal \n\n";
}
int alegeVolumDin(string &volumDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrVolum;
    meniuVolum();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuVolum();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrVolum=1;
    else if (strcmp(nrUnitate,"2")==0) nrVolum=2;
    else if (strcmp(nrUnitate,"3")==0) nrVolum=3;
    else if (strcmp(nrUnitate,"4")==0) nrVolum=4;
    else if (strcmp(nrUnitate,"5")==0) nrVolum=5;
    else if (strcmp(nrUnitate,"6")==0) nrVolum=6;
    else if (strcmp(nrUnitate,"7")==0) nrVolum=7;
    else if (strcmp(nrUnitate,"8")==0) nrVolum=8;
    string vecUnitati[8]={" m^3 "," dm^3 "," l "," gal[uk] "," cup "," yd^3 "," ft^3 "};
    volumDin=vecUnitati[nrVolum-1];
    return nrVolum;
}
int alegeVolumIn(string &VolumIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrVolum;
    meniuVolum();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuVolum();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrVolum=1;
    else if (strcmp(nrUnitate,"2")==0) nrVolum=2;
    else if (strcmp(nrUnitate,"3")==0) nrVolum=3;
    else if (strcmp(nrUnitate,"4")==0) nrVolum=4;
    else if (strcmp(nrUnitate,"5")==0) nrVolum=5;
    else if (strcmp(nrUnitate,"6")==0) nrVolum=6;
    else if (strcmp(nrUnitate,"7")==0) nrVolum=7;
    else if (strcmp(nrUnitate,"8")==0) nrVolum=8;
    string vecUnitati[8]={" m^3 "," dm^3 "," l "," gal[uk] "," cup "," yd^3 "," ft^3 "};
    VolumIn=vecUnitati[nrVolum-1];
    return nrVolum;
}
double metruCInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*1000;
    else if(nrUnitateIn==3) nr=nr*1000;
    else if(nrUnitateIn==4) nr=nr*220;
    else if(nrUnitateIn==5) nr=nr*4000;
    else if(nrUnitateIn==6) nr=nr*1.308;
    else if(nrUnitateIn==7) nr=nr*35.31;
    return nr;
}
double unitateInMetruC(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/1000;
    else if(nrUnitateDin==3) nr=nr/1000;
    else if(nrUnitateDin==4) nr=nr/220;
    else if(nrUnitateDin==5) nr=nr/4000;
    else if(nrUnitateDin==6) nr=nr/1.308;
    else if(nrUnitateDin==7) nr=nr/35.31;
    return nr;
}
int transformaVolum()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string volumDin, volumIn;
din_nou:
    nrUnitateDin=alegeVolumDin(volumDin);
    if(nrUnitateDin==8) return 0;
    nrUnitateIn=alegeVolumIn(volumIn);
    if(nrUnitateIn==8) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<volumDin<<"  =  ";
    print( metruCInUnitate(unitateInMetruC(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<volumIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///------------------------------------------------4. TIMP------------------------------------------------------------------------------------



void meniuTimp()
{
    cout<<"\t TIMP \n\n";
    cout<<"\t 1.Secunda (s)\n";
    cout<<"\t 2.Minut (min)\n";
    cout<<"\t 3.Ora (h)\n";
    cout<<"\t 4.Zi (zile)\n";
    cout<<"\t 5.Saptamana (sap) \n";
    cout<<"\t 6.Luna (luni)\n";
    cout<<"\t 7.An (ani)\n";
    cout<<"\t 8.Meniu principal \n\n";
}
int alegeTimpDin(string &timpDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrTimp;
    meniuTimp();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuTimp();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrTimp=1;
    else if (strcmp(nrUnitate,"2")==0) nrTimp=2;
    else if (strcmp(nrUnitate,"3")==0) nrTimp=3;
    else if (strcmp(nrUnitate,"4")==0) nrTimp=4;
    else if (strcmp(nrUnitate,"5")==0) nrTimp=5;
    else if (strcmp(nrUnitate,"6")==0) nrTimp=6;
    else if (strcmp(nrUnitate,"7")==0) nrTimp=7;
    else if (strcmp(nrUnitate,"8")==0) nrTimp=8;
    string vecUnitati[8]={" s "," min "," h "," zile "," sap "," luni "," ani "};
    timpDin=vecUnitati[nrTimp-1];
    return nrTimp;
}
int alegeTimpIn(string &timpIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrTimp;
    meniuTimp();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 && strcmp(nrUnitate,"8")!=0 )
    {
        system("cls");
        titlu();
        meniuTimp();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 || strcmp(nrUnitate,"8")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrTimp=1;
    else if (strcmp(nrUnitate,"2")==0) nrTimp=2;
    else if (strcmp(nrUnitate,"3")==0) nrTimp=3;
    else if (strcmp(nrUnitate,"4")==0) nrTimp=4;
    else if (strcmp(nrUnitate,"5")==0) nrTimp=5;
    else if (strcmp(nrUnitate,"6")==0) nrTimp=6;
    else if (strcmp(nrUnitate,"7")==0) nrTimp=7;
    else if (strcmp(nrUnitate,"8")==0) nrTimp=8;
    string vecUnitati[8]={" s "," min "," h "," zile "," sap "," luni "," ani "};
    timpIn=vecUnitati[nrTimp-1];
    return nrTimp;
}
double ziInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr*86400;
    else if(nrUnitateIn==2) nr=nr*1440;
    else if(nrUnitateIn==3) nr=nr*24;
    else if(nrUnitateIn==4) nr=nr;
    else if(nrUnitateIn==5) nr=nr*0.1428571;
    else if(nrUnitateIn==6) nr=nr*0.0322;
    else if(nrUnitateIn==7) nr=nr*0.0027;
    return nr;
}
double unitateInZi(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr*86400;
    else if(nrUnitateDin==2) nr=nr/1440;
    else if(nrUnitateDin==3) nr=nr/24;
    else if(nrUnitateDin==4) nr=nr;
    else if(nrUnitateDin==5) nr=nr/0.1428;
    else if(nrUnitateDin==6) nr=nr/0.0322;
    else if(nrUnitateDin==7) nr=nr/0.002739;
    return nr;
}
int transformaTimp()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string timpDin, timpIn;
din_nou:
    nrUnitateDin=alegeTimpDin(timpDin);
    if(nrUnitateDin==8) return 0;
    nrUnitateIn=alegeTimpIn(timpIn);
    if(nrUnitateIn==8) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<timpDin<<"  =  ";
    print( ziInUnitate(unitateInZi(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<timpIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}




///-----------------------------------------------5. VITEZA----------------------------------------------------------------------------------



void meniuViteza()
{
    cout<<"\t VITEZA \n\n";
    cout<<"\t 1.Metru pe secunda (m/s)\n";
    cout<<"\t 2.Kilometru pe ora (km/h)\n";
    cout<<"\t 3.Metru pe ora (m/h)\n";
    cout<<"\t 4.Knot (knots)\n";
    cout<<"\t 5.Mila pe ora (mi/h) \n";
    cout<<"\t 6.Meniu principal \n\n";
}
int alegeVitezaDin(string &vitezaDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrViteza;
    meniuViteza();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 )
    {
        system("cls");
        titlu();
        meniuViteza();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrViteza=1;
    else if (strcmp(nrUnitate,"2")==0) nrViteza=2;
    else if (strcmp(nrUnitate,"3")==0) nrViteza=3;
    else if (strcmp(nrUnitate,"4")==0) nrViteza=4;
    else if (strcmp(nrUnitate,"5")==0) nrViteza=5;
    else if (strcmp(nrUnitate,"6")==0) nrViteza=6;
    string vecUnitati[6]={" m/s "," km/h "," m/h "," knots "," mi/h "};
    vitezaDin=vecUnitati[nrViteza-1];
    return nrViteza;
}
int alegeVitezaIn(string &vitezaIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrViteza;
    meniuViteza();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 )
    {
        system("cls");
        titlu();
        meniuViteza();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrViteza=1;
    else if (strcmp(nrUnitate,"2")==0) nrViteza=2;
    else if (strcmp(nrUnitate,"3")==0) nrViteza=3;
    else if (strcmp(nrUnitate,"4")==0) nrViteza=4;
    else if (strcmp(nrUnitate,"5")==0) nrViteza=5;
    else if (strcmp(nrUnitate,"6")==0) nrViteza=6;
    string vecUnitati[6]={" m/s "," km/h "," m/h "," knots "," mi/h "};
    vitezaIn=vecUnitati[nrViteza-1];
    return nrViteza;
}
double mpsInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*3.6;
    else if(nrUnitateIn==3) nr=nr*3600;
    else if(nrUnitateIn==4) nr=nr*1.9438;
    else if(nrUnitateIn==5) nr=nr*2.2369;
    return nr;
}
double unitateInMps(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/3.6;
    else if(nrUnitateDin==3) nr=nr/3600;
    else if(nrUnitateDin==4) nr=nr/1.9438;
    else if(nrUnitateDin==5) nr=nr/2.2369;
    return nr;
}
int transformaViteza()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string vitezaDin, vitezaIn;
din_nou:
    nrUnitateDin=alegeVitezaDin(vitezaDin);
    if(nrUnitateDin==6) return 0;
    nrUnitateIn=alegeVitezaIn(vitezaIn);
    if(nrUnitateIn==6) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<vitezaDin<<"  =  ";
    print( mpsInUnitate(unitateInMps(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<vitezaIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///----------------------------------------------6. TEMPERATURA-----------------------------------------------------------------------------------



void meniuTemp()
{
    cout<<"\t TEMPERATURA \n\n";
    cout<<"\t 1.Grade Celsius (grade C)\n";
    cout<<"\t 2.Grade Kelvin (grade K)\n";
    cout<<"\t 3.Grade Fahrenheit (grade F)\n";
    cout<<"\t 4.Grade Rankine (grade R)\n";
    cout<<"\t 5.Meniu principal \n\n";
}
int alegeTempDin(string &tempDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrTemp;
    meniuTemp();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 )
    {
        system("cls");
        titlu();
        meniuTemp();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrTemp=1;
    else if (strcmp(nrUnitate,"2")==0) nrTemp=2;
    else if (strcmp(nrUnitate,"3")==0) nrTemp=3;
    else if (strcmp(nrUnitate,"4")==0) nrTemp=4;
    else if (strcmp(nrUnitate,"5")==0) nrTemp=5;
    string vecUnitati[5]={" grade C "," grade K "," grade F "," grade R "};
    tempDin=vecUnitati[nrTemp-1];
    return nrTemp;
}
int alegeTempIn(string &tempIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrTemp;
    meniuTemp();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 )
    {
        system("cls");
        titlu();
        meniuTemp();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrTemp=1;
    else if (strcmp(nrUnitate,"2")==0) nrTemp=2;
    else if (strcmp(nrUnitate,"3")==0) nrTemp=3;
    else if (strcmp(nrUnitate,"4")==0) nrTemp=4;
    else if (strcmp(nrUnitate,"5")==0) nrTemp=5;
    string vecUnitati[5]={" grade C "," grade K "," grade F "," grade R "};
    tempIn=vecUnitati[nrTemp-1];
    return nrTemp;
}
double gradeCInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*274,15;
    else if(nrUnitateIn==3) nr=nr*33,8;
    else if(nrUnitateIn==4) nr=nr*493,47;
    return nr;
}
double unitateInGradeC(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/274,15;
    else if(nrUnitateDin==3) nr=nr/33,8;
    else if(nrUnitateDin==4) nr=nr/493,47;
    return nr;
}
int transformaTemp()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string tempDin, tempIn;
din_nou:
    nrUnitateDin=alegeTempDin(tempDin);
    if(nrUnitateDin==5) return 0;
    nrUnitateIn=alegeTempIn(tempIn);
    if(nrUnitateIn==5) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<tempDin<<"  =  ";
    print( gradeCInUnitate(unitateInGradeC(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<tempIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///------------------------------------------------7. MASA---------------------------------------------------------



void meniuMasa()
{
    cout<<"\t MASA \n\n";
    cout<<"\t 1.Kilogram (kg)\n";
    cout<<"\t 2.Gram (g)\n";
    cout<<"\t 3.Chintal (q)\n";
    cout<<"\t 4.Livra/Pound (lb)\n";
    cout<<"\t 5.Uncie (oz) \n";
    cout<<"\t 6.Carata (ct)\n";
    cout<<"\t 7.Meniu principal \n\n";
}
int alegeMasaDin(string &masaDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrMasa;
    meniuMasa();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuMasa();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrMasa=1;
    else if (strcmp(nrUnitate,"2")==0) nrMasa=2;
    else if (strcmp(nrUnitate,"3")==0) nrMasa=3;
    else if (strcmp(nrUnitate,"4")==0) nrMasa=4;
    else if (strcmp(nrUnitate,"5")==0) nrMasa=5;
    else if (strcmp(nrUnitate,"6")==0) nrMasa=6;
    else if (strcmp(nrUnitate,"7")==0) nrMasa=7;
    string vecUnitati[7]={" kg "," g "," q "," lb "," oz "," ct "};
    masaDin=vecUnitati[nrMasa-1];
    return nrMasa;
}
int alegeMasaIn(string &masaIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrMasa;
    meniuMasa();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuMasa();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrMasa=1;
    else if (strcmp(nrUnitate,"2")==0) nrMasa=2;
    else if (strcmp(nrUnitate,"3")==0) nrMasa=3;
    else if (strcmp(nrUnitate,"4")==0) nrMasa=4;
    else if (strcmp(nrUnitate,"5")==0) nrMasa=5;
    else if (strcmp(nrUnitate,"6")==0) nrMasa=6;
    else if (strcmp(nrUnitate,"7")==0) nrMasa=7;
    string vecUnitati[7]={" kg "," g "," q "," lb "," oz "," ct "};
    masaIn=vecUnitati[nrMasa-1];
    return nrMasa;
}
double kgInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*1000;
    else if(nrUnitateIn==3) nr=nr*0.01;
    else if(nrUnitateIn==4) nr=nr*2.2046;
    else if(nrUnitateIn==5) nr=nr*35.27;
    else if(nrUnitateIn==6) nr=nr*5000;
    return nr;
}
double unitateInKg(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/1000;
    else if(nrUnitateDin==3) nr=nr/0.01;
    else if(nrUnitateDin==4) nr=nr/2.2046;
    else if(nrUnitateDin==5) nr=nr/35.27;
    else if(nrUnitateDin==6) nr=nr/5000;
    return nr;
}
int transformaMasa()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string masaDin, masaIn;
din_nou:
    nrUnitateDin=alegeMasaDin(masaDin);
    if(nrUnitateDin==7) return 0;
    nrUnitateIn=alegeMasaIn(masaIn);
    if(nrUnitateIn==7) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<masaDin<<"  =  ";
    print( kgInUnitate(unitateInKg(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<masaIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///------------------------------------------------8. ENERGIE--------------------------------------------------------------



void meniuEnergie()
{
    cout<<"\t ENERGIE \n\n";
    cout<<"\t 1.Joule (J) \n";
    cout<<"\t 2.Calorie (cal) \n";
    cout<<"\t 3.Kilocalorie (kcal) \n";
    cout<<"\t 4.Erg (erg) \n";
    cout<<"\t 5.Metru-kilogram caloric (kgfm) \n";
    cout<<"\t 6.Wat-ora (W*h)\n";
    cout<<"\t 7.Meniu principal \n\n";
}
int alegeEnergieDin(string &energieDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrEnergie;
    meniuEnergie();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuEnergie();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrEnergie=1;
    else if (strcmp(nrUnitate,"2")==0) nrEnergie=2;
    else if (strcmp(nrUnitate,"3")==0) nrEnergie=3;
    else if (strcmp(nrUnitate,"4")==0) nrEnergie=4;
    else if (strcmp(nrUnitate,"5")==0) nrEnergie=5;
    else if (strcmp(nrUnitate,"6")==0) nrEnergie=6;
    else if (strcmp(nrUnitate,"7")==0) nrEnergie=7;
    string vecUnitati[7]={" J "," cal "," kcal "," erg "," kgfm "," W*h "};
    energieDin=vecUnitati[nrEnergie-1];
    return nrEnergie;
}
int alegeEnergieIn(string &energieIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrEnergie;
    meniuEnergie();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuEnergie();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrEnergie=1;
    else if (strcmp(nrUnitate,"2")==0) nrEnergie=2;
    else if (strcmp(nrUnitate,"3")==0) nrEnergie=3;
    else if (strcmp(nrUnitate,"4")==0) nrEnergie=4;
    else if (strcmp(nrUnitate,"5")==0) nrEnergie=5;
    else if (strcmp(nrUnitate,"6")==0) nrEnergie=6;
    else if (strcmp(nrUnitate,"7")==0) nrEnergie=7;
    string vecUnitati[7]={" J "," cal "," kcal "," erg "," kgfm "," W*h "};
    energieIn=vecUnitati[nrEnergie-1];
    return nrEnergie;
}
double JInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*0.2388;
    else if(nrUnitateIn==3) nr=nr*0.0002388;
    else if(nrUnitateIn==4) nr=nr*10000000;
    else if(nrUnitateIn==5) nr=nr*0.1026;
    else if(nrUnitateIn==6) nr=nr*0.0002777;
    return nr;
}
double unitateInJ(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/0.2388;
    else if(nrUnitateDin==3) nr=nr/0.0002388;
    else if(nrUnitateDin==4) nr=nr/10000000;
    else if(nrUnitateDin==5) nr=nr/0.1026;
    else if(nrUnitateDin==6) nr=nr/0.0002777;
    return nr;
}
int transformaEnergie()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string energieDin, energieIn;
din_nou:
    nrUnitateDin=alegeEnergieDin(energieDin);
    if(nrUnitateDin==7) return 0;
    nrUnitateIn=alegeEnergieIn(energieIn);
    if(nrUnitateIn==7) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<energieDin<<"  =  ";
    print( JInUnitate(unitateInJ(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<energieIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



///---------------------------------------------9. PRESIUNE-------------------------






void meniuPresiune()
{
    cout<<"\t PRESIUNE \n\n";
    cout<<"\t 1.Pascal (Newton pe metru patrat) (Pa) \n";
    cout<<"\t 2.Milibar (mbar) \n";
    cout<<"\t 3.Bar (bar) \n";
    cout<<"\t 4.Milimetru coloana de mercur (torr)(mmHg) \n";
    cout<<"\t 5.Milimetru coloana de apa (mmH2O) \n";
    cout<<"\t 6.Pound Square Inch (PSI)\n";
    cout<<"\t 7.Meniu principal \n\n";
}
int alegePresiuneDin(string &presiuneDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrPresiune;
    meniuPresiune();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuPresiune();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrPresiune=1;
    else if (strcmp(nrUnitate,"2")==0) nrPresiune=2;
    else if (strcmp(nrUnitate,"3")==0) nrPresiune=3;
    else if (strcmp(nrUnitate,"4")==0) nrPresiune=4;
    else if (strcmp(nrUnitate,"5")==0) nrPresiune=5;
    else if (strcmp(nrUnitate,"6")==0) nrPresiune=6;
    else if (strcmp(nrUnitate,"7")==0) nrPresiune=7;
    string vecUnitati[7]={" Pa "," mbar "," bar "," mmHg "," mmH2O "," PSI "};
    presiuneDin=vecUnitati[nrPresiune-1];
    return nrPresiune;
}
int alegePresiuneIn(string &presiuneIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrPresiune;
    meniuPresiune();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 && strcmp(nrUnitate,"7")!=0 )
    {
        system("cls");
        titlu();
        meniuPresiune();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ||
            strcmp(nrUnitate,"7")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrPresiune=1;
    else if (strcmp(nrUnitate,"2")==0) nrPresiune=2;
    else if (strcmp(nrUnitate,"3")==0) nrPresiune=3;
    else if (strcmp(nrUnitate,"4")==0) nrPresiune=4;
    else if (strcmp(nrUnitate,"5")==0) nrPresiune=5;
    else if (strcmp(nrUnitate,"6")==0) nrPresiune=6;
    else if (strcmp(nrUnitate,"7")==0) nrPresiune=7;
    string vecUnitati[7]={" Pa "," mbar "," bar "," mmHg "," mmH2O "," PSI "};
    presiuneIn=vecUnitati[nrPresiune-1];
    return nrPresiune;
}
double paInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*0.01;
    else if(nrUnitateIn==3) nr=nr*0.00001;
    else if(nrUnitateIn==4) nr=nr*0.0075;
    else if(nrUnitateIn==5) nr=nr*0.102;
    else if(nrUnitateIn==6) nr=nr*0.000145;
    return nr;
}
double unitateInPa(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/0.01;
    else if(nrUnitateDin==3) nr=nr/0.00001;
    else if(nrUnitateDin==4) nr=nr/0.0075;
    else if(nrUnitateDin==5) nr=nr/0.102;
    else if(nrUnitateDin==6) nr=nr/0.000145;
    return nr;
}
int transformaPresiune()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string presiuneDin, presiuneIn;
din_nou:
    nrUnitateDin=alegePresiuneDin(presiuneDin);
    if(nrUnitateDin==7) return 0;
    nrUnitateIn=alegePresiuneIn(presiuneIn);
    if(nrUnitateIn==7) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<presiuneDin<<"  =  ";
    print( paInUnitate(unitateInPa(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<presiuneIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}




///-------------------------------------------10. DENSITATE------------------------------------



void meniuDens()
{
    cout<<"\t DENSITATE \n\n";
    cout<<"\t 1.Kilogram pe metru cub (kg/m^3)\n";
    cout<<"\t 2.Kilogram pe litru / Tona pe metru cub (kg/l)\n";
    cout<<"\t 3.Gram pe metru cub (g/m^3)\n";
    cout<<"\t 4.Miligram pe metru cub (mg/m^3)\n";
    cout<<"\t 5.Uncie/yard cub (oz/yd^3)\n";
    cout<<"\t 6.Meniu principal \n\n";
}


int alegeDensDin(string &densDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrDens;
    meniuDens();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 )
    {
        system("cls");
        titlu();
        meniuDens();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrDens=1;
    else if (strcmp(nrUnitate,"2")==0) nrDens=2;
    else if (strcmp(nrUnitate,"3")==0) nrDens=3;
    else if (strcmp(nrUnitate,"4")==0) nrDens=4;
    else if (strcmp(nrUnitate,"5")==0) nrDens=5;
    else if (strcmp(nrUnitate,"6")==0) nrDens=6;
    string vecUnitati[6]={" kg/m^3 "," kg/l "," g/m^3 "," mg/m^3 "," oz/yd^3 "};
    densDin=vecUnitati[nrDens-1];
    return nrDens;
}
int alegeDensIn(string &densIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrDens;
    meniuDens();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0
            && strcmp(nrUnitate,"5")!=0 && strcmp(nrUnitate,"6")!=0 )
    {
        system("cls");
        titlu();
        meniuDens();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 || strcmp(nrUnitate,"5")==0 || strcmp(nrUnitate,"6")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrDens=1;
    else if (strcmp(nrUnitate,"2")==0) nrDens=2;
    else if (strcmp(nrUnitate,"3")==0) nrDens=3;
    else if (strcmp(nrUnitate,"4")==0) nrDens=4;
    else if (strcmp(nrUnitate,"5")==0) nrDens=5;
    else if (strcmp(nrUnitate,"6")==0) nrDens=6;
    string vecUnitati[6]={" kg/m^3 "," kg/l "," g/m^3 "," mg/m^3 "," oz/yd^3 "};
    densIn=vecUnitati[nrDens-1];
    return nrDens;
}
double DInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*0.001;
    else if(nrUnitateIn==3) nr=nr*1000;
    else if(nrUnitateIn==4) nr=nr*1000000;
    else if(nrUnitateIn==5) nr=nr*26.97;
    return nr;
}
double unitateInD(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/0.001;
    else if(nrUnitateDin==3) nr=nr/1000;
    else if(nrUnitateDin==4) nr=nr/1000000;
    else if(nrUnitateDin==5) nr=nr/26.97;
    return nr;
}
int transformaDens()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string densDin, densIn;
din_nou:
    nrUnitateDin=alegeDensDin(densDin);
    if(nrUnitateDin==6) return 0;
    nrUnitateIn=alegeDensIn(densIn);
    if(nrUnitateIn==6) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<densDin<<"  =  ";
    print( DInUnitate(unitateInD(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<densIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}






///-------------------------------------------------11. CONSUM COMBUSTIBIL----------------------------------





void meniuCons()
{
    cout<<"\t CONSUM COMBUSTIBIL \n\n";
    cout<<"\t 1.Litru la 100 de kilometri (l/100 km)\n";
    cout<<"\t 2.Mila pe galon (mi/gal)\n";
    cout<<"\t 3.Kilometru pe litru (km/l)\n";
    cout<<"\t 4.Meniu principal \n\n";
}
int alegeConsDin(string &consDin)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrCons;
    meniuCons();
    cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0 )
    {
        system("cls");
        titlu();
        meniuCons();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrCons=1;
    else if (strcmp(nrUnitate,"2")==0) nrCons=2;
    else if (strcmp(nrUnitate,"3")==0) nrCons=3;
    else if (strcmp(nrUnitate,"4")==0) nrCons=4;
    string vecUnitati[4]={" l/100 km "," mi/gal "," km/l "};
    consDin=vecUnitati[nrCons-1];
    return nrCons;
}
int alegeConsIn(string &consIn)
{
    system("cls");
    titlu();
    char nrUnitate[100];
    int nrCons;
    meniuCons();
    cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
    cin >> nrUnitate;

    while (strcmp(nrUnitate,"1")!=0 && strcmp(nrUnitate,"2")!=0  && strcmp(nrUnitate,"3")!=0 && strcmp(nrUnitate,"4")!=0 )
    {
        system("cls");
        titlu();
        meniuCons();
        cout << "Ati introdus o unitate inexistenta. \nAlegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin>>nrUnitate;
        if (strcmp(nrUnitate,"1")==0 || strcmp(nrUnitate,"2")==0  || strcmp(nrUnitate,"3")==0 ||
            strcmp(nrUnitate,"4")==0 ) break;
    }
    if (strcmp(nrUnitate,"1")==0) nrCons=1;
    else if (strcmp(nrUnitate,"2")==0) nrCons=2;
    else if (strcmp(nrUnitate,"3")==0) nrCons=3;
    else if (strcmp(nrUnitate,"4")==0) nrCons=4;
    string vecUnitati[4]={" l/100 km "," mi/gal "," km/l "};
    consIn=vecUnitati[nrCons-1];
    return nrCons;
}
double consInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*235.2;
    else if(nrUnitateIn==3) nr=nr*100;
    return nr;
}
double unitateInCons(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/235.2;
    else if(nrUnitateDin==3) nr=nr/100;
    return nr;
}
int transformaCons()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
    string consDin, consIn;
din_nou:
    nrUnitateDin=alegeConsDin(consDin);
    if(nrUnitateDin==4) return 0;
    nrUnitateIn=alegeConsIn(consIn);
    if(nrUnitateIn==4) return 0;
    citesteNrValid(nrTransformare);
    cout<<"\nConversia ceruta este : ";
    print(nrTransformare, 10);
    cout<<consDin<<"  =  ";
    print( consInUnitate(unitateInCons(nrTransformare, nrUnitateDin), nrUnitateIn), 10);
    cout<<consIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}

int main()
{
meniu:
    int nrCategorie=alegeCategoria();
    switch(nrCategorie)
    {
        case 1: transformaLungime(); goto meniu; break;
        case 2: transformaArie(); goto meniu; break;
        case 3: transformaVolum(); goto meniu; break;
        case 4: transformaTimp(); goto meniu; break;
        case 5: transformaViteza(); goto meniu; break;
        case 6: transformaTemp(); goto meniu; break;
        case 7: transformaMasa(); goto meniu; break;
        case 8: transformaEnergie(); goto meniu; break;
        case 9: transformaPresiune(); goto meniu; break;
        case 10: transformaDens(); goto meniu; break;
        case 11: transformaCons(); goto meniu; break;
        case 12: goto exit_convertor; break;
    }
exit_convertor:
    cout<<"\n\nApasati orice tasta pentru a iesi din aplicatie. \n\n";
    return 0;
}

///-----yeeey----------
