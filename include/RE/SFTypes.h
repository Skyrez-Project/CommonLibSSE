#pragma once

#undef min
#undef max

#include <limits>  // numeric_limits


namespace RE
{
	typedef std::size_t UPInt;
	constexpr UPInt UPINT_MAX = std::numeric_limits<UPInt>::max();
}
