/*
 * essaiProjetJeuDeLaVie.c
 * 
 * Copyright 2017 BlackAllSun <attilavlh10@gmail.com>
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static int tab[7][7]={
		   {0,0,0,0,0,0,1},
		   {0,0,0,0,0,1,1},
		   {0,0,0,0,1,1,1},
		   {0,0,0,1,1,1,1},
		   {0,0,1,1,1,1,1},
		   {0,1,1,1,1,1,1},
		   {1,1,1,1,1,1,1}};

void affiche(int tab[][7], int n,int m);

char* couleurPieceStr(int i,int j){
	char* result="";
	if((tab[i-1][j] && tab[i+1][j] && tab[i][j-1] && tab[i][j+1])==1){
		if(tab[i][j]==1) {
			tab[i][j]=0;
			result="mort par etouffement";}
		else if(tab[i][j]==0) {
			tab[i][j]=1;
			result="mort par etouffement";}}
	else if((tab[i-1][j] && tab[i+1][j] && tab[i][j-1])==1)
			result= "aucun changement";
		else if((tab[i-1][j] && tab[i+1][j] && tab[i][j+1])==1)
			result= "aucun changement";
		else if((tab[i+1][j] && tab[i][j-1] && tab[i][j+1])==1)
			result= "aucun changement";
		else if((tab[i-1][j] && tab[i][j-1] && tab[i][j+1])==1)
			result= "aucun changement";
		else if((tab[i-1][j] && tab[i+1][j])==1){
			if(tab[i][j]==1) {tab[i][j]=1;result= "la case devient noire";}
			else if(tab[i][j]==0) {tab[i][j]=1;result= "la case devient noire";}}
		else if((tab[i+1][j] && tab[i][j-1])==1){
			if(tab[i][j]==1) {tab[i][j]=1;
				result= "la case devient noire";}
			else if(tab[i][j]==0) {tab[i][j]=1;
				result= "la case devient noire";}}
		else if((tab[i][j-1] && tab[i][j+1])==1){
			if(tab[i][j]==1) {tab[i][j]=1;result= "la case devient noire";}
			else if(tab[i][j]==0) {tab[i][j]=1;result= "la case devient noire";}}
		else if((tab[i-1][j] && tab[i][j+1])==1){
			if(tab[i][j]==1) {tab[i][j]=1;result= "la case devient noire";}
			else if(tab[i][j]==0) {tab[i][j]=1;result= "la case devient noire";}}
		else if((tab[i-1][j] ^ tab[i+1][j] ^ tab[i][j-1] ^ tab[i][j+1])==1){
			result= "aucun changement";}
	return result;}
int couleurPieceValue(int i,int j){

	int value=0;
	if((tab[i-1][j] && tab[i+1][j] && tab[i][j-1] && tab[i][j+1])==1){
		if(tab[i][j]==1) {
			tab[i][j]=0;value=0;}
		else if(tab[i][j]==0) {
			tab[i][j]=1;value=1;}}
	else if((tab[i-1][j] && tab[i+1][j] && tab[i][j-1])==1) ;
		else if((tab[i-1][j] && tab[i+1][j] && tab[i][j+1])==1) ;
		else if((tab[i+1][j] && tab[i][j-1] && tab[i][j+1])==1) ;
		else if((tab[i-1][j] && tab[i][j-1] && tab[i][j+1])==1) ;
		else if((tab[i-1][j] && tab[i+1][j])==1){
			if(tab[i][j]==1) {
				tab[i][j]=1;value=1;}
			else if(tab[i][j]==0) {
				tab[i][j]=1;value=1;}}
		else if((tab[i+1][j] && tab[i][j-1])==1){
			if(tab[i][j]==1) {
				tab[i][j]=1;value=1;}
			else if(tab[i][j]==0) {
				tab[i][j]=1;value=1;}}
		else if((tab[i][j-1] && tab[i][j+1])==1){
			if(tab[i][j]==1) {
				tab[i][j]=1;value=1;}
			else if(tab[i][j]==0) {
				tab[i][j]=1;value=1;}}
		else if((tab[i-1][j] && tab[i][j+1])==1){
			if(tab[i][j]==1) {
				tab[i][j]=1;value=1;}
			else if(tab[i][j]==0) {
				tab[i][j]=1;value=1;}}
		else if((tab[i-1][j] ^ tab[i+1][j] ^ tab[i][j-1] ^ tab[i][j+1])==1){}
	return value;}
	
int main(int argc, char **argv){
	affiche(tab,7,7);
	printf("\n");
	int result[7][7];
	for(int i=0;i<7;i++)
		for(int j=0;j<7;j++)
			result[i][j]=couleurPieceValue(i,j);
	affiche(result,7,7);
	return 0;}


void affiche(int tab[][7], int n,int m){
    for (int i=0; i< n; i++){
        for (int j=0; j< m; j++){
            printf("%d",tab[i][j]);}
        printf("\n");}}
