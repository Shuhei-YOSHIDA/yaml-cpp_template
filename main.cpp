#include <iostream>
#include <istream>
#include <yaml-cpp/yaml.h>
using namespace std;

int main()
{
    cout << "Start----" << endl;
    try {
        YAML::Node config = YAML::LoadFile("sample.yaml");
        auto a = config["sample"][0]["A"]["type"].as<double>();
        cout << a << endl;
    }catch(YAML::Exception& e) {
        cout << e.what() << endl; 
    }
    cout << "finished----" << endl;
    return 0;
}
