#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <cmath>
using namespace std;

bool isFibo(int x){
	int s1 = (5 * x * x + 4);
	int s2 = (5 * x * x - 4);
	int s1_sqrt = sqrt(s1);
	int s2_sqrt = sqrt(s2);
	if((s1_sqrt * s1_sqrt) == s1 or (s2_sqrt * s2_sqrt) == s2){
		return true;
	}
	else{
		return false;
	}
}



int main(){

	Deck deck = Deck();

	cout << "Welcome to Fibonacci Solitaire!" << endl;
	cout << "1) New Deck" << endl;
	cout << "2) Display Deck" << endl;
	cout << "3) Shuffle Deck" << endl;
	cout << "4) Play Solitaire" << endl;
	cout << "5) Exit" << endl;
	int counter = 0;
	int user_Choice;
	cin >> user_Choice;
	while(user_Choice != 5){
		if(user_Choice == 1){
			Deck deck = Deck();
			cout << "1) New Deck" << endl;
			cout << "2) Display Deck" << endl;
			cout << "3) Shuffle Deck" << endl;
			cout << "4) Play Solitaire" << endl;
			cout << "5) Exit" << endl;
		}
		else if(user_Choice == 2){
			deck.display();
			cout << "1) New Deck" << endl;
			cout << "2) Display Deck" << endl;
			cout << "3) Shuffle Deck" << endl;
			cout << "4) Play Solitaire" << endl;
			cout << "5) Exit" << endl;
		}
		if(user_Choice == 3){
			Deck deck = Deck();
			deck.shuffle();
			cout << "1) New Deck" << endl;
			cout << "2) Display Deck" << endl;
			cout << "3) Shuffle Deck" << endl;
			cout << "4) Play Solitaire" << endl;
			cout << "5) Exit" << endl;
		}
		if(user_Choice == 4){
			counter = counter + 1;
			int piles = 1;
			int sum = 0;
			for(int i=0; i < 52; i++){
				Card top = deck.deal();
				sum = sum + top.getValue();
				top.display();
				if(isFibo(sum)){
					piles = piles + 1;
					cout << "Fibo: " << sum << endl;
					sum = 0;
					if(i == 51){
						int correct_Piles = piles - 1;
						cout << "Winner in " << correct_Piles << " piles!" << endl;
						cout << "games played: " << counter << endl;
						counter = 0;
					}
				}
			}
			if(!isFibo(sum)){
				cout << "Last hand value: " << sum << endl;
				cout << "Loser in " << piles << " piles!" << endl;
			}
			cout << "1) New Deck" << endl;
			cout << "2) Display Deck" << endl;
			cout << "3) Shuffle Deck" << endl;
			cout << "4) Play Solitaire" << endl;
			cout << "5) Exit" << endl;
		}
		cin >> user_Choice; 
	}

	return 0;

}

