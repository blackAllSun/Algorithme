/*
 * essaiMatriceLeontief.cpp
 * 
 */


#include <iostream>
using namespace std;
float p[2]={500000,2500000};
float cF[2]={350000,600000};
float consomm[2][2]={
					{200000,50000},
					{150000,550000}};
float I[2][2]={{1,0},{0,1}};
float matrLeontief[2][2];
float C2F[2][2];
float p2[2];
int main(int argc, char **argv){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<consomm[i][j]<<"|";}cout<<endl;}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrLeontief[i][j]=consomm[i][j]/p[j];
			cout<<matrLeontief[i][j]<<"|";}cout<<endl;}
			
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrLeontief[i][j]=consomm[i][j]/p[j];
			cout<<consomm[i][j]<<"/"<<p[j]<<"|";}cout<<endl;}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrLeontief[i][j]=consomm[i][j]*p[j];
			cout<<matrLeontief[i][j]<<"|";}cout<<endl;}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrLeontief[i][j]=consomm[i][j]*p[j];
			cout<<consomm[i][j]<<"*"<<p[j]<<"|";}cout<<endl;}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			p2[j]=1.1*p[j];
			matrLeontief[i][j]=consomm[i][j]*p2[j];

			C2F[i][j]=(I[i][j]-matrLeontief[i][j])*p2[j];
			cout<<C2F[i][j]<<"|";}cout<<endl;}
	return 0;
}

