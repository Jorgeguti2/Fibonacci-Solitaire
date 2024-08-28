#ifndef CARD_H
#define CARD_H
class Card
{
	private:
		char suit;
		char rank;
	public:
		Card();
		Card(char,char);
		void setCard(char,char);
		int getValue();
		void display();

};
#endif

