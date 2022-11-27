#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> num_str(const std::vector<std::string> &text)
{
    std::vector<std::string> answer;
    for (auto i : text)
    {
        for (auto j : i)
        {
            if (j >= '0' && j <= '9')
            {
                answer.push_back(i);
                break;
            }
        }
    }
    return answer;
}

int main()
{
    std::vector<std::string> answer = num_str({"Hello", "1student", "bestfrends4ever", "bye","1"});
    std::vector<std::string> result = {"1student", "bestfrends4ever","1"};
    if (answer == result)
    {
        std::cout<<"test passed"<<std::endl;
    }
    else
    {
        std::cout<<"test failed"<<std::endl;
    }
}