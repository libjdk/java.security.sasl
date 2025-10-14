#ifndef _com_sun_security_sasl_util_AbstractSaslImpl_h_
#define _com_sun_security_sasl_util_AbstractSaslImpl_h_
//$ class com.sun.security.sasl.util.AbstractSaslImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_QOP")
#undef DEFAULT_QOP
#pragma push_macro("DEFAULT_STRENGTH")
#undef DEFAULT_STRENGTH
#pragma push_macro("HIGH_STRENGTH")
#undef HIGH_STRENGTH
#pragma push_macro("INTEGRITY_ONLY_PROTECTION")
#undef INTEGRITY_ONLY_PROTECTION
#pragma push_macro("LOW_STRENGTH")
#undef LOW_STRENGTH
#pragma push_macro("MAX_SEND_BUF")
#undef MAX_SEND_BUF
#pragma push_macro("MEDIUM_STRENGTH")
#undef MEDIUM_STRENGTH
#pragma push_macro("NO_PROTECTION")
#undef NO_PROTECTION
#pragma push_macro("PRIVACY_PROTECTION")
#undef PRIVACY_PROTECTION
#pragma push_macro("QOP_MASKS")
#undef QOP_MASKS
#pragma push_macro("QOP_TOKENS")
#undef QOP_TOKENS
#pragma push_macro("SASL_LOGGER_NAME")
#undef SASL_LOGGER_NAME
#pragma push_macro("STRENGTH_MASKS")
#undef STRENGTH_MASKS
#pragma push_macro("STRENGTH_TOKENS")
#undef STRENGTH_TOKENS

namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Logger;
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace util {

class $export AbstractSaslImpl : public ::java::lang::Object {
	$class(AbstractSaslImpl, 0, ::java::lang::Object)
public:
	AbstractSaslImpl();
	void init$(::java::util::Map* props, $String* className);
	static int8_t combineMasks($bytes* in);
	static int8_t findPreferredMask(int8_t pref, $bytes* in);
	virtual $Object* getNegotiatedProperty($String* propName);
	static void intToNetworkByteOrder(int32_t num, $bytes* buf, int32_t start, int32_t count);
	virtual bool isComplete();
	static int32_t networkByteOrderToInt($bytes* buf, int32_t start, int32_t count);
	static $bytes* parseProp($String* propName, $String* propVal, $StringArray* vals, $bytes* masks, $StringArray* tokens, bool ignore);
	static $bytes* parseQop($String* qop);
	static $bytes* parseQop($String* qop, $StringArray* saveTokens, bool ignore);
	static $bytes* parseStrength($String* strength);
	static void traceOutput($String* srcClass, $String* srcMethod, $String* traceTag, $bytes* output);
	static void traceOutput($String* srcClass, $String* srcMethod, $String* traceTag, $bytes* output, int32_t offset, int32_t len);
	bool completed = false;
	bool privacy = false;
	bool integrity = false;
	$bytes* qop = nullptr;
	int8_t allQop = 0;
	$bytes* strength = nullptr;
	int32_t sendMaxBufSize = 0;
	int32_t recvMaxBufSize = 0;
	int32_t rawSendSize = 0;
	$String* myClassName = nullptr;
	static $String* SASL_LOGGER_NAME;
	static $String* MAX_SEND_BUF;
	static ::java::util::logging::Logger* logger;
	static const int8_t NO_PROTECTION = (int8_t)1;
	static const int8_t INTEGRITY_ONLY_PROTECTION = (int8_t)2;
	static const int8_t PRIVACY_PROTECTION = (int8_t)4;
	static const int8_t LOW_STRENGTH = (int8_t)1;
	static const int8_t MEDIUM_STRENGTH = (int8_t)2;
	static const int8_t HIGH_STRENGTH = (int8_t)4;
	static $bytes* DEFAULT_QOP;
	static $StringArray* QOP_TOKENS;
	static $bytes* QOP_MASKS;
	static $bytes* DEFAULT_STRENGTH;
	static $StringArray* STRENGTH_TOKENS;
	static $bytes* STRENGTH_MASKS;
};

				} // util
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("DEFAULT_QOP")
#pragma pop_macro("DEFAULT_STRENGTH")
#pragma pop_macro("HIGH_STRENGTH")
#pragma pop_macro("INTEGRITY_ONLY_PROTECTION")
#pragma pop_macro("LOW_STRENGTH")
#pragma pop_macro("MAX_SEND_BUF")
#pragma pop_macro("MEDIUM_STRENGTH")
#pragma pop_macro("NO_PROTECTION")
#pragma pop_macro("PRIVACY_PROTECTION")
#pragma pop_macro("QOP_MASKS")
#pragma pop_macro("QOP_TOKENS")
#pragma pop_macro("SASL_LOGGER_NAME")
#pragma pop_macro("STRENGTH_MASKS")
#pragma pop_macro("STRENGTH_TOKENS")

#endif // _com_sun_security_sasl_util_AbstractSaslImpl_h_