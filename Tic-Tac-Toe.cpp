#include <iostream>
using namespace std;

int start;

    enum Pionek{Kolko = 1, Krzyzyk = 2};
    Pionek KK;

    enum PolePlanszy{PPKK_0 = 1, PPKK_X = 2, PPKK_Puste = 0};
    PolePlanszy Pole1 = PPKK_Puste;
    PolePlanszy Pole2 = PPKK_Puste;
    PolePlanszy Pole3 = PPKK_Puste;
    PolePlanszy Pole4 = PPKK_Puste;
    PolePlanszy Pole5 = PPKK_Puste;
    PolePlanszy Pole6 = PPKK_Puste;
    PolePlanszy Pole7 = PPKK_Puste;
    PolePlanszy Pole8 = PPKK_Puste;
    PolePlanszy Pole9 = PPKK_Puste;

void pionek_pole1()
{
    int pionek;
    cout << endl;
    cout << "Wybrano pierwsze pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole1 == PPKK_Puste)
            {
                Pole1 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole1 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole1 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole1 == PPKK_Puste)
            {
                Pole1 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole1 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole1 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}

void pionek_pole2()
{
    int pionek;
    cout << endl;
    cout << "Wybrano drugie pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole2 == PPKK_Puste)
            {
                Pole2 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole2 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole2 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole2 == PPKK_Puste)
            {
                Pole2 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole2 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole2 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kolko lub krzyzyk.\n";
            break;
    }
}

void pionek_pole3()
{
    int pionek;
    cout << endl;
    cout << "Wybrano trzecie pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole3 == PPKK_Puste)
            {
                Pole3 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole1 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole1 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole3 == PPKK_Puste)
            {
                Pole3 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole3 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole3 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}

void pionek_pole4()
{
    int pionek;
    cout << endl;
    cout << "Wybrano czwarte pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole4 == PPKK_Puste)
            {
                Pole4 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole4 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole4 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole4 == PPKK_Puste)
            {
                Pole4 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole4 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole4 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}
void pionek_pole5()
{
    int pionek;
    cout << endl;
    cout << "Wybrano piate pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole5 == PPKK_Puste)
            {
                Pole5 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole5 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole5 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole5 == PPKK_Puste)
            {
                Pole5 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole5 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole5 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}
void pionek_pole6()
{
    int pionek;
    cout << endl;
    cout << "Wybrano szoste pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole6 == PPKK_Puste)
            {
                Pole6 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole6 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole6 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole6 == PPKK_Puste)
            {
                Pole6 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole6 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole6 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}
void pionek_pole7()
{
    int pionek;
    cout << endl;
    cout << "Wybrano siodme pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole7 == PPKK_Puste)
            {
                Pole7 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole7 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole7 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole7 == PPKK_Puste)
            {
                Pole7 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole7 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole7 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}
void pionek_pole8()
{
    int pionek;
    cout << endl;
    cout << "Wybrano osme pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole8 == PPKK_Puste)
            {
                Pole8 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole8 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole8== PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole8 == PPKK_Puste)
            {
                Pole8 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole8 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole8 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}
void pionek_pole9()
{
    int pionek;
    cout << endl;
    cout << "Wybrano dziewiate pole.\n";
    cout << "Wcisnij 1, by wybrac kolko.\n";
    cout << "Wcisnij 2, by wybrac krzyzyk.\n";
    cout << "Wybieram: ";
    cin >> pionek;

    switch (pionek)
    {
        case 1:
            if (Pole9 == PPKK_Puste)
            {
                Pole9 = PPKK_0;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole9 == PPKK_0)
            {cout << "Pole zajete przez kolko. Wybierz inne pole.\n";}
            else if (Pole9 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        case 2:
            if (Pole9 == PPKK_Puste)
            {
                Pole9 = PPKK_X;
                cout << "Wykonano ruch. Kolej nastepnego gracza.\n";
            }
            else if (Pole9 == PPKK_0)
            {cout << "Pole zajte przez kolko. Wybierz inne pole.\n";}
            else if (Pole9 == PPKK_X)
            {cout << "Pole zajete przez krzyzyk. Wybierz inne pole.\n";}
            break;
        default:
            cout << "Pionek nie istnieje. Wybierz kzyzyk lub kolko.\n";
            break;
    }
}

void weryfikacja()
{
    cout << "STAN GRY" << '\t' << "PODGLAD NUMEROW PLANSZY" << endl;
    cout << Pole1 << " | " << Pole2 << " | " << Pole3 << '\t' << "1 | 2 | 3 " << endl;
    cout << Pole4 << " | " << Pole5 << " | " << Pole6 << '\t' << "4 | 5 | 6 " << endl;
    cout << Pole7 << " | " << Pole8 << " | " << Pole9 << '\t' << "7 | 8 | 9 " << endl;
}

int main()
{
    int pole;
    cout << "K O L K O  I  K R Z Y Z Y K" <<endl;
    cout << "Witamy w grze w kolko i krzyzyk." << endl;
    cout << "W tej grze bedziecie na przemian stawiac kolko lub krzyzyk tak, by zajac trzy pola w jednej linii (pionowej, poziomej lub ukosnej)." << endl;
    cout << "Wygrywa gracz, ktory jako pierwszy ulozy znaki w jednej linii." << endl;
    cout << "Ustalcie, kto gra kolkiem a kto krzyzykiem, oraz kto gra jako pierwszy a nastepnie: " << endl;
    cout << endl;
    cout << "Wcisnij 99, by rozpoczac gre.\n";
    cout << "Wcisnij 98, by wyjsc.\n";
    cout << "Wybieram: ";
    cin >> start;

        while(start == 99)
        {
            cout << endl;
            int w1 = Pole1 + Pole2 + Pole3;
            int w2 = Pole4 + Pole5 + Pole6;
            int w3 = Pole7 + Pole8 + Pole9;
            int w4 = Pole1 + Pole4 + Pole7;
            int w5 = Pole2 + Pole5 + Pole8;
            int w6 = Pole3 + Pole6 + Pole9;
            int w7 = Pole1 + Pole5 + Pole9;
            int w8 = Pole3 + Pole5 + Pole7;

            weryfikacja();
            if ((Pole1 == 1) && (Pole2 == 1) && (Pole3 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole4 == 1) && (Pole5 == 1) && (Pole6 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole7 == 1) && (Pole8 == 1) && (Pole9 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole1 == 1) && (Pole4 == 1) && (Pole7 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole2 == 1) && (Pole5 == 1) && (Pole8 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if((Pole3 == 1) && (Pole6 == 1) && (Pole9 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole1 == 1) && (Pole5 == 1) && (Pole9 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole3 == 1) && (Pole5 == 1) && (Pole7 == 1))
            {cout << "Wygraly kolka.\n"; break;}
            else if ((Pole1 == 2) && (Pole2 == 2) && (Pole3 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole4 == 2) && (Pole5 == 2) && (Pole6 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole7 == 2) && (Pole8 == 2) && (Pole9 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole1 == 2) && (Pole4 == 2) && (Pole7 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole2 == 2) && (Pole5 == 2) && (Pole8 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if((Pole3 == 2) && (Pole6 == 2) && (Pole9 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole1 == 2) && (Pole5 == 2) && (Pole9 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole3 == 2) && (Pole5 == 2) && (Pole7 == 2))
            {cout << "Wygraly krzyzyki.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w1 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w2 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w3 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w4 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w5 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w6 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w7 == 5 || 4))
            {cout << "Remis.\n"; break;}
            else if ((Pole1 && Pole2 && Pole3 && Pole4 && Pole5 && Pole6 && Pole7 && Pole8 && Pole9 != PPKK_Puste) && (w8 == 5 || 4))
            {cout << "Remis.\n"; break;}

            cout << "Wybierz pole, na ktorym ma byc postawiony pionek 1-9: ";
            cin >> pole;

            switch(pole)
            {
            case 1:
                pionek_pole1();
                break;
            case 2:
                pionek_pole2();
                break;
            case 3:
                pionek_pole3();
                break;
            case 4:
                pionek_pole4();
                break;
            case 5:
                pionek_pole5();
                break;
            case 6:
                pionek_pole6();
                break;
            case 7:
                pionek_pole7();
                break;
            case 8:
                pionek_pole8();
                break;
            case 9:
                pionek_pole9();
                break;
            default:
                cout << "Pole nie istnieje. Wybierz pole od 1-9.\n";
                break;
            }
        }

        while (start == 98)
        {
            cout << "Wybrales wyjscie z programu. Do zobaczenia :)\n";
            break;
        }
    cin.sync();
    cin.get();
}

