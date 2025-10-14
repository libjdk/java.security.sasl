#ifndef _com_sun_security_sasl_util_PolicyUtils_h_
#define _com_sun_security_sasl_util_PolicyUtils_h_
//$ class com.sun.security.sasl.util.PolicyUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FORWARD_SECRECY")
#undef FORWARD_SECRECY
#pragma push_macro("NOACTIVE")
#undef NOACTIVE
#pragma push_macro("NOANONYMOUS")
#undef NOANONYMOUS
#pragma push_macro("NODICTIONARY")
#undef NODICTIONARY
#pragma push_macro("NOPLAINTEXT")
#undef NOPLAINTEXT
#pragma push_macro("PASS_CREDENTIALS")
#undef PASS_CREDENTIALS

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace util {

class $export PolicyUtils : public ::java::lang::Object {
	$class(PolicyUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyUtils();
	void init$();
	static bool checkPolicy(int32_t flags, ::java::util::Map* props);
	static $StringArray* filterMechs($StringArray* mechs, $ints* policies, ::java::util::Map* props);
	static const int32_t NOPLAINTEXT = 1;
	static const int32_t NOACTIVE = 2;
	static const int32_t NODICTIONARY = 4;
	static const int32_t FORWARD_SECRECY = 8;
	static const int32_t NOANONYMOUS = 16;
	static const int32_t PASS_CREDENTIALS = 512;
};

				} // util
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("FORWARD_SECRECY")
#pragma pop_macro("NOACTIVE")
#pragma pop_macro("NOANONYMOUS")
#pragma pop_macro("NODICTIONARY")
#pragma pop_macro("NOPLAINTEXT")
#pragma pop_macro("PASS_CREDENTIALS")

#endif // _com_sun_security_sasl_util_PolicyUtils_h_