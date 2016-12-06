/*
 * primenumber.h
 *
 *  Created on: 06.12.2016
 *      Author: franz
 */

#ifndef PRIMENUMBER_H_
#define PRIMENUMBER_H_

#include <stdbool.h>

bool primenumber_int(int num);
bool primenumber_long(long num);
bool primenumber_long_long(long long num);

#define primenumber(num) _Generic((num), \
		int: primenumber_int, \
		long: primenumber_long, \
		long long: primenumber_long_long \
		)(num)



#endif /* PRIMENUMBER_H_ */
