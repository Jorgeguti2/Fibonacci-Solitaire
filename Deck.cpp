#include "Deck.h"
#include <iostream>
#include <array>

using namespace std;

Card store[52];
int top = 0;

Deck::Deck(){
	char suit_array[] = {'S', 'H', 'D', 'C'};
	char rank_array[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	
	int suit_counter = 0;
	int rank_counter = 0;

	for(int i=0; i < 52; i++){
		store[i].setCard(rank_array[rank_counter], suit_array[suit_counter]);
		rank_counter = rank_counter + 1;
		if((rank_counter % 13) == 0){
			suit_counter = suit_counter + 1;
			rank_counter = 0;
		}
	}
}

void Deck::display(){
	for(int i=0; i < 13; i++){
		store[i].display();
	}
	cout << endl;
	for(int j=13; j < 26; j++){
		store[j].display();
	}
	cout << endl;
	for(int k=26; k < 39; k++){
		store[k].display();
	}
	cout << endl;
	for(int l=39; l < 52; l++){
		store[l].display();
	}
	cout << endl;
}

void Deck::shuffle(){
	int n = 0;
	srand(time(0));
	while(n < 500){
		int x = rand()%52;
		int y = rand()%52;
		Card temp = store[x];
		store[x] = store[y];
		store[y] = temp;
		n = n + 1;
	}
	top = 0;
}

void Deck::refreshDeck(){

	char suit_array[] = {'S', 'H', 'D', 'C'};
        char rank_array[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  
        int suit_counter = 0;
        int rank_counter = 0;
  
        for(int i=0; i < 52; i++){
                store[i].setCard(rank_array[rank_counter], suit_array[suit_counter]);
                rank_counter = rank_counter + 1;
                if((rank_counter % 13) == 0){
                        suit_counter = suit_counter + 1;
                        rank_counter = 0;
                  }
          }
}

Card Deck::deal(){
	Card x = store[top];
	top = top + 1;
	return x;
}

bool Deck::isEmpty(){
	if(top == 52){
		return true;
	}
	else{
		return false;
	}
}

