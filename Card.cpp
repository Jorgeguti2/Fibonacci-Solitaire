#include "Card.h"
#include <iostream>
using namespace std;

Card::Card(){
	rank = 'z';
	suit = 'z';
}

Card::Card(char r,char s){

	rank = r;
	suit = s;

}

void Card::setCard(char r,char s){
	rank = r;
	suit = s;
}


int Card::getValue(){

	if(rank == 'A'){
		return 1;
	}
	else if(rank == 'J' or rank == 'Q' or rank == 'K' or rank == 'T'){
		return 10;
	}
	else{
		int rank_Int = rank - '0';
		return rank_Int;
	}
}

void Card::display(){

	if(rank == 'T'){
		cout << 10 << suit << " ";
	}
	else{
		cout << rank << suit << " ";
	}

}

