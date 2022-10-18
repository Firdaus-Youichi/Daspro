#include <iostream>

using namespace std;

int main()
{
    int month, year;
    int first_day, ndays;
    cout << "enter the year: ";
    cin >> year;
    cout << endl;

    cout << "enter month: ";
    cin >> month;
    cout << endl;

    cout << "enter the 1st days of the year (1 for sunday, 2 for monday, etc.): ";
    cin >> first_day;


    switch(month){

    case 2:
        if ((year%400==0)|| (year%4==0 && year%100 !=0))
            ndays=29;
         else
            ndays=28;

            break;

            case 4:
            case 6:
            case 9:
            case 11:
            ndays=30;
            break;

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            ndays=31;
            break;

    }
    cout << endl << "sun\tMon\tTue\tWed\tThu\tFri\tSat\n";
    for (int i=1;i<first_day;i++){
        cout << "\t";
    }
    for (int j=1;j<=ndays;j++){
        if(((j+ first_day-2)%7==0&&(j!=1)))
        cout << endl;
        cout << j << "\t";
    }
    cout << endl << endl;
    return 0;









}
