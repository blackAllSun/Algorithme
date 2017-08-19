/*
 * activitStatFichesRenseignementEleves.cpp
 * 
 */

#include <map>
#include <vector>
#include <iostream>
using namespace std;
map<string, int> tabSouhaitsOrient;
map<string, int> tabCodePostal;
map<string, int> tabTailleFamille;
vector<int> tabTempsDeParcourt;
map<string, int>::iterator itSouhaitsOrient;
map<string, int>::iterator itCodePostal;
map<string, int>::iterator itTailleFamille;
map<string, int>::reverse_iterator reverse_itSouhaitsOrient;
map<string, int>::reverse_iterator reverse_itCodePostal;
map<string, int>::reverse_iterator reverse_itTailleFamille;
void afficheMap(string nameOfTab,map<string,int> tab,map<string, int>::iterator it);

int main(){
	tabSouhaitsOrient["ES"]=74;
	tabSouhaitsOrient["L"]=42;
	tabSouhaitsOrient["S"]=50;
	tabSouhaitsOrient["STG"]=55;
	tabSouhaitsOrient["AUTRES"]=5;
	tabSouhaitsOrient["NSP"]=20;
	afficheMap("Filliaires ",tabSouhaitsOrient,itSouhaitsOrient);
	tabCodePostal["35330"]=9;
	tabCodePostal["35380"]=72;
	tabCodePostal["56140"]=24;
	tabCodePostal["56200"]=9;
	tabCodePostal["56380"]=90;
	tabCodePostal["56430"]=28;
	tabCodePostal["56803"]=6;
	tabCodePostal["56910"]=12;
	afficheMap("Code Postal ",tabCodePostal,itCodePostal);
	tabTailleFamille["3"]=10;
	tabTailleFamille["4"]=80;
	tabTailleFamille["5"]=105;
	tabTailleFamille["6"]=18;
	tabTailleFamille["7"]=21;
	tabTailleFamille["8"]=15;
	tabTailleFamille["9"]=6;
	tabTailleFamille["10"]=2;
	tabTailleFamille["12"]=4;
	afficheMap("Taille Famille ",tabTailleFamille,itTailleFamille);

	return 0;
}

void afficheMap(string nameOfTab,map<string,int> tab,map<string, int>::iterator it){
	cout<<"--------------------------------------------"<<endl;
		for(auto it = tab.begin() ; it != tab.end() ; ++it)	{
		cout <<nameOfTab << it->first << " Effectifs : " << it->second<<" Fréquence :" <<(float) (it->second)*100/250<<"%"<<endl;}
	}
