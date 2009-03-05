/******************************************************************************
 ******************************************************************************
 * Copyright (c) 2007 MatchPoint, All rights reserved
 *
 * File    :    WinSocket.h
 * Desc    :    Socket declaration for windows
 * Author  :    nico
 *****************************************************************************/

#ifndef __WIN_SOCKET_H__
# define __WIN_SOCKET_H__

/*****************************************************************************/
/* Header files                                                              */
/*****************************************************************************/
# include <winsock.h>
# include "Socket.h"
/*****************************************************************************/
/* Default namespace                                                         */
/*****************************************************************************/
# include "DefaultNamespace.h"
DNSPACE_OPEN
/*****************************************************************************/
/* Types Definition                                                          */
/*****************************************************************************/
class WinSocket : public Socket
{
  /***************************************************************************/
  /* Methods                                                                 */
  /***************************************************************************/
public:
              WinSocket(SOCKET socket);
  virtual    ~WinSocket(void);
protected:
  void        systemRead(char* buf, unsigned nbrBytes, unsigned& readBytes); /* Non blocking call */
  void        systemWrite(const char* buf, unsigned nbrBytes, unsigned& writtenBytes); /* Non blocking call */

  /***************************************************************************/
  /* Properties                                                              */
  /***************************************************************************/
private:
  SOCKET      m_socket;
};
/*****************************************************************************/
/* Default namespace close                                                   */
/*****************************************************************************/
DNSPACE_CLOSE


#endif /* __FACTORY_H__ */