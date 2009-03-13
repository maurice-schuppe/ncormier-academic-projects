/******************************************************************************
 ******************************************************************************
 * Copyright (c) 2007 MatchPoint, All rights reserved
 *
 * File    :    Exception.h
 * Desc    :    
 * Author  :    nico
 *****************************************************************************/

#ifndef __EXCEPTION_H__
# define __EXCEPTION_H__

/*****************************************************************************/
/* Default namespace                                                         */
/*****************************************************************************/
# include "DefaultNamespace.h"
DNSPACE_OPEN
/*****************************************************************************/
/* Types Definition                                                          */
/*****************************************************************************/
class Exception
{
  /***************************************************************************/
  /* Methods                                                                 */
  /***************************************************************************/
public:
              Exception(const char* msg);
  virtual    ~Exception(void);
  const char* Description(void) const;
  /***************************************************************************/
  /* Properties                                                              */
  /***************************************************************************/
  char*   m_what;
};
/*****************************************************************************/
/* Default namespace close                                                   */
/*****************************************************************************/
DNSPACE_CLOSE

#endif /* __EXCEPTION_H__ */