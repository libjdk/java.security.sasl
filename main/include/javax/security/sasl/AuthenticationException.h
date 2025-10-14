#ifndef _javax_security_sasl_AuthenticationException_h_
#define _javax_security_sasl_AuthenticationException_h_
//$ class javax.security.sasl.AuthenticationException
//$ extends javax.security.sasl.SaslException

#include <javax/security/sasl/SaslException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class $import AuthenticationException : public ::javax::security::sasl::SaslException {
	$class(AuthenticationException, $NO_CLASS_INIT, ::javax::security::sasl::SaslException)
public:
	AuthenticationException();
	void init$();
	void init$($String* detail);
	void init$($String* detail, $Throwable* ex);
	static const int64_t serialVersionUID = (int64_t)0xCE5251D8228ACEA1;
	AuthenticationException(const AuthenticationException& e);
	AuthenticationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_AuthenticationException_h_