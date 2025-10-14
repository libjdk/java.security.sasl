#ifndef _com_sun_security_sasl_CramMD5Base_h_
#define _com_sun_security_sasl_CramMD5Base_h_
//$ class com.sun.security.sasl.CramMD5Base
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HMAC_MD5")
#undef HMAC_MD5
#pragma push_macro("MD5_BLOCKSIZE")
#undef MD5_BLOCKSIZE
#pragma push_macro("SASL_LOGGER_NAME")
#undef SASL_LOGGER_NAME

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

class CramMD5Base : public ::java::lang::Object {
	$class(CramMD5Base, $HAS_FINALIZE, ::java::lang::Object)
public:
	CramMD5Base();
	void init$();
	static $String* HMAC_MD5($bytes* key, $bytes* text);
	virtual void clearPassword();
	virtual void dispose();
	virtual void finalize() override;
	virtual $String* getMechanismName();
	virtual $Object* getNegotiatedProperty($String* propName);
	static void initLogger();
	virtual bool isComplete();
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len);
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len);
	bool completed = false;
	bool aborted = false;
	$bytes* pw = nullptr;
	static const int32_t MD5_BLOCKSIZE = 64;
	static $String* SASL_LOGGER_NAME;
	static ::java::util::logging::Logger* logger;
};

			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("HMAC_MD5")
#pragma pop_macro("MD5_BLOCKSIZE")
#pragma pop_macro("SASL_LOGGER_NAME")

#endif // _com_sun_security_sasl_CramMD5Base_h_