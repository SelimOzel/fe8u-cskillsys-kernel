#include <common-chax.h>

#include "PortraitHeight.h"

LYN_REPLACE_CHECK(ShouldFaceBeRaised);
s8 ShouldFaceBeRaised(int fid)
{
	const u8 *it;

	for (it = gpHighPortraitFidLut; *it; it++)
		if (*it == fid)
			return true;

	return false;
}
