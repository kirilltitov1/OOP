#include <iostream>


class Widget {
public:
	Widget(int par1, int par2) {
		this->i = par1;
		this->j = par2;
	}
	int get_i() const noexcept { return i; }
	int get_j() const noexcept { return j; }

private:
	int i = 0;
	int j = 0;
};


int main() {

//	Widget widget;
//	Widget widget = Widget();
Widget widget(1, 4);

	return widget.get_i();
}
