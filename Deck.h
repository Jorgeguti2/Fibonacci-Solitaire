#include "Card.h"
class Deck
{
	public:
		Deck();
		void refreshDeck();
		Card deal();
		void shuffle();
		bool isEmpty();
		void display();
};

