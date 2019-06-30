拷贝控制

拷贝构造函数: 第一个参数为自身类型的引用, 且其它的参数都有默认值的构造函数.

Tips:

	1. 拷贝构造函数的第一个参数通常是一个const引用.

	2. 拷贝构造函数在多种情况下都会被调用, 所以通常不应该是explicit的.

	(注意是通常, 即可以按需求自行选用)

合成拷贝构造函数: 会将参数的每个非static成员逐个拷贝到正在创建的对象中.

Tips:

	1. 对于类类型的成员, 会使用其拷贝构造函数来拷贝.

	2. 对于内置类型的成员则直接拷贝

	3. 对于数组, 会逐个拷贝其成员, 拷贝的规则如1,2

拷贝初始化和直接初始化的区别:

	直接初始化: 是直接进行函数匹配, 调用参数最匹配的构造函数
	
	拷贝初始化: 则是将右侧的运算对象拷贝到正在创建的对象中, 可能根据情况还会发生类型转换


会发生拷贝初始化的场景:

	1. 用=定义变量时

		string a = "123"; 

	2. 将一个对象作为实参传递给一个非引用类型的形参

		void func(string str);

		func("123");

	3. 从一个返回类型为非引用类型的函数返回一个对象

		string getString();

	4. 用花括号列表初始化一个数组中的元素或一个聚合类中的成员

		string strs[] = {"123", "687"};

		class Student {
			int age;
			string name;
		};

		Student student = {15, "123"};
	
	5. 初始化标准库容器或是调用其insert或push成员时, 容器会对其元素进行拷贝初始化, 使用emplace成员创建的函数都进行直接初始化

		vector<string> v_str;

		v_int.push("123");


Tips:

	拷贝初始化通常使用拷贝构造函数, 但也有可能使用移动构造函数来完成.

参数和返回值: 函数调用过程中, 具有非引用类型的参数要进行拷贝初始化. 当一个函数具有非引用的返回值时, 返回值会被用来初始

	      化调用方的结果.

Tips:

	拷贝构造函数被用来初始化非引用类类型的参数, 所以拷贝构造函数的参数必须是引用类型, 否则调用会失败, 因为它会无限

	循环下去.

拷贝初始化的限制: 使用一个explicit的构造函数来转换初始值的话, 如是该构造函数是直接初始化, 拷贝时必

		  须调用该构造函数显式构造, 再进行拷贝.

	vector<int> v1(10);	//	正确, 直接初始化

	vector<int> v2 = 10;	//	错误, 10不会被隐式转换成vector<int>, 因为其对应的构造函数是explicit的

Tips:

	使用一个explicit的构造函数对应的初始值, 不要期望它能被隐式转换.

编译器可以绕过拷贝构造函数: 在拷贝初始化过程中, 编译器可以(但不是必须)跳过拷贝/移动构造函数, 直接创建对象.

				string a = "999";	//	先隐式构造生成一个string对象, 再拷贝

				string a("999");	//	跳过拷贝, 直接进行构造
				
Tips:

	这只是编译器针对拷贝初始化的优化, 因此在

				string a = "999";

	这一步拷贝/移动构造函数必须是存在且可访问的(例如, 不能是private), 否则会报错.




	

