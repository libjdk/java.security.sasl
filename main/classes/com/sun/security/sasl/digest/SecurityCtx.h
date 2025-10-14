#ifndef _com_sun_security_sasl_digest_SecurityCtx_h_
#define _com_sun_security_sasl_digest_SecurityCtx_h_
//$ interface com.sun.security.sasl.digest.SecurityCtx
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

class SecurityCtx : public ::java::lang::Object {
	$interface(SecurityCtx, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* unwrap($bytes* outgoing, int32_t start, int32_t len) {return nullptr;}
	virtual $bytes* wrap($bytes* dest, int32_t start, int32_t len) {return nullptr;}
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_digest_SecurityCtx_h_