#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class klas
{
	ifstream file;
 public:
	    void wczytaj();
	    bool sprawdz(int);
		klas();



};
klas::klas()
{
	file.open("plik.txt");
}
void klas::wczytaj()
{
	vector <int> tablica;
	string x;
	int num;
	if(file.good())
	     {
		while(!file.eof())
               {
			 file>>x;
			 bitset<32> bin(x);
        num = bin.to_ulong();
        if(this->sprawdz(num))
        {
				tablica.push_back(num);
			}
		}
	}
	     cout<<tablica.size()<<endl;


	              cout<<"min "<< *min_element(tablica.begin(), tablica.end());

              	cout<<"max "<< *max_element(tablica.begin(), tablica.end());


}

bool klas::sprawdz(int x)
{
vector <int> dr_tablica;
for(int i=2; i<=x/2; i++)
    {
    int c=x;
    while(c%i==0)
    {
    c=c/i;
    dr_tablica.push_back(c);
    }
    
	}
if(dr_tablica.size()==2)
	{
       return true;
	}
	    else
        {
		return false;

		}
}

int main(int argc, char** argv)
{


	klas k1;

	k1.wczytaj();
	return 0;
}
