#include <iostream>
#include <fstream>
#include <boost/shared_ptr.hpp>
#include <boost/regex.hpp>

class TestClass
{
  public:
    TestClass() : x_(0)
    {}

    ~TestClass()
    {}

    int getX()
    {
      return x_;
    }

    void setX(int x)
    {
      x_ = x;
    }
  private:
    int x_;
};

int main()
{
  std::cout << "Hello World!!!" << std::endl;

  boost::shared_ptr<TestClass> one(new TestClass());

  std::cout << one->getX() << std::endl;
  one->setX(5);
  std::cout << one->getX() << std::endl;

  std::string line;
  boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );

  std::ifstream input("jayne.txt");
  while (!input.eof())
  {
    std::getline(input, line);
    boost::smatch matches;
    if (boost::regex_match(line, matches, pat))
    {
      std::cout << matches[2] << std::endl;
    }
  }

  return 0;
}
