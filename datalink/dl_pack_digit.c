/* This software is Copyright 1996 by Karl R. Hakimian
 *
 * datazap: Linux version of Timex/Microsoft SDK for Timex datalink watches.
 *
 * Written by Karl R. Hakimian 10/3/96
 * 
 * Permission is hereby granted to copy, reproduce, redistribute or otherwise
 * use this software as long as: there is no monetary profit gained
 * specifically from the use or reproduction of this software, it is not
 * sold, rented, traded or otherwise marketed, and this copyright notice is
 * included prominently in any copy made. 
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. ANY USE OF THIS
 * SOFTWARE IS AT THE USER'S OWN RISK.
 *
 */

int
dl_pack_digit(c)
char c;
{
	int i;

	c = toupper(c);

	if (c >= '0' && c <= '9')
		return(c - '0');

	for (i = 0; i < 6; i++) {

		if (c == "CFHPW "[i])
			return(i + 10);

	}

	return(0xf);
}