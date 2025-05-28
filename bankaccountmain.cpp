#include "BankAccount.h"
int main()
{
	BankAccount ba("NIK", "001", 1200);
	ba.print_info();
	ba.init_account("NIK SMITH", "", 1500);
	ba.print_info();
	ba.save(223.5);
	ba.print_info();
	return 0;
}