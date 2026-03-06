#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int n;

    // 1. 获取要输入的数字个数并验证
    std::cout << "请输入你想输入的数字个数（2到10之间）: ";
    if (!(std::cin >> n) || n < 2 || n > 10) {
        std::cout << "输入无效！请确保输入的是 2 到 10 之间的整数。" << std::endl;
        return 1; // 异常退出
    }

    // 2. 获取具体数字并验证范围
    std::cout << "请输入 " << n << " 个数字（每个数字必须在 0 到 10 之间）:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        if (num < 0 || num > 10) {
            std::cout << "错误：数字 " << num << " 不在 0 到 10 的范围内。程序终止。" << std::endl;
            return 1;
        }
        numbers.push_back(num); // 将有效数字存入 vector
    }

    // 3. 打印原始数组
    std::cout << "\n原始数组: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 4. 删除第二个数字
    if (numbers.size() >= 2) {
        numbers.erase(numbers.begin() + 1);
    }

    // 5. 打印删除后的数组
    std::cout << "删除第二个数字后的数组: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}