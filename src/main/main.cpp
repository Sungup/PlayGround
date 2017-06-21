#include <iostream>

#include <playground/ItemFactory.h>

using namespace std;
using namespace PLAYGROUND;

ostream& print_usage(ostream& os)
{
  return os;
}

ostream& print_items(ostream& os)
{
  os << "Support items: " << endl;
  for (auto& key : ItemFactory::GET_INSTANCE().keys())
    os << " * " << key << endl;

  return os;
}

int main(int argc, char* argv[])
{
  argc--; argv++;

  if (argc == 0) {
    cout << "No item selected." << endl;

    print_items(cout);

    return 0;
  }

  return ItemFactory::GET_INSTANCE().item("Sample")
                                    .run(argc, argv);
}