#include "sectionC.h"

class store
{
private:
	vector<sectionC> items;
public:
	store() {}
	void addItem();
	int indexOf(string);
	void checkOut();
};