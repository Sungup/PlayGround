//
// Created by 文盛業 on 2017/06/21.
//

#include <playground/ItemFactory.h>

using namespace std;
using namespace PLAYGROUND;

RunItem::RunItem(const char* name)
  : out(cout),
    err(cerr)
{
  // Assign the item into factory
  ItemFactory::GET_INSTANCE().assign(name, *this);
}

RunItem::~RunItem()
{ }