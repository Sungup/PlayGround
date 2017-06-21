//
// Created by 文盛業 on 2017/06/21.
//

#include <playground/FactoryException.h>

#include "ItemFactory.h"

using namespace std;
using namespace PLAYGROUND;

//
// Class Variables
//
ItemFactory ItemFactory::INSTANCE_;

//
// Class Methods
//
ItemFactory& ItemFactory::GET_INSTANCE()
{
  return INSTANCE_;
}

//
// Object Methods
//
ItemFactory::ItemFactory()
//  : items_()
{ }

ItemFactory::~ItemFactory()
{ }

RunItem&
ItemFactory::item(const char *name) throw()
{
  if (items_.find(name) != items_.end())
    return items_.at(name);

  throw FactoryException(FactoryException::NO_ITEM);
}

void
ItemFactory::assign(const char *name, RunItem &item) throw()
{
  if (items_.find(name) == items_.end()) {
    keys_.push_back(string(name));
    items_.insert(RunItemPair(name, item));

    return;
  }

  throw FactoryException(FactoryException::DUPLICATED_NAME);
}

const ItemFactory::Keys&
ItemFactory::keys() const
{
  return keys_;
}