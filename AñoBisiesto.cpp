//Gabriel Cardenas//
#include <iostream>
using namespace std;

//Comprueba si el año en cuestion es bisisesto o no.
bool leapYear(int pYear){

    bool isLeap;
    if (pYear > 0 && pYear % 4 == 0 && pYear % 100 !=0 || pYear % 400 == 0)
        isLeap = true;
    else
        isLeap = false;
    return isLeap;
}

//Convierte la cadena/tesxto ingresado en letras minusculas.
void convert (string& s){
    for (int i = 0; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
}

//Proceso principal.
int main() {

    unsigned int year, days;
    string month;

//Pide el mes.
    cout << "mes: " << endl;
    getline(cin, month);
    convert(month);

//Pide el año.
    cout << "anio: " << endl;
    cin >> year;


  if (month == "febrero"){
      if (leapYear(year))
        days = 29;
      else
        days = 28;
  }
    else if (month == "abril" || month == "junio" || month == "septiembre" || month == "noviembre")
        days = 30;
    else if (month == "enero" || month == "marzo" || month == "mayo" || month == "julio" ||
             month == "agosto" || month == "octubre" || month == "diciembre")
        days = 31;
    else
        days = 0;

    if (days == 0)
        cout << "el mes ingresado es incorrecto." << endl;
    else
        cout << "el mes de " << month << " del anio " << year << " tiene " << days << " dias "<< endl;
  return 0;
}
