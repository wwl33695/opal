/*
 * main.h
 *
 * PWLib application header file for DNSTest
 *
 * Copyright 2003 Equivalence
 *
 * $Revision: 20385 $
 * $Author: rjongbloed $
 * $Date: 2008-06-04 11:40:38 +0100 (Wed, 04 Jun 2008) $
 */

#ifndef _DNSTest_MAIN_H
#define _DNSTest_MAIN_H




class DNSTest : public PProcess
{
  PCLASSINFO(DNSTest, PProcess)

  public:
    DNSTest();
    void Main();
};


#endif  // _DNSTest_MAIN_H


// End of File ///////////////////////////////////////////////////////////////
