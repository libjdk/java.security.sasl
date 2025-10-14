#ifndef _javax_security_sasl_SaslServer_h_
#define _javax_security_sasl_SaslServer_h_
//$ interface javax.security.sasl.SaslServer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace security {
		namespace sasl {

class $import SaslServer : public ::java::lang::Object {
	$interface(SaslServer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
	virtual $bytes* evaluateResponse($bytes* response) {return nullptr;}
	virtual $String* getAuthorizationID() {return nullptr;}
	virtual $String* getMechanismName() {return nullptr;}
	virtual $Object* getNegotiatedProperty($String* propName) {return nullptr;}
	virtual bool isComplete() {return false;}
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) {return nullptr;}
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) {return nullptr;}
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_SaslServer_h_