#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<conio.h>

using namespace std;
/*
1. Metru
2. Picior(foot)
3. Tol(inch)
4. Kilomentru
5. Mila
6. Mila marina
7. Milimentru
8. Yarda
9. Centimetru
10. Exit
*/

void titlu()
{
    cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n";
    cout << "\t\t    |||||| ***     Convertor      *** ||||||| \n";
    cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n\n\n";
}

int alegeCategoria()
{
    system("cls");
    titlu();
    int nrInstructiune=0;
    while (nrInstructiune < 1 || nrInstructiune > 12)
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
        cout<<"\t 12.Exit\n";
        cout<<"Alegeti categoria de unitati: ";
        cin >> nrInstructiune;

        if (nrInstructiune == 1 || nrInstructiune == 2 || nrInstructiune==3
                || nrInstructiune==4 || nrInstructiune==5 || nrInstructiune==6
                || nrInstructiune==7 || nrInstructiune==8 || nrInstructiune==9
                || nrInstructiune==10 || nrInstructiune==11 || nrInstructiune==12) break;

        else
        {
            system("cls");
            titlu();
            cout << "Ati introdus o instructiune inexistenta. Alegeti din nou. \n";
        }
    }
    return nrInstructiune;
}

int alegeUnitateaDin()
{
    system("cls");
    titlu();
    int nrUnitate=0;
    while (nrUnitate < 1 || nrUnitate > 11)
    {
        cout<<"\t SUBMENIU UNITATE LUNGIME\n\n";
        cout<<"\t 1.Metru (m)\n";
        cout<<"\t 2.Picior (ft)\n";
        cout<<"\t 3.Inch (in) \n";
        cout<<"\t 4.Kilometru (km)\n";
        cout<<"\t 5.Mila (mi)\n";
        cout<<"\t 6.Mila marina (nmi)\n";
        cout<<"\t 7.Milimetru (mm)\n";
        cout<<"\t 8.Yarda (yd)\n";
        cout<<"\t 9.Centimetru (cm)\n";
        cout<<"\t 10.Meniu principal \n";
        cout<<"Alegeti instructiunea/unitatea de masura din care se va face transformarea: ";
        cin >> nrUnitate;

        if (nrUnitate == 1 || nrUnitate == 2 || nrUnitate==3
                || nrUnitate==4 || nrUnitate==5 || nrUnitate==6
                || nrUnitate==7 || nrUnitate==8 || nrUnitate==9
                || nrUnitate==10 || nrUnitate==11) break;

        else
        {
            system("cls");
            titlu();
            cout << "Ati introdus o unitate inexistenta. Alegeti din nou. \n";
        }
    }

    return nrUnitate;
}

int alegeUnitateaIn()
{
    system("cls");
    titlu();
    int nrUnitate=0;
    while (nrUnitate < 1 || nrUnitate > 11)
    {
        cout<<"\t SUBMENIU UNITATE LUNGIME\n\n";
        cout<<"\t 1.Metru (m)\n";
        cout<<"\t 2.Picior (ft)\n";
        cout<<"\t 3.Inch (in) \n";
        cout<<"\t 4.Kilometru (km)\n";
        cout<<"\t 5.Mila (mi)\n";
        cout<<"\t 6.Mila marina (nmi)\n";
        cout<<"\t 7.Milimetru (mm)\n";
        cout<<"\t 8.Yarda (yd)\n";
        cout<<"\t 9.Centimetru (cm)\n";
        cout<<"\t 10.Meniu principal \n";
        cout<<"Alegeti instructiunea/unitatea de masura in care se va face transformarea: ";
        cin >> nrUnitate;

        if (nrUnitate == 1 || nrUnitate == 2 || nrUnitate==3
                || nrUnitate==4 || nrUnitate==5 || nrUnitate==6
                || nrUnitate==7 || nrUnitate==8 || nrUnitate==9
                || nrUnitate==10 || nrUnitate==11) break;

        else
        {
            system("cls");
            titlu();
            cout << "Ati introdus o unitate inexistenta. Alegeti din nou. \n";
        }
    }

    return nrUnitate;
}



double metruInUnitate(double nr, int nrUnitateIn)
{
    if(nrUnitateIn==1) nr=nr;
    else if(nrUnitateIn==2) nr=nr*3.280839;
    else if(nrUnitateIn==3) nr=nr*39.37007;
    else if(nrUnitateIn==4) nr=nr*0.001;
    else if(nrUnitateIn==5) nr=nr*0.000621;
    else if(nrUnitateIn==6) nr=nr*0.000539;
    else if(nrUnitateIn==7) nr=nr*1000;
    else if(nrUnitateIn==8) nr=nr*1.093613;
    else if(nrUnitateIn==9) nr=nr*100;
    return nr;
}
double unitateInMetru(double nr, int nrUnitateDin)
{
    if(nrUnitateDin==1) nr=nr;
    else if(nrUnitateDin==2) nr=nr/3.280839;
    else if(nrUnitateDin==3) nr=nr/39.37007;
    else if(nrUnitateDin==4) nr=nr/0.001;
    else if(nrUnitateDin==5) nr=nr/0.000621;
    else if(nrUnitateDin==6) nr=nr/0.000539;
    else if(nrUnitateDin==7) nr=nr/1000;
    else if(nrUnitateDin==8) nr=nr/1.093613;
    else if(nrUnitateDin==9) nr=nr/100;
    printf ("\n in metri: %.10g \n", nr);
    cout<<nr<<"\n";
    return nr;
}
int main()
{
    int nrUnitateDin, nrUnitateIn;
    double nrTransformare;
meniu:
    int nrCategorie=alegeCategoria();
    switch(nrCategorie)
    {
    case 1:
        {
din_nou:
            nrUnitateDin=alegeUnitateaDin();
            if(nrUnitateDin==10) goto meniu;
            nrUnitateIn=alegeUnitateaIn();
            if(nrUnitateIn==10) goto meniu;
            cout<<"Dati valoarea pe care vreti sa o convertiti: ";
            cin>>nrTransformare;
            printf (" %.10g\n", metruInUnitate(unitateInMetru(nrTransformare, nrUnitateDin), nrUnitateIn));
            cout<<"Apasati enter pentru a incerca din nou. ";
            cin.get();
            cin.get();
            system("cls");
            titlu();
            goto din_nou;
            break;
        }
    case 12:
        {
            goto exit_convertor;
        }
    }
exit_convertor:
    cout<<"\n\n Apasati orice tasta pentru a iesi din aplicatie. \n\n";
    return 0;
}
