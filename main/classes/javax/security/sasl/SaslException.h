#ifndef _javax_security_sasl_SaslException_h_
#define _javax_security_sasl_SaslException_h_
//$ class javax.security.sasl.SaslException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class $export SaslException : public ::java::io::IOException {
	$class(SaslException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	SaslException();
	void init$();
	void init$($String* detail);
	void init$($String* detail, $Throwable* ex);
	virtual $Throwable* getCause() override;
	virtual $Throwable* initCause($Throwable* cause) override;
	virtual $String* toString() override;
	$Throwable* _exception = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x3F8EA98B912AD08A;
	SaslException(const SaslException& e);
	SaslException wrapper$();
	virtual void throwWrapper$() override;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_SaslException_h_