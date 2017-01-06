#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<conio.h>
using namespace std;
void print(double toPrint, int precision)
{
    cout.precision(precision);
    cout << fixed;
    cout << toPrint;
}
void afisareConversie(double nrTransformare, char unitate1, double nrFinal, char unitate2)
{
    cout<<"Conversia ceruta este:  ";
    cout<<nrTransformare;
    cout<<" "<<unitate1<<" = ";
    printf("%.20g", nrFinal);
    cout<<" "<<unitate2<<"\n\n";
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
    return nrCategorie;
}
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
    cout<<"\nDati valoarea pe care vreti sa o convertiti: ";
    cin>>nrTransformare;
    cout<<"\nConversia ceruta:   ";
    print(nrTransformare, 15);
    cout<<lungimeDin<<"= ";
    printf ("%.20g", metruInUnitate(unitateInMetru(nrTransformare, nrUnitateDin), nrUnitateIn));
    cout<<lungimeIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}

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
    cout<<"Dati valoarea pe care vreti sa o convertiti: ";
    cin>>nrTransformare;
    cout<<"Conversia ceruta este : "<<fixed<<nrTransformare;
    cout<<arieDin<<"  =  ";
    printf ("%.20g", metruPInUnitate(unitateInMetruP(nrTransformare, nrUnitateDin), nrUnitateIn));
    cout<<arieIn<<"\n\n";
    cout<<"Apasati enter pentru a alege o alta optiune. ";
    cin.get();
    cin.get();
    system("cls");
    titlu();
    goto din_nou;
}



void meniuVolum()
{
    cout<<"\t VOLUM \n\n";
    cout<<"\t 1.Metru cub (m^3)\n";
    cout<<"\t 2.Decimetru cub (dm^3)\n";
    cout<<"\t 3.Litru (l)\n";
    cout<<"\t 4.Galon imperial(gal[uk])\n";
    cout<<"\t 5.Ceașcă (cup) \n";
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
    cout<<"Dati valoarea pe care vreti sa o convertiti: ";
    cin>>nrTransformare;
    cout<<"Conversia ceruta este : "<<fixed<<nrTransformare;
    cout<<volumDin<<"  =  ";
    printf ("%.10g", metruCInUnitate(unitateInMetruC(nrTransformare, nrUnitateDin), nrUnitateIn));
    cout<<volumIn<<"\n\n";
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
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12: goto exit_convertor;
    }
exit_convertor:
    cout<<"\n\n Apasati orice tasta pentru a iesi din aplicatie. \n\n";
    return 0;
}
