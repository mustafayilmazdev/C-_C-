#ifndef WAQ_H
#define WAQ_H
#include <iostream>
using namespace std;

class calisan {

	int gizli;
public:
	calisan() {
		gizli = 5;

		cout << "Turetilen bunu yaratti" << endl;
	}

	int ulaslenamk;
	void yazlenamk();

};

class calislenamk :public calisan
{
	

public :
	int x;


};


#endif //!WAQ_H