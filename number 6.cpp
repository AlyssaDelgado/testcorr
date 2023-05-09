#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct Menu
{
string jello;
string oranges;
string spam;
string oatmeal;
double price;
int amount;
};

int main()
{
  ifstream fin;

  fin.open("invoice.txt");

  fin>> jello >> oranges >> spam >> oatmeal; 
  
  double jelloTotal = .89 * 4;
  double orangesTotal = .25*6;
  double spamTotal = 3.25*2;
  double oatmealsTotal = 2 * 3;

    fin.close();
  
  cout << jello << "\t" << jellototal << "\n" << oranges << "\t"<< oranges total << "\n" << spam << "\t"<< spam total << "\n" << oatmeal << "\t" << oatmeal total; 

}
