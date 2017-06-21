//
// Created by 文盛業 on 2017/06/21.
//

#include <iostream>

#include "SampleItem.h"

using namespace std;
using namespace PLAYGROUND;

SIGNUP_ITEM(SampleItem);

SampleItem::SampleItem()
  : RunItem("Sample")
{ }

SampleItem::~SampleItem()
{ }

int SampleItem::run(int, char* [])
{
  out << "Hello! PlayGround!!" << endl;
  err << "This is the error output for the PlayGround" << endl;

  return 0;
}