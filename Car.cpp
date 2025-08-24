/* Tác giả: Phạm Thiên Phúc
Mssv: 21110075
Mô tả: Xây dựng một class Car với các thuộc tính như brand và year. Class này có phương thức để hiển thị thông tin về xe.
*/

#include <iostream>

using namespace std;

class Car // Tạo một class tên Car
{
public:
	string brand; // Thương hiệu xe
	int year; // Năm sản xuất của xe

	void displayInfo() // Phương thức hiển thị thông tin xe
	{
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
	}
};

int main()
{
	Car car1; // Tạo một đối tượng Car có tên là car1
	
	car1.brand = "Toyota"; // Gán thương hiệu Toyota cho car1
	car1.year = 2020; // Gán năm sản xuất 2020 cho car1
	
	car1.displayInfo(); // Gọi phương thức để hiển thị thông tin xe car1

	return 0;

}

