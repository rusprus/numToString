#include <iostream>
#include <cmath>
#include <map>


using namespace std;

long num;

int num_thousands;
int num_milions;
int num_miliards;

int hundreds;
int tens;
int units;

int numberGroups[4];

int z;

map <int, string> mp = {{1, "один"},{2, "два"},{3, "три"},{4, "четыре"},{5, "пять"},{6, "шесть"},{7, "семь"},{8, "восемь"},{9, "девять"},
                          {10, "десять"},{11, "одиннадцать"},{12, "двадцать"},{13, "тридцать"},{14, "четырнадцать"},{15, "пятьдесят"},
                          {16, "шестьдесят"},{17, "шестнадцать"},{18, "восемнадцать"},{19, "девятнадцать"},{20, "двадцать"},
                          {30, "тридцать"},{40, "сорок"},{50, "пятьдесят"},{60, "шестьдесят"},{70, "семдесят"},
                          {80, "восемьдесят"},{90, "девяность"},{100, "сто"},{200, "двести"},{300, "триста"},
                          {400, "четыреста"},{500, "пятьсот"},{600, "шестьсот"},{700, "семьсот"},{800, "восемьсот"},
                          {900, "девятьсот"},{1000, "тысяч"},{1000000, "миллион"},{1000000000, "миллиард"}};

int main()
{

while(z != ' '){
    cout << "Нажмите пробел для выхода " << endl;

    z = getchar();
    if(z == ' ') break;

    cin >> num;

    num_miliards = num / (int)pow(10,9);
    num = num % (int)pow(10, 9);
    num_milions = num / (int)pow(10,6);
    num = num % (int)pow(10, 6);
    num_thousands = num / (long)pow(10,3);
    num = num % (int)pow(10,3);


    numberGroups[0] = num_miliards;
    numberGroups[1] = num_milions;
    numberGroups[2] = num_thousands;
    numberGroups[3] = num;

    for (int i = 0; i < 4  ; i++) {

        hundreds = 100 * (int)(numberGroups[i] / 100);
        tens = numberGroups[i] % 100;
        tens = 10 * (int)(tens / 10);
        units = numberGroups[i] % 10;

        cout << mp[hundreds] << "  " << mp[tens] << "  " << mp[units] ;

        if(numberGroups[i] != 0 and i==0) cout << " миллиард " << endl;
        if(numberGroups[i] != 0 and i==1) cout << " миллионов " << endl;
        if(numberGroups[i] != 0 and i==2) cout << " тысяч " << endl;
    }

    cout << endl;

    };

    return 0;
}
