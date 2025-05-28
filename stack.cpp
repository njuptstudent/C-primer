#include "stack.h"

stack::stack()
{
	top = 0;
}

bool stack::isenputy()
{
	return top==0;
}

bool stack::isfull()
{
	return top==MAX;
}

bool stack::push(const Item& item)
{
	if (top<MAX)
	{
		items[top++] = item;
		return true;
	}
	else {
		return false;
	}
	
}

bool stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
			return true;
	}
	else
		return false;
}

