#include "stack.h"
#include<cctype>
// ���������������
int main()
{
	stack st;
	char ch;
	unsigned long po;
	// ��ʾ�û��������ѡ��
	cout << "Please enter A to add apurchase order,\n" << "P to process a PO.or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		// ��������Ƿ�Ϊ��ĸ
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		// ��Ӳɹ�����
		case 'A':
		case 'a':cout << "Enter a PO number to add:";
			cin >> po;
			if (st.isfull())
			{
				cout << "stack already full\n";
			}
			else
				st.push(po);
			break;
		// ����ɹ�����
		case 'P':
		case 'p':
			if (st.isenputy())
				cout << "stack already empty\n";
			else {
				st.pop(po);
				cout << "PO #" << po << " popped\n";
				
			}
			break;
		default:
			break;
		}

		// �ظ���ʾ�û��������ѡ��
		cout << "Please enter A to add a purchase order,\n" << "P to process a PO ,or Q to quit.\n";



	}
	// ���������ʾ
	cout << "Bye.\n";
	return 0;
}
