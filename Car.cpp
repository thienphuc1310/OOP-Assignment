/* Tác giả: Phạm Thiên Phúc
Mssv: 21110075
Mô tả: Xây dựng một class Car với các thuộc tính như brand và year. Class này có phương thức để hiển thị thông tin về xe.
*/

#include <iostream>

using namespace std;

// Class Car dùng để lưu trữ thông tin của xe
class Car
{
public:
	string brand; // Thương hiệu xe
	int year; // Năm sản xuất của xe

	// Phương thức hiển thị thông tin xe (thương hiệu và năm sản xuất)
	void displayInfo()
	{
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
	}
};

int main()
{
	// Tạo một đối tượng Car có tên là car1
	Car car1;

	// Gán giá trị cho các thuộc tính của car1
	car1.brand = "Toyota";
	car1.year = 2020;

	// Gọi phương thức để hiển thị thông tin xe car1
	car1.displayInfo();

	return 0;

}


