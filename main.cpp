#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;


class liczba_zad
{



  public:
      int liczba, licznik=0, suma;

    string zamien_liczbe_na_string(int str_to_number){

        stringstream strings;
        string strings2;


        strings<<str_to_number;
        strings>>strings2;


return strings2;

    }

    string odwroc_string(string liczbastr){
        string odwroc;
        for(int i=liczbastr.length()-1;i>=0; i--){
            odwroc+=liczbastr[i];
        }
return odwroc;

    }
    int zapisz_liczbe_odwrotna(string liczbastr){


int zamienstring;

istringstream(liczbastr)>>zamienstring;
return zamienstring;

    }
    int suma1(int a, int b){
suma = a+b;
   return suma;
   }

    bool czy_suma_jest_palindromem(int palindrom){

string convert_int_to_string = zamien_liczbe_na_string(suma);
string reversed_sum= odwroc_string(convert_int_to_string);

int fifon = reversed_sum.length()-1;
for(int i=0;i<reversed_sum.length()/2 ; i++){
    if(convert_int_to_string[i] == reversed_sum[fifon--]){
        licznik++;
        cout<<"no siema";
        return true;
    }
    else{

        return false;
    }
}





    }



};







class plik{

    public:
   liczba_zad liczba;

   ifstream plik1;
   ofstream plik2;

   plik();
   ~plik();

   void petla(){

       int number=liczba.liczba;
   while(!plik1.eof()){

    plik1>>number;
    string zamieniony_na_ten_fajny_super_string = liczba.zamien_liczbe_na_string(number);

    string znowu_zamieniony_na_ten_fajny_super_string= liczba.odwroc_string(zamieniony_na_ten_fajny_super_string);

    int teraz_jednak_wracamy_spowrotem_do_inta_bo_tak = liczba.zapisz_liczbe_odwrotna(znowu_zamieniony_na_ten_fajny_super_string);

    int teraz_juz_sumujemy_sobie_palindromy = liczba.suma1(number, teraz_jednak_wracamy_spowrotem_do_inta_bo_tak );

   plik2<<number<<" "<<teraz_jednak_wracamy_spowrotem_do_inta_bo_tak<<" "<<teraz_juz_sumujemy_sobie_palindromy<<" "<<liczba.czy_suma_jest_palindromem(teraz_juz_sumujemy_sobie_palindromy)<<endl;
   liczba.liczba = 0;
   }
   plik2<<"licznik: "<<liczba.licznik;


   }


  liczba_zad t1;



};

plik::plik(){
    plik1.open("plik1.txt");
    plik2.open("plik2.txt");


}

plik::~plik(){

    plik1.close();
    plik2.close();
}
int main()
{

plik t2;
t2.petla();

    return 0;
}
