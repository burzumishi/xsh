/*
   ___________________________________________________________________________
  //            /                                                            \\
 [|_____________\     *****     *****     *************   *****     *****     |]
 [|   \\._.//   /     ******   ******    *************    *****     *****     |]
 [|   (0...0)   \     ******* *******   *************     *****     *****     |]
 [|    ).:.(    /      *************    ******            *****     *****     |]
 [|    {o o}    \       ***********     **************    ***************     |]
 [|   / ' ' \   /       ***********      **************   ***************     |]
 [|-'- /   \ -`-\      *************             ******   *****     *****     |]
 [|   .VxvxV.   /     ******* *******     *************   *****     *****     |]
 [|_____________\     ******   ******    *************    *****     *****     |]
 [|             /     *****     *****   *************     *****     *****     |]
  \\____________\____________________________________________________________//
     |                                                                     |
     |                      --{ Uni[X] [S]hell }--                         |
     |_____________________________________________________________________|
     |                                                                     |
     |                      -*- Gettext Support -*-                        |
     |_____________________________________________________________________|
     |                                                                     |
     |            Read "doc/gettext.txt" & "doc/i18n.txt" files.           |
     |_____________________________________________________________________|
    //                                                                     \\
   [|  XSH 2.0 © 2015 Antonio Cao (@burzumishi)                             |]
    \\_____________________________________________________________________//
*/

#include <sys/types.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#include "libxsh.h"

/* Get server locale from env LANG */
int
i18n_getlocale (void)
{
	Xlocale = getenv("LANG");
}

/* Set server locale */
int
i18n_setlocale (void)
{
  /* Initialize Gettext support */
  setlocale (LC_ALL, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

	i18n_getlocale( );

	if (!Xlocale) {
		  printf("Environment variable <LANG> is not set!\n");
	} else {
		  printf("Environment variable <LANG> is set to: %s\n", Xlocale);
	}
}

