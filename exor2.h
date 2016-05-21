#pragma once

#include "systemc.h"
#include "nand2.h"
SC_MODULE(exor2)          // declare nand2 sc_module
{
  sc_in<bool> A, B;       // input signal ports
  sc_out<bool> F;         // output signal ports
  sc_signal<bool> s1,s2,s3;

//  void do_exor2()         // a C++ function
//  {
//    F.write( A.read() != B.read() );
	// TODO: put your implementation here

//  }

  SC_CTOR(exor2)          // constructor for nand2
  {
    nand2* m1 = new nand2("m1");
    m1->A(A);
    m1->B(B);
    m1->F(s1);
    nand2* m2 = new nand2("m2");
    m2->A(A);
    m2->B(s1);
    m2->F(s2);
    nand2* m3 = new nand2("m3");
    m3->A(s1);
    m3->B(B);
    m3->F(s3);
    nand2* m4 = new nand2("m4");
    m4->A(s2);
    m4->B(s3);
    m4->F(F);

//    SC_METHOD(do_exor2);  // register do_nand2 with kernel
//    sensitive << A << B;  // sensitivity list
  }
};
// TODO: implement EXOR module here using only nand2 components
// inputs: bool A, B
// output bool F

