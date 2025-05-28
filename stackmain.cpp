#include "stack.h"
#include<cctype>
// 主函数，程序入口
int main()
{
	stack st;
	char ch;
	unsigned long po;
	// 提示用户输入操作选项
	cout << "Please enter A to add apurchase order,\n" << "P to process a PO.or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		// 检查输入是否为字母
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		// 添加采购订单
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
		// 处理采购订单
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

		// 重复提示用户输入操作选项
		cout << "Please enter A to add a purchase order,\n" << "P to process a PO ,or Q to quit.\n";



	}
	// 程序结束提示
	cout << "Bye.\n";
	return 0;
}
