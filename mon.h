#pragma once

#include "systemc.h"
#include <iostream>

SC_MODULE(mon)
{
  sc_in<bool> A, B, F;
  sc_in<bool> Clk;

  void monitor()
  {
    cout << sc_time_stamp()  << "\t" << A << "\t" << B << "\t" << F <<endl;
  }
  SC_CTOR(mon)
  {
    cout << endl <<  "time\tA\tB\tF" << endl;
    SC_METHOD(monitor);
    sensitive << Clk.pos();
    dont_initialize();
  }
};
