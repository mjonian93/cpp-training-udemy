//Section 17
//Challenge

#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data;
public:
    Test(): data {0} {std::cout << "\nTest constructor (" << data << ")" << std::endl;}
    Test(int data): data {data} {std::cout << "\nTest constructor (" << data << ")" << std::endl;}
    int get_data () const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl;}
};

//Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num) {
    for(auto i {0}; i<num; i++) {
        std::cout << "Enter a value to initialize the Test object number " << (i+1) << ": ";
        int value {};
        std::cin >> value;
        vec.push_back(std::make_shared<Test> (value));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec) {
    std::cout << "Displaying data: " << std::endl;
    for (auto t : vec)
        std::cout << t->get_data() << std::endl;
}

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}